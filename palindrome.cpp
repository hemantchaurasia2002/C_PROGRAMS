
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a suitable value of n : ";
    cin>>n;
    int rev=0;
    int r;
    int m=n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==m)
    {
        cout<<"It is a PALINDROME number.";
    }
    else
    {
        cout<<"It is not a PALINDROME number";
    }
}                         
