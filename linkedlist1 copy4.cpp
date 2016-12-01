#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;

struct node
	{
		int val;
		node *next;
	}*head,*last,*temp,*curr;

bool isEmpty(node *head);
void insertfirstnode(node *&head,node *&last,int val);
void insert(node *&head,node *&last,int val);
void remove(node *&head);
char menu();
void showList(node *curr);

int main()
	{
		temp=NULL;
		head=NULL;
		last=NULL;
		int val;
		char ch;
		while(1)
			{
				ch=menu();
				switch(ch)
					{
						case'1':cout<<"Enter the value.";
								cin>>val;
								insert(head,last,val);
								break;
						case'2':remove(head);
								break;
						case'3':showList(head);
								break;
						case'4':exit(0);
								break;
						default:cout<<"Enter correct choice(1-4)."<<endl;
								break;
					}
			}
		return 0;
	}
	
bool isEmpty(node *head)
	{
		if(head==NULL)
			return true;
		else
			return false;
	}
	
void insertfirstnode(node *&head,node *&last,int val)
	{
		temp=new node;
		temp->val=val;
		temp->next=NULL;
		head=temp;
		last=temp;
	}
	
void insert(node *&head,node *&last,int val)
	{
		if(isEmpty(head))
			insertfirstnode(head,last,val);
		else
			{
				temp=new node;
				temp->val=val;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
	}
	
void remove(node *&head)
	{
		if(isEmpty(head))
			cout<<"The list is already empty."<<endl<<endl;
		else
			{
				temp=head;
				head=head->next;
				delete temp;
			}
	}
	
void showList(node *curr)
	{
		if(isEmpty(head))
			cout<<"The list is empty."<<endl<<endl;
		else
			{
				while(curr!=NULL)
					{
						cout<<"The list contains :"<<endl;
						cout<<curr->val<<" ";
						curr=curr->next;
					}
					cout<<endl<<endl;
			}
	}
	
char menu()
	{
		char choice;
		cout<<"Menu :"<<endl;
		cout<<"1.Insert node."<<endl;
		cout<<"2.Delete node."<<endl;
		cout<<"3.Show list."<<endl;
		cout<<"4.Exit."<<endl;
		cin>>choice;
		return choice;
	}

