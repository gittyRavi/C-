# include<iostream>
# include "stack"

using namespace std;

int main()
	{
		int n,j[n],*p;
		p=j;
		stack<int> s;
		cout<<"Enter number of elements : ";
		cin>>n;
		cout<<"Enter one by one : "<<endl;			
		for(int i=0;i<n;i++)
		{
			cin>>*p;
			s.push(*p);						// insert values in stack
			*p++;
		}
		cout<<endl;
		cout<<"Contents : ";
		do{									// stack gives latest entry as first output followed by second & others
			cout<<s.top()<<" ";				// gives output
			s.pop();						// deletes last entry
		}while(!s.empty());					// isempty() function check on stack s
		cout<<endl;
		return 0;
		system("PAUSE");
	}
