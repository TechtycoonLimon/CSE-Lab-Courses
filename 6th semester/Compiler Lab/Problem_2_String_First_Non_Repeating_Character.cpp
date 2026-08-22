#include <iostream>
#include <string>
using namespace std;

char firstNonRepeating(string s) {
    int freq[26] = {0};

    // Count frequency of each character
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    // Find the first character with frequency 1
    for (char ch : s) {
        if (freq[ch - 'a'] == 1) {
            return ch;
        }
    }

    return '-';   // Indicates no unique character
}

int main() {
    string s;
    cin >> s;

    char ans = firstNonRepeating(s);

    if (ans == '-')
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}