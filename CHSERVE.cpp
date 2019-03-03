#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	if(t>=0 && t<=100000)
	{
		while(t--)
		{
			int p1, p2, k;
			cin>>p1>>p2>>k;
			if(((p1+p2)/k)%2==0)
				cout<<"CHEF";
			else
				cout<<"COOK";
			cout<<endl;		
		}
		return 0;
	}
}
