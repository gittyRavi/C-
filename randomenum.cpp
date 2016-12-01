#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<conio.h>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;
enum type{ a=0,c=2,d=4,e=6,f=8,g=10};
string t="Y";
int main()
{
	int z;
	type b;
	if(t=="Y"||t=="y")
	{
		cout<<"Enter a no. : "<<endl;
		cin>>z;
		b=static_cast<type>(z);
		if(b==static_cast<type>(::a)||b==static_cast<type>(::c)||b==static_cast<type>(::d)||b==static_cast<type>(::e)||b==static_cast<type>(::f)||b==static_cast<type>(::g))
		{
			cout<<endl;
			cout<<"True"<<endl<<endl;
		}
		else
		{
			cout<<endl;
			cout<<"False"<<endl<<endl;
		}
		cout<<"Do you want to continue (if 'yes' enter 'Y' or 'y' only ) : ";
		cin>>t;
		cout<<endl;
	
		return main();
	}
	else
		return 0;
		getch();
}

