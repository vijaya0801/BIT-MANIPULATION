#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int limit,n,flag=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	limit=1<<n;
	for(int i=0;i<limit;i++)
	{
		int sum=0;
		for(int j=0;j<n;j++)
			if((1<<j)&i)
				sum=sum+a[j];
			else
				sum=sum-a[j];
		if(sum%360==0) flag=1;
		
	}
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
