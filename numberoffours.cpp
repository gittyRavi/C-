# include <iostream>		//compatible till 19 digit number
# include <cstdio>
# include <conio.h>		
using namespace std;

int main()
	{
		int i,t,k;
		cin>>t;				//no. of test cases
		long long a[t];
		int n[t];
		for(i=0;i<t;i++)
		{
			cin>>a[i];
			n[i]=0;
		}
		for(i=0;i<t;i++)
		{
			do
			{
				k=a[i]%10;
				if(k==4)
				{
					n[i]+=1;
				}
				a[i]=a[i]/10;
			}while(a[i]>0);
			
		}
		
		for(i=0;i<t;i++)
		{
			if(n[i]>0)
			{
				cout<<"Fours : "<<n[i]<<endl;
			}
			else
				cout<<"No Fours"<<endl;
		}
		return 0;
		getch();
	}
