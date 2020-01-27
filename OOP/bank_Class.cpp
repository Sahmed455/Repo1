#include<iostream>

int top=-1;

using namespace std;

class Acc{
		public:
		int acc_No;
		void add_Account()
		{
			cout<<"Enter the name of account holder:\t";
			cin>>user_Name;
			cout<<"Enter the type of account:\t";
			cin>>acc_Type;
			cout<<"Enter account No alloted:\t";
			cin>>acc_No;
			cout<<"Enter Balance to deposit:\t";
			cin>>Balance;
			cout<<"account_Created Successfully!\n";
		}
		void display_Bal()
		{
			cout<<"Balance:\t"<<Balance;
		}
		void display_Details()
		{
			cout<<"Name:\t"<<user_Name<<endl;
			cout<<"Account_No:\t"<<acc_No<<endl;
			cout<<"Account_Type:\t"<<acc_Type<<endl;
			cout<<"Balance:\tRs."<<Balance<<"/-\n";
		}
		void deposit_Money(int x)
		{
			Balance+=x;
		}
		void withdraw_Money(int x)
		{
			if((Balance-x)<1000)
			{
				cout<<"Amount NOT Sufficient!!!\n";
				return;
			}
			Balance-=x;
		}
		private:
		string user_Name;
		string acc_Type;
		double Balance;
}profile[10];

int ind_Search(int x)
{
	int i;
	for(i=0;i<=top;i++)
	{
		if(profile[i].acc_No==x)
			return i;
	}
	return -1;
}



int main()
{
	int opt,x,i,acc_ind;
	do{
	cout<<"\t\t\tMENU\t\t\t\n1.Add_Account\n2.deposit_Money\n3.withdraw_Money\n4.display_Details\n5.display_Balance\n";
		cout<<"6.EXIT!\n\nEnter your Choice:\t";
		cin>>opt;
		switch(opt)
		{
			case 1: if(top==9)
					cout<<"Accounts_Limit_Exceeded!v\n";
				else
				{
					profile[++top].add_Account();
				}
				break;
			case 2: cout<<"Enter your account No:\t";
				cin>>i;
				acc_ind=ind_Search(i);
				if(acc_ind==-1)
					cout<<"Account No invalid!\n";
				else
				{
					cout<<"Enter the amount to be deposited:\t";
					cin>>x;
					profile[acc_ind].deposit_Money(x);
				}
				break;
			case 3: cout<<"Enter your account No:\t";
				cin>>i;
				acc_ind=ind_Search(i);
				if(acc_ind==-1)
					cout<<"Account No invalid!\n";
				else
				{
					cout<<"Enter the amount to be withdrawn:\t";
					cin>>x;
					profile[acc_ind].withdraw_Money(x);
				}
				break;
			case 4: cout<<"Enter your account No:\t";
				cin>>i;
				acc_ind=ind_Search(i);
				if(acc_ind==-1)
					cout<<"Account No invalid!\n";
				else
					profile[acc_ind].display_Details();
				break;
			case 5: cout<<"Enter your account No:\t";
				cin>>i;
				acc_ind=ind_Search(i);
				if(acc_ind==-1)
					cout<<"Account No invalid!\n";
				else
					profile[acc_ind].display_Bal();
				break;
			case 6: break;
			default: "Wrong_INPUT!\n";
		}
	}while(opt!=6);
	return 0;
}
