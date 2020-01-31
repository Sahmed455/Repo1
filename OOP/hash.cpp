#include<bits/stdc++.h>
using namespace std;

struct node{
		int d;
		struct node *link;
};

struct bucket{
		int d;
		struct node *list;
}b[12];//modulo 12

struct node *temp;

struct node *create(int x)
{
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->link=NULL;
	p->d=x;
	return p;
}

void add(int x)
{
	if(
