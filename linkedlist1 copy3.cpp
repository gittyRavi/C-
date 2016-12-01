#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;

struct node
	{
		int val;
		node* next;
	}*temp,*head,*last,*curr;
	
void insertfirstnode(node* &head,node* &last,int val);
void insert(node* &head,node* &last,int val);
bool isEmpty(node* head);
char menu();
void showList(node* curr);
void remove(node* &head,node* &last);

int main()
	{
		temp=NULL;
		head=NULL;
		last=NULL;
		char ch;
		int val;
		ch=menu();
		do
			{
				switch(ch)
					{
						case'1':cout<<"Enter the value.";
								cin>>val;
								insert(head,last,val);
								break;
						case'2':cout<<"Removed the value.";
								remove(head,last);
								break;
						case'3':showList(head);
								break;
						default:cout<<"System exit."<<endl;
					}
					
			}while(ch!='4');
		return 0;
		system("PAUSE");
	}
	
bool isEmpty(node* head)
	{
		if(head==NULL)
			return true;
		else
			return false;
	}
	
void insertfirstnode(node* &head,node* &last,int val)
	{
		temp=new node;
		temp->val=val;
		temp->next=NULL;
		head=temp;
		last=temp;
	}
	
void insert(node* &head,node* &last,int val)
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
	
void remove(node* &head,node* &last)
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
	
void showList(node* curr)
	{
		if(isEmpty(curr))
			cout<<"The list is empty"<<endl<<endl;
		else
			{
				cout<<"The list contains : "<<endl<<endl;
				while(curr!=NULL)
					{
						cout<<curr->val<<" ";
						curr=curr->next;
					}
			}
	}
	
char menu()
	{
		char choice;
		cout<<"Menu : "<<endl<<endl;
		cout<<"1.Insert node."<<endl;
		cout<<"2.Remove node."<<endl;
		cout<<"3.Show list."<<endl;
		cout<<"4.Exit"<<endl;
		cin>>choice;
		return choice;
	}
