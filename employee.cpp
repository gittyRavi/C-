#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<conio.h>
using namespace std;
class employee
{
	private:
		int empno;
		string name;
		float empsal;
	public:
		void empdetails()
		{
			cout<<"Enter the Employee no. "<<endl;
			cin>>empno;
			cout<<"Enter the Employee name "<<endl;
			cin>>name;
			cout<<"Enter the Employee salary "<<endl;
			cin>>empsal;
		}	
		void displaydetails()
		{
			cout<<"The Employee no. is : ";
			cout<<empno<<endl;
			cout<<"The Employee name is : ";
			cout<<name<<endl;
			cout<<"The Employee salary is : ";
			cout<<empsal<<endl;
		}
};
int main()
{
	int i=0,n;
	cout<<"Enter the no. of Employees :\t";
	cin>>n;
	employee obj[n];
	for(i=0;i<n;i++)
	{
		obj[i].empdetails();
		cout<<endl;
	}
	cout<<endl;
	cout<<"The Employee details are :"<<endl;
	for(i=0;i<n;i++)
	{
		obj[i].displaydetails();
		cout<<endl;
	}
	getch();
	return 0;
}
