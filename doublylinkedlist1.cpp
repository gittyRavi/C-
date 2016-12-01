#include<iostream>							// debugging required.
#include<cstdio>							// code by 1tho aka pournu aka shristhi aka sirji aka skeletu
#include<conio.h>
using namespace std;

struct node
	{
		int num;
		node* next;
		node* previous;
	}*temp,*head,*last,*curr;
	
bool isEmpty(node* curr);
void insertfirstnode(node* &head,node* &last,int info);
void insert(node* &head,node* &last,int info);
void remove(node* &curr);
void showList(node* curr);
char menu();
	
int main()
	{
		node* head=NULL;
		node* last=NULL;
		node* temp=NULL;
		int info;
		char ch;
		while(1)
			{
				ch=menu();
				switch(ch)
					{
						case'1':cout<<"Insertion."<<endl;
								cout<<"Enter value.";
								cin>>info;
								insert(head,last,info);
								break;
						case'2':cout<<"Deletion."<<endl;
								remove(head);
								break;
						case'3':cout<<"Deletion."<<endl;
								remove(last);
								break;
						case'4':showList(head);
								break;
						case'5':showList(last);
								break;
						case'6':exit(0);
								break;
						default:cout<<"Enter the correct choice(1-6)."<<endl<<endl;
					}
			}
		return 0;
	}
	
bool isEmpty(node* curr)
	{
		if(curr==NULL)
			return true;
		else
			return false;
	}
	
void insertfirstnode(node* &head,node* &last, int info)
	{
		temp=new node;
		temp->num=info;
		temp->previous=NULL;
		temp->next=NULL;
		head=temp;
		last=temp;
	}
	
void insert(node* &head,node* &last, int info)
	{
		if(isEmpty(head))
			insertfirstnode(head,last,info);
		else
			{
				temp=new node;
				temp->num=info;
				temp->previous=last;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
	}
	
void remove(node* &curr)							// some error can be here.
	{	
		if(isEmpty(head))
					cout<<"The list is already empty."<<endl<<endl;
		else if(curr==head)
			{
						temp=head;
						head=head->next;
						delete temp;
			}

		else if(curr==last)
			{
				temp=last;
				last=last->previous;
				delete temp;
			}
		
		else								// can be used to delete an inter-mediate node
			{
				temp=curr;
				curr->next->previous=curr->previous;
				curr->previous->next=curr->next;
				curr=curr->next;
				delete temp;
			}
	}
	
void showList(node* curr)										// some error can be here.
	{
		if(curr==head)
			{
				if(isEmpty(head))
					cout<<"The list is empty."<<endl<<endl;
				else
					{
						cout<<"The list contains :"<<endl<<endl;
						while(curr!=NULL)
							{
								cout<<curr->num<<" ";
								curr=curr->next;
							}
					}
			}
		else if(curr==last)
			{
				if(isEmpty(head))					   // somepart of this code is not required.
					cout<<"The list is empty."<<endl<<endl;
				else
					{
						cout<<"The list contains :"<<endl<<endl;
						while(curr!=NULL)
							{
								cout<<curr->num<<" ";
								curr=curr->previous;
							}
					}
			}
		else
			{
				curr=head;						// change code for inter-mediate nodes.
				showList(curr);
			}
	}
	
char menu()
	{
		cout<<"\t\tDoubly linked list."<<endl<<endl;
		char choice;
		cout<<"Menu :"<<endl;
		cout<<"1.Insert node."<<endl;
		cout<<"2.Remove node from front."<<endl;
		cout<<"3.Remove node from last."<<endl;
		cout<<"4.Show list from front to last."<<endl;
		cout<<"5.Show list from last to first"<<endl;
		cout<<"6.Exit"<<endl;
		cin>>choice;
		return choice;
	}
