#include<bits/stdc++.h>
using namespace std;

//recursive approach to find gcd
int gcd(int a, int b)
{
    if(b==0)
        return a;
   return gcd(b,a%b);
}

int main()
{
    int number1,number2,temp;
    cin>>number1>>number2;
    //number1 = gcd(number1,number2);
    //Naive approach
    while(number2 != 0)
    {
        temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }
    cout<<"Gcd is "<<number1<<endl;
}
