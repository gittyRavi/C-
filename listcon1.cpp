# include<iostream>
# include "list"

using namespace std;

int main()
	{
		int i,n;
		list<int> s;
		listitr<int> p = s;
		cout<<"Enter number of elements : ";
		cin>>n;
		cout<<"Enter one by one : "<<endl;			
		for(int i=0;i<n;i++)
		{
			p.insert(i);
			p.zeroth();
		}
		cout<<endl;
		cout<<"Contents : ";
		for(p.first();+p;++p)							
		{	
			cout<<p()<<" ";					
		}				
		cout<<endl;
		return 0;
		system("PAUSE");
	}
