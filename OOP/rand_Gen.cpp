#include<bits/stdc++.h>

using namespace std;

time_t now=time(0);
unsigned long long int x0=((int)now),a=1,m=5;

int myrand()
{
	int i,rand_No;
	x0=(x0*856433)%92640239829843;
	return (x0%50);
}

int main()
{
	int rand_No[10];
	float chi_Square=0.0;
	int rd;
	int n,i;
	for(i=0;i<10;i++)
	{
		rand_No[i]=myrand();
		/*while(rand_No[i]>50 && rand_No[i]<1)
		{
			if(rand_No[i]>50)
				rand_No[i]%=5;
			if(rand_No[i]<1)
				rand_No[i]+=10;
		}*/
	//	cout<<"rand_No:\t"<<rand_No[i]<<endl;
		rd=rand()%50;
		/*while(rd>50 && rd<1)
		{
			if(rd>50)
				rd/=50;
			if(rd<1)
				rd=rd+100;
		}*/
	//	cout<<"rd:\t"<<rd<<endl;
		chi_Square+=(pow((rand_No[i]-rd),2)/rd);
	//	cout<<"chi_Square:\t"<<chi_Square<<endl;
	}
	cout<<"\nFinal_Chi:\t\t\t"<<chi_Square<<endl;
	//cout<<"Power Test:\t\t\t"<<pow(3,2)<<endl;
	cout<<now<<endl;
	return 0;
}
	
