#include<iostream>
#include<string.h>
#include<stdlib.h>
//i//nt t;
using namespace std;

class st{
	private:
	int roll;
	int marks;
	string name;
	public:
	void getroll(int x)
	{
		roll=x;
	}
	void getname(string nm)
	{
		name=nm;
	}
	void getmarks(int x)
	{
		marks=x;
	}
	void displayd()
	{
		cout<<"Name:\t"<<name<<endl;
		cout<<"RollNo:\t"<<roll<<endl;
		cout<<"Marks obtained:\t"<<marks<<endl;
	}
	int fetchroll()
	{
		return roll;
	}
};

class dept{
	private:
	st *s;
	public:
	int t;
	//public:
	dept()
	{
		//int t;
		cin>>t;
		s=(st *)malloc(t*(sizeof(st)));
	}
	void enroll()
	{
		string name;
		int i,r,m;
		for(i=0;i<t;i++)
		{
		cout<<"Enter the roll No of student:\t";
		cin>>r;
		((s+i)->getroll)(r);
		cout<<"Enter the name of student:\t";
		cin>>name;
		cout<<"Enter the marks of student:\t";
		cin>>m;
		((s+i)->getname)(name);
		((s+i)->getmarks)(m);
		}
	}
	void display(int x)
	{
		int i;
		for(i=0;i<t;i++)
		{
			int r=((s+i)->fetchroll)();
			if(r==x)
				((s+i)->displayd)();
		}
	}
	void displayall()
	{
		for(int i=0;i<t;i++)
		{
			((s+i)->displayd)();
			cout<<"----------\n";
		}
	
	}
};
	
//dept d;
int main()
{
	int opt1,opt2,x;
	cout<<"Enter the no of students in each of dept:\n";
	cout<<"Enter the no of students in CSE dept\n";
	dept cse;
	cout<<"Enter the no of students in ME dept\n";
	dept me;
	cout<<"Enter the no of students in CE dept\n";
	dept ce;
	cout<<"Enter the no of students in ECE dept\n";
	dept ece;
	cout<<"Enter the no of students in EE dept\n";
	dept ee;
	cout<<"Enter the no of students in MME dept\n";
	dept mme;
	do{
		cout<<"\t\t\t\tMENU:\n1:CSE Dept.\t2:ME Dept\t3.CE Dept\t4.ECE Dept\t5.EE Dept\t6.MME Dept\n\nEnter your choice:\t";
		cin>>opt1;
		switch(opt1)
		{
			case 1: cout<<"\n1.Add students to cse dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: cse.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						cse.display(x);
						break;
					case 3: cse.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			case 2: cout<<"\n1.Add students to me dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: me.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						me.display(x);
						break;
					case 3: me.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			case 3: cout<<"\n1.Add students to ce dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: ce.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						ce.display(x);
						break;
					case 3: ce.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			case 4: cout<<"\n1.Add students to ece dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: ece.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						ece.display(x);
						break;
					case 3: ece.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			case 5: cout<<"\n1.Add students to ee dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: ee.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						ee.display(x);
						break;
					case 3: ee.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			case 6: cout<<"\n1.Add students to mme dept\n2.display details of student\n3.display details of all students\n";
				cin>>opt2;
				switch(opt2)
				{
					case 1: mme.enroll();
						break;
					case 2: cout<<"Enter the roll no:\t";
						cin>>x;
						mme.display(x);
						break;
					case 3: mme.displayall();
						break;
					default: cout<<"Wrong_Input!\n";
						 break;
				}
				break;
			default: cout<<"Wrong_Input!\n";
		}
		cout<<"Press 0 to continue else exit\n";
		cin>>opt1;
	}while(opt1==0);
	return 0;
}
