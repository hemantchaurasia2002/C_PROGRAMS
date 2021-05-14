
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,r,rev=0;
    cout<<"Please enter a suitable value for n : ";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"Reverse of the number is : "<<rev;
}