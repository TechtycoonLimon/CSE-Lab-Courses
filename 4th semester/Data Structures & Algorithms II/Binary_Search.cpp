#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(1000);
    int total_element,index,target,x;

    cout<<"Enter the size of the Vector: ";
    cin>>total_element;
    for(index = 0; index < total_element; index++)
    {
        cin>>v[index];
        //cin>>x;
        //v.push_back(x);
    }
    sort(v.begin(),v.begin()+total_element);
    cout<<"Target : ";
    cin>>target;

    int left, right, mid;
    left = 0;
    right = total_element - 1 ;
    while(left <= right)
    {
        mid = left + (right-left)/2;//alternative mid = (left+right)/2;
        if(v[mid] == target)
        {
            cout<<"Target Found in the index "<<mid<<endl;
            return 0;
        }
        else if(v[mid] < target)
        {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
        //cout<<left<<" "<<mid<<" "<<right<<endl;
    }

    cout<<"Target not found in the vector"<<endl;
}

