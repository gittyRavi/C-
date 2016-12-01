# include<iostream>									// needs debugging
# include<cstdio>
# include<conio.h>
using namespace std;

struct node											// list element or node containing data and reference to next node
	{
		int data;									// next is a pointer to next node with return type node
		struct node* next;							// and its node members are accessed through -> operator 
	};
	
	bool isEmpty(node *head);						// last->data means look at the node to which last points and access
	char menu();									// the element data
	void insertAsFirstElement(node *&head,node *&last,int data);
	void insert(node *&head,node *&last,int data);
	void remove(node *&head,node *&last);
	void showList(node *curr);

		int main()
		{
			node* head=NULL;
			node* last=NULL;
			char choice;
			int data;
			
			do{
				choice=menu();
				
				switch(choice)
					{
						case'1': cout<<"Please enter a number.";
								 cin>>data;
								 insert(head,last,data);
								 break;
						case'2': remove(head,last);
								 break;
						case'3': showList(head);
								 break;
						default: cout<<"System exit."<<endl;
					}
				
			}while(choice!='4');
			return 0;
		}
		
			
	bool isEmpty(node *head)			// done
		{
			if(head==NULL)
				return true;
			else
				return false;
		}
	char menu()					// done
		{
			char choice;
			
			cout<<"Menu : "<<endl;
			cout<<"1.Add an item."<<endl;
			cout<<"2.Remove an item."<<endl;
			cout<<"3.Show the list."<<endl;
			cout<<"4.Exit."<<endl<<endl;
			
			cin>>choice;
			cout<<endl;							// takes value 1,2,3,4
			
			return choice;	
		}
	void insertAsFirstElement(node *&head,node *&last,int data)		//done
		{
			node* temp=new node;
			temp->data=data;
			temp->next=NULL;
			head=temp;
			last=temp;
		}
	void insert(node *&head,node *&last,int data)			// done
		{
			if(isEmpty(head))
				insertAsFirstElement(head,last,data);
			else
				{
					node* temp=new node;
					temp->data=data;
					temp->next=NULL;
					last->next=temp;					// see this first last links the current and previous node
					last=temp;							// then moves to the current node		
				}
				
		}
	void remove(node *&head,node *&last)						// some problem is here
		{
			if(isEmpty(head))
				{
					cout<<"The list is already empty."<<endl;
				}
			else
				{
					node *temp=head;			// temp now points to the same node as head
					head=head->next;			// head now points to next node
					delete temp;				// delete the previous node
				}
		}
	void showList(node *curr)					// done
		{
			if(isEmpty(curr))
				{
					cout<<"The list is empty."<<endl<<endl;
				}
			else
				{
					cout<<"The list contains : "<<endl<<endl;
					
					while(curr!=NULL)
						{
							cout<<curr->data<<" ";
							curr=curr->next;
						}
					cout<<endl<<endl;
				}
		}
