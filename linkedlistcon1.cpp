# include<iostream>									// needs debugging
# include<cstdio>
# include<conio.h>
using namespace std;

struct node											// list element or node containing data and reference to next node
	{
		int data;									// next is a pointer to next node with return type node
		struct node* next;							// and its node members are accessed through -> operator 
	};
int list(int n)										// list iterator
	{
		int i;
		struct node *nw,*h,*t;
		
		nw=new node;								// h=head pointer t=temporary pointer nw=new node pointer
		h=nw;
		t=nw;
		
		for(i=0;i<n;i++)	
			{
				nw->data=i+1;
				nw=new node;
				t->next=nw;
			}
			
			nw->next=NULL;
			
			cout<<t->data;							//write to output all list content
			
		return 0;
	}

int main()
	{	int n;
		cin>>n;
		list(n);
		return 0;
	}
