//@hc

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int sum=0;
    int A[]={2,4,6,8,10,12,14,16,18,20};
    {
        for(int i=0;i<10;i++)
        {
            sum=sum+A[i];
        }
        cout<<sum;
    }


}    