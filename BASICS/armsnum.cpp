
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,r,sum=0,m;
    cout<<"Enter a suitable value of n : ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    
    if(sum==m)
    {
        cout<<"It is an armstrong number";
    }
    else
    {
        cout<<"It is not an armstrong number";
    }
}