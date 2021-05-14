//@hc

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int m,n;
    cout<<"Enter 2 numbers : ";
    cin>>m>>n;
    //Loop starts here
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else if(n>m)
        {
            n=n-m;
        }
        
    }cout<<"GCD : "<<m; 
}