#include<bits/stdc++.h>
using namespace std;
int main()
{
	int maxLead=0;
	int player=1;
	int n;
	cin>>n;
	int p1=0,p2=0;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		p1+=x;
		p2+=y;
		if(maxLead<abs(p1-p2))
		{
			maxLead=abs(p1-p2);
			player=(p2>p1)?2:1;
		}
	
	}
	cout<<player<<" "<<maxLead<<endl;
}
