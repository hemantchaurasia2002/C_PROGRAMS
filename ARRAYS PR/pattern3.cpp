//pattern 3
//@hc


#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //if(i+j<=3)
            if(i+j>=3)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }cout<<endl;
    }
}