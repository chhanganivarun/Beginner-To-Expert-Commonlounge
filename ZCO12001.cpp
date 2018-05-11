#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int currdpos=0,maxdpos=0,maxd=0,flag=0,currd=0,maxlen=0,currlen=0,maxlpos=0,temp=0;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			if(currd==0)
				currdpos=i;
	
			currd++;
			if(currd>maxd)
			{
				flag=1;
				temp=currd;
				maxdpos=i;
				maxd=temp;
			}
		}
		if(x==2)
		{
			currd--;
		}
		if(currd!=0)
		{
			currlen++;
			if(currlen>maxlen)
			{
				maxlpos=currdpos;
				maxlen=currlen;
			}
		}
		else
			currlen=0;
	}
	cout<<maxd<<" "<<maxdpos+1<<" "<<maxlen+1<<" "<<maxlpos+1<<endl;
	
}
