#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node* link;
	};

struct node* head=NULL;

void add()
{
	struct node* new_Node=(struct node*)malloc(sizeof(struct node));
	if(new_Node==NULL)
		printf("No space Available!\n");
	else{
		int x;
		printf("Enter the element to be added:\n");
		scanf("%d",&x);
		new_Node->data=x;
		new_Node->link=head;
		head=new_Node;
	}
}

struct node* seq_Search(int x)
{
	if(head==NULL)
	{
		printf("LinkedList Empty!\n");
		return 0;
	}
	else{
		struct node* temp=head;
		while(temp!=NULL)
		{
			if(temp->data!=x)
				temp=temp->link;
			else
				return temp;
		}
		return temp;
	}
}

void insert_At(int x, int y)
{
	struct node* temp=seq_Search(x);
	if(temp==NULL)
	{
		printf("Element %d Not Found!\n",x);
	}
	else{
		struct node* new_Node=(struct node*)malloc(sizeof(struct node));
		new_Node->data=y;
		new_Node->link=temp->link;
		temp->link=new_Node;
	}
}

void print()
{
	if(head==NULL)
		printf("Empty List!\n");
	else{
		struct node* temp=head;
		if(temp==NULL)
			printf("Error!\n");
		else{
			while(temp!=NULL)
			{
				printf("%d-->",temp->data);
				temp=temp->link;
			}
		}
	}
}

int main()
{
	int i=0,x,y,opt=1;
	do{
		printf("Enter your Choice:\n\n1.Add elements.\n2.add after.\n3.search\n4.print\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:{
				       add();
				       break;
				}
			case 2:{
				       printf("Enter the element to be added:\n");
				       scanf("%d",&y);
				       printf("Enter after which element:\n");
				       scanf("%d",&x);
				       insert_At(x,y);
				       break;
				}
			case 3:{
				       printf("Enter the element to be searched:\n");
				       scanf("%d",&x);
				       struct node* res=seq_Search(x);
				       if(res==NULL)
				       {
					       printf("Element NOT present!\n");
					       break;
					}
				       else{
					       printf("The element is present.\n");
					       break;
					}
				}
			case 4:{
				       print();
				       break;
				}
			default:{
					 printf("Wrong choice!\n");
					break;
				}
		}
		printf("\nPress 1 to continue, to exit 0!\n");
		scanf("%d",&opt);
	}while(opt);
	return 0;
}
