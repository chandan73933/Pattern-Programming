#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,n;
cin>>n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=n-i;j++)
	{
	cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
	cout<<"*";
	}
	for(l=i-1;l>=1;l--)
	{
	cout<<"*";
	}
	cout<<"\n";
}


for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	cout<<" ";
	}
	for(k=1;k<=n-i;k++)
	{
	cout<<"*";
	}
	for(l=n-1;l>i;l--)
	{
	cout<<"*";
	}
	cout<<"\n";
	}

}
