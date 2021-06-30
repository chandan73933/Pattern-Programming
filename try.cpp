#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,m,o,p,n,x;
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	cout<<"*";
	}
	for(k=n-i;k>=1;k--)
	{
	cout<<" ";
	}
	for(l=1;l<=n-i;l++)
	{
	cout<<" ";
	}
	for(m=1;m<=i;m++)
	{
	cout<<"*";
	}
	cout<<"\n";
}
for(i=1;i<=n;i++)
{
	for(j=n;j>=i;j--)
	{
	cout<<"*";
	}
	for(k=2;k<=i;k++)
	{
	cout<<" ";
	}
	for(l=2;l<=i;l++)
	{
	cout<<" ";
	}
	for(m=n;m>=i;m--)
	{
	cout<<"*";
	}
	cout<<"\n";
}
}
