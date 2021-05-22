
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5]={3,6,9,12,15};
    int *p=A;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

}