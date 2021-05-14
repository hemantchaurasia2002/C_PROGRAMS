//to create a pattern of * by nested array
//@hc 
#include <iostream>
#include <stdio.h>

using namespace std;
//for ladder pattern
/*int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>=j)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}*/

//for upside down ladder
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<=j)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}