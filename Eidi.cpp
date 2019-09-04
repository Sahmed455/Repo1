#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i=0;t,a[3],c[18],j=0,k=0;
	cin>>t;
	while(i<t)
	{
		while(j<3)
		{
			cin>>a[j];
			j++;
		}
		cout<<endl;
		while(k<0)
		{
			cin>>c[a[k]];
			k++;
		}
		i++;
	}
	if(c[a[0]]<c[a]
