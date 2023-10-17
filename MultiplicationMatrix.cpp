#include<iostream>
using namespace std;

/* Time complexity o(n^3)
   T(n)=8T(n/2)+n^2 */

int main()
{
	int n,i,j,k,sum=0;
	cout<<"Enter how many n element in array ";
	cin>>n;
	int A[n][n],B[n][n],C[n][n];
	cout<<"matrix A\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter A["<<i<<"]["<<j<<"] element ";
			cin>>A[i][j];
		}
	}
	printf("\n");
	printf("matrix B\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter B["<<i<<"]["<<j<<"] element ";
			cin>>B[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				sum=sum+(A[i][k]*B[k][j]);
			}
			C[i][j]=sum;
		}
	}
	
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}
}
