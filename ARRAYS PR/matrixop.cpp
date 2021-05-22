
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*int A[2][3]={3,3,3,3,3,3};
    int B[2][3]={1,1,1,1,1,1};
    int C[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[2][3]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }*/
    	int a[2][3]={3,3,3,3,3,3};
	int b[2][3]={1,1,1,1,1,1};
	int c[2][3];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		count<<endl;

}