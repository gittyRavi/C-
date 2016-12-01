# include<iostream>						// not good code
# include<cstdio>						// needs debugging
# include<conio.h>
using namespace std;

int strcmpre(char a[],char b[])
	{
		int n,flag=0;
		char *p,*t;
		p=&a[0];
		t=&b[0];
		do
		{
			p++;
			t++;
			flag=1;
		}while(*p==*t && (p!=NULL||t!=NULL));
			
		return flag;
		
	}
		
	int main()
	{
		int flag;
		char a[3]="Hi";
		char b[3]="Hi";
		flag=strcmpre(a,b);
		
		if(flag==1)
		{
			cout<<endl;
			cout<<"same"<<endl;
		}
		else
			cout<<"not same";
			
		return 0;
	}
