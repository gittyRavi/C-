#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<conio.h>
using namespace std;
class student
{
	private:								//can not be accessed outside the class
		string name;
		int rollno;
		float marks;
	public:									//can be accessed outside the class
		student()							//constructor to initiate values of member variables in the objects of the class
		{
			name="abc";						//they have no return types but can be parameterized
			rollno=0;
			marks=0;
		}
		student(const student &st)			//copy constrctor to copy value of a previous object to a new one
		{
			name=st.name;					
			rollno=st.rollno;
			marks=st.marks;
		}
		~student()							//destroys a previously created object
		{									//they have no return types and can not be parameterized
			cout<<"The class object is destroyed and memory is de-allocated"<<endl;
		}
		void set_st()						//member function(s)
		{
			cout<<"Enter student name : "<<endl;
			cin>>name;
			cout<<"Enter the roll no. : "<<endl;
			cin>>rollno;
			cout<<"Enter the marks : "<<endl;
			cin>>marks;
		}
		void get_st()
		{
			cout<<"Student name : "<<name<<endl;
			cout<<"Student Roll no. : "<<rollno<<endl;
			cout<<"Student Marks : "<<marks<<endl;
		}
};
string c="Y";							//global string variable c called by scope(::) resolution method in main()
int main()								//global values are hidden under local values 
{
	int i=0,n;
	string z=c;							//string z=::c gives same output because gloabal value is supressed by local value
	if(z=="Y"||z=="y"||z=="YES"||z=="Yes"||z=="yes"||z=="yES"||z=="yEs"||z=="YeS"||z=="YEs"||z=="yeS")
	{
		cout<<"Enter the no. of students : "<<endl;
		cin>>n;
		student st[n];
		for(i=0;i<n;i++)
		{
			st[i].set_st();
			cout<<endl;
		}
		cout<<"Student Details : "<<endl<<endl;
		for(i=0;i<n;i++)
		{
			st[i].get_st();
			cout<<endl;
		}
		cout<<"Do you want to continue : ";
		cin>>c;								//or we can itself assign values to ::c as cin>>::c without using local c
		cout<<endl;
		return main();						//function called again as return type
	}
	else
		return 0;							//return type in main()
		getch();							//time delay till keypress
}
