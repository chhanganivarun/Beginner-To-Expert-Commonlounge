#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	vector<int> a(n1+n2+n3);
	for(int i=0;i<n1+n2+n3;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
//	cout<<"Sorted!\n";
	int total=0;
	vector<int> f;
	for(int i=0;i<n1+n2+n3;i++)
	{
		if(i<(n1+n2+n3-1)&&a[i]==a[i+1])
		{
			if(total!=0&&f[total-1]==a[i]);
			else
			{
				f.push_back(a[i]);
				total++;			
			}
		}
	}
	cout<<total<<"\n";
	for(int i=0;i<total;i++)
		cout<<f[i]<<"\n";

	
}
