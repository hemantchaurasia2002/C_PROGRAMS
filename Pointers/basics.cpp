//pointers basics cmds
//@hc

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x;
    cout<<"ENTER A SUITABLE VALUE FOR x - ";
    cin>>x;
    int *p;
    p=&x;
    cout<<"VALUE[x] : "<<x<<endl;
    cout<<"ADDRESS[x] : "<<&x<<endl;
    cout<<"VALUE[p] : "<<*p<<endl;
    cout<<"ADDRESS[p] : "<<&p<<endl;
    cout<<"POINTER[p] : "<<p<<endl;
}