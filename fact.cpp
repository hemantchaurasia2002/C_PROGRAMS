#include <iostream>
#include <stdlib.h>


int main()
{
    int n;
    int fact=1;
    cout<<"Enter a suitablle value for n: ";
    cin>>n;
    if(n==0)
    {
        cout<<"Invalid Value";
    }
    else{

        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"Factorial is = "<<fact;
    }
}