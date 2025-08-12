#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &v)
{
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void mergeArray(vector<int> &v,int low,int mid,int high)
{
    int leftArraySize = mid - low +1;
    int rightArraySize = high - mid;
    vector<int> vleft(leftArraySize), vright(rightArraySize);
    // copying to the left array
    for(int i=low; i<=mid;i++)
    {
        vleft[i-low] = v[i];
    }
    // copying to the right array
    for(int i=mid+1; i<=high;i++)
    {
        vright[i-mid-1] = v[i];
    }

    int leftPoint = 0, rightPoint = 0, arrayPos = low;
    while((leftPoint<leftArraySize) && (rightPoint < rightArraySize))
    {
        if(vleft[leftPoint] <= vright[rightPoint])
        {
            v[arrayPos] = vleft[leftPoint];
            leftPoint++;
        }
        else{
            v[arrayPos] = vright[rightPoint];
            rightPoint++;
        }
        arrayPos++;
    }
    //printArray(v);
    while(leftPoint<leftArraySize)
    {
        v[arrayPos] = vleft[leftPoint];
        leftPoint++;
        arrayPos++;
    }
    while(rightPoint<rightArraySize)
    {
        v[arrayPos] = vright[rightPoint];
        rightPoint++;
        arrayPos++;
    }

}

void merge_sort(vector<int> &v,int low, int high)
{
    if(low < high)
    {
        int mid = low + (high - low)/2 ;
        merge_sort(v,low,mid);
        merge_sort(v,mid+1,high);
        mergeArray(v,low,mid,high);
    }
}



int main()
{
    vector<int> v = {10, 11, 5 , 5, 13, 1, 45, 15, 7, 55, 69};
    printArray(v);
    merge_sort(v, 0, v.size()-1);
    cout<<"After Sorting the Array: ";
    printArray(v);

}
