#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a suitable value for n : ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Invalid Input"<<endl;
    }
    else
    {
        cout<<"Factors are : "<<endl;    
        for(int i=1;i<=n;i++)
        {   
            
            if(n%i==0)
            {
                cout<<i<<endl;
            }
        }
    }
    
    return 0;
}