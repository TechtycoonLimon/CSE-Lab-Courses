#include<bits/stdc++.h>
#define sz 500
using namespace std;

long long dp[sz];

//recursion fibonacci
int fibo(int n)
{
    if(n<2)
        return n;
    return fibo(n-1)+fibo(n-2);
}

long long  fibo_rec(int n)
{
    //cout<<n<<"++"<<endl;
    if(n<2)
    {
        dp[n]=n;
        return dp[n];
    }
    if(dp[n]!=-1)
        return dp[n];
   dp[n]=fibo_rec(n-1)+fibo_rec(n-2);
   return dp[n];
   //cout<<n<<"++"<<endl;
}

int main()
{
    int i,n=50;
    for(i=0;i<=n;i++)
        dp[i]=-1;
    //dp[0]=0;
    //dp[1]=1;
    //Tabular method
   // for(i=2;i<=n;i++)
    //{
    //    dp[i]=dp[i-2]+dp[i-1];
    //}
    fibo_rec(n);
    for(i=0;i<=n;i++)
    {
        cout<<dp[i]<<" ";
    }
    //cout<<"Fibonacci of "<<n<<" is "<<dp[n]<<endl;;
}
