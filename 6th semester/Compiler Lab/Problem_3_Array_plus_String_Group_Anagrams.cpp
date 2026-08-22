#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string str : strs) {
        string key = str;
        sort(key.begin(), key.end());   // Create sorted key
        mp[key].push_back(str);         // Group anagrams
    }

    vector<vector<string>> result;

    for (auto it : mp) {
        result.push_back(it.second);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strs(n);

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> ans = groupAnagrams(strs);

    for (auto group : ans) {
        cout << "[ ";
        for (string word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}