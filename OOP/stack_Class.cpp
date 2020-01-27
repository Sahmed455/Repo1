#include<iostream>
#define MAX_SIZE 10

int top=-1;

using namespace std;

class stack{
		public:
		void push(int x)
		{
			if(top<MAX_SIZE-1)
				stack[++top]=x;
			else
				cout<<"Stack_OVERFLOW!\n";
		}
		
		int pop()
		{
			if(top>=0)
				return stack[top--];
			else
				return -1;
		}
		
		void display()
		{
			int i;
			if(top==-1)
			{
				cout<<"Stack_UNDERFLOW!\n";
				return;
			}
			cout<<"stack_STATUS:\n";
			for(i=0;i<=top;i++)
				cout<<stack[i]<<"\t";
			cout<<endl;
		}
		
		private:
		
		int stack[MAX_SIZE];
}s;

int main()
{
	int opt,x,i;
	do{
		cout<<"--------MENU--------\n1.PUSH\n2.POP\n3.Display\n4.EXIT!\n";
		cout<<"\nEnter Your choice:\t";
		cin>>opt;
		switch(opt)
		{
			case 1: cout<<"Enter the Element to be pushed into the stack:\t";
				cin>>x;
				s.push(x);
				s.display();
				break;
			case 2: x=s.pop();
				cout<<"The element "<<x<<" is popped out!\n";
				s.display();
				break;
			case 3: s.display();
				break;
			case 4: break;
			default: cout<<"Wrong_INPUT!\n";
		}
	}while(opt!=4);
	return 0;
}
