#include<iostream>
#include<string.h>

using namespace std;

string n1,n2,str,rev;

void reverse(string str,int x)
{
	int i=0;
	for(i=x-1;i>=0;i--)
	{
		rev.push_back(str[i]);
	}
}

void add_No(string str1, string str2)
{
	if(str1.length()>str2.length())
	{
		add_No(str2,str1);
		return;
	}
	int i=0,j=0,l1=str1.length(),l2=str2.length(),extra,carry=0,sum;
	if(l2>=l1)
	{
		extra=l2-l1;
		for(i=l1-1;i>=0;i--)
		{
			sum=((str1[i]-'0')+(str2[i+extra]-'0')+carry);
			str.push_back((sum%10)+'0');
			carry=sum/10;
		}
		for(i=extra-1;i>=0;i--)
		{
			sum=((str2[i]-'0')+carry);
			str.push_back(sum%10+'0');
			carry=sum/10;
		}
		if(carry!=0)
			str.push_back(carry+'0');
		reverse(str,str.length());
	}
}

int main()
{
	
	cout<<"Enter the first number:\t";
	cin>>n1;
	cout<<"Enter the second number:\t";
	cin>>n2;
	add_No(n1,n2);
	cout<<"The sum is:\t"<<rev<<endl;
	return 0;
}
