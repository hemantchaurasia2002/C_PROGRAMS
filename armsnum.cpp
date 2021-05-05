
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,r;
    cout<<"Enter a suitable value of n : ";
    cin>>n;
    while(n==0)
    {
        r=n%10;
        r=n/10;
        cout<<r<<endl;
    }
    return 0;
}