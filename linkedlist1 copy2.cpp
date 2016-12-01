# include<iostream>								// needs debugging
# include<cstdio>
# include<conio.h>
using namespace std;

struct node
	{
		int num;
		node* next;
	}*head,*last,*temp,*curr;

bool isEmpty(node *head);
void insertFirstElement(node* &head,node* &last, int num);
void insert(node* &head,node* &last,int num);
void remove(node* &head,node* &last);
char menu();
void showList(node* curr);

int main()
	{
		head=NULL;
		last=NULL;
		temp=NULL;
		char ch;
		int num;
		do
			{
				ch=menu();
				switch(ch)
					{
						case'1':cout<<"Enter the element.";
								cin>>num;
								insert(head,last,num);
								break;
						case'2':remove(head,last);
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
void insertFirstElement(node* &head,node* &last,int num)
	{
		temp=new node;
		temp->num=num;
		temp->next=NULL;
		head=temp;
		last=temp;
	}
void insert(node* &head,node* &last,int num)
	{
		if(isEmpty(head))
			insertFirstElement(head,last,num);
		else
			{
				temp=new node;
				temp->num=num;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
	}
char menu()
	{
		char choice;
		cout<<"Menu : "<<endl;
		cout<<"1.Add a new node."<<endl;
		cout<<"2.Remove a node."<<endl;
		cout<<"3.Show the list."<<endl;
		cout<<"4.Exit."<<endl;
		cin>>choice;
		return choice;
	}
void remove(node* &head,node* &last)
	{
		if(isEmpty(head))
			{cout<<"The list is already empty."<<endl<<endl;}			// why line is not escaped twice
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
			cout<<"The list is empty."<<endl<<endl;
		else
			{
				cout<<"The list contains : "<<endl<<endl;
				while(curr!=NULL)
					{
						cout<<curr->num<<" ";
						curr=curr->next;
					}
			}
	}
