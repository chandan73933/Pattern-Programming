#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for(i=0;i<n/2;i++)
{
	for(j=0;j<1;j++)
	{cout<<"*";
	}
	for(j=0;j<(n/2)-1;j++)
	{
	cout<<" ";
	}
	for(j=0;j<1;j++)
	{
	cout<<"*";
	}
	for(j=0;j<n/2;j++)
	{
	if(i==0)
	cout<<"*";
	else
	cout<<" ";
	}
	cout<<endl;
}
for(i=0;i<n;i++)
{
cout<<"*";
}
cout<<endl;
for(i=0;i<n/2;i++)
{
	for(j=0;j<n/2;j++)
	{
	if(i==(n/2)-1)
	cout<<"*";
	else
	cout<<" ";
	}
	for(j=0;j<1;j++)
	{
	cout<<"*";
	}
	for(j=0;j<(n/2)-1;j++)
	{
	cout<<" ";
	}
	for(j=0;j<1;j++)
	{
	cout<<"*";
	}
	cout<<endl;
}
}
