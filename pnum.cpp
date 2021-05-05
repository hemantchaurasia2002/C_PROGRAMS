
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter a suitable value for n : ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Invalid Input"<<endl;
    }
    else
    {
         
        for(int i=1;i<=n;i++)
        {   
            
            if(n%i==0)
            {
                count++; 
            }
        }
    }
    if(count==2)
    {
        cout<<"It is a prime number";
    }
    else
    {
        cout<<"It is not a prime number";
    }
    return 0;
}