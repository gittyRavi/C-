# include<iostream>							// needs debugging
# include "queue"

using namespace std;

int main()
	{
		int n,j[n],*p;
		p=j;
		queue<int> s;
		cout<<"Enter number of elements : ";
		cin>>n;
		cout<<"Enter one by one : "<<endl;			
		for(int i=0;i<n;i++)
		{
			cin>>*p;
			s.push(*p);						// insert values in queue or use enqueue()
			*p++;
		}
		cout<<endl;
		cout<<"Contents : ";
		do{									// queue gives first entry as first output followed by second & others
			cout<<s.front()<<" ";			// gives output
			s.pop();						// deletes last entry or use dequeue()
		}while(!s.empty());					// isempty() function check on queue s
		cout<<endl;
		return 0;
		system("PAUSE");
	}
