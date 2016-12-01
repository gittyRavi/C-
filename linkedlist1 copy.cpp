# include<iostream>					// needs debugging
# include<cstdio>
# include<conio.h>
using namespace std;

struct node
	{
		int info;
		node* next;
	}*head,*last,*curr,*temp;
	
	bool isEmpty(node* head);
	void insertFirstElement(node* &head,node* &last, int info);
	void insert(node* &head,node* &last, int info);
	void remove(node* &head,node* &last);
	void showList(node* curr);
	char menu();
	
	int main()
		{
			head=NULL;
			last=NULL;
			char ch;
			int info;
			do
				{
					ch=menu();
					switch(ch)
						{
							case'1':cout<<"Enter a value."<<endl;
									cin>>info;
									insert(head,last,info);
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
				{return true;}
			else
				{return false;}
		}
	char menu()
		{
			char choice;
			cout<<"menu : "<<endl;
			cout<<"1.Enter a new node. "<<endl;
			cout<<"2.Remove a value. "<<endl;
			cout<<"3.Show the list elements. "<<endl;
			cout<<"4.Exit "<<endl;
			cin>>choice;
			cout<<endl;
			return choice;
		}
	void insertFirstElement(node* &head,node* &last,int info)
		{
			temp=new node;
			temp->info=info;
			temp->next=NULL;
			head=temp;
			last=temp;
		}
	void insert(node* &head,node* &last,int info)
		{
			if(isEmpty(head))
			{
				insertFirstElement(head,last,info);			// why codeblocks are causing problem
			}
			else
			{
				temp=new node;
				temp->info=info;
				temp->next=NULL;
				last->next=temp;
				last=temp;
			}
		}
	void remove(node* &head,node* &last)
		{
			if(isEmpty(head))
				{cout<<"The list is already empty."<<endl<<endl;}
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
				{cout<<"The list is empty."<<endl<<endl;}
			else
				{
					cout<<"The list contains :"<<endl;
					while(curr!=NULL)
					{
						cout<<curr->info<<" ";
						curr=curr->next;
					}
					cout<<endl<<endl;
				}
		}
