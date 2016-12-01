#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;

struct node
	{
		int info;
		node *next;
	};
	
class queue
	{
		node *front,*rear;
		public:
			queue()						// constructor
				{
					front=NULL;
					rear=NULL;
				}
			void enqueue(node *temp,int info);
			void dequeue(node *temp);
			void showqueue(node *temp);
			char menu();
	};
	
	int main()
		{
			node *curr;
			int info;
			queue q;
			char ch;
			while(1)
				{
					ch=q.menu();
					switch(ch)
						{
							case'1':q.enqueue(curr,info);
									break;
							case'2':q.dequeue(curr);
									break;
							case'3':q.showqueue(curr);
									break;
							case'4':exit(0);
									break;
							default:cout<<"Please enter correct choice(1-4)."<<endl<<endl;
						}
				}
			return 0;
			getch();
		}
		
	void queue::enqueue(node *temp,int info)
		{
			cout<<endl<<"Insertion :"<<endl;
			cout<<"Enter a value."<<endl;
			cin>>info;
			temp=new node;
			temp->info=info;
			temp->next=NULL;
			if(front==NULL)
				front=temp;					// why rear=temp not needed
			else
				{
					rear->next=temp;
					rear=temp;
				}
			cout<<"New value is inserted."<<endl<<endl;
		}
	void queue::dequeue(node *temp)
		{
			if(front==NULL)
				{
					cout<<"The queue is already empty."<<endl<<endl;
				}
			else
				temp=front;
				front=front->next;
				cout<<"Deletion operation :"<<endl<<"Deleted value is "<<temp->info;
				delete temp;
		}
	void queue::showqueue(node *temp)
		{
			temp=front;
			if(front==NULL)
				{
					cout<<"The queue is empty."<<endl<<endl;
				}
			else
				{
					while(temp!=NULL)
					{
						cout<<"The queue is :"<<endl;
						cout<<temp->info<<" ";
						temp=temp->next;
					}
					cout<<"End."<<endl<<endl;
				}
		}
	char queue::menu()
		{
			char choice;
			cout<<"\t\tQueue using linked list."<<endl<<endl;
			cout<<"1.Insertion."<<endl;
			cout<<"2.Deletion."<<endl;
			cout<<"3.Show queue."<<endl;
			cout<<"4.Exit."<<endl;
			cout<<"Enter your choice(1-4) :"<<endl;
			cin>>choice;
			return choice;
		}
