#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,m,o,p,n,x;
cin>>n;
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
