# include <iostream>					//needs debugging not a good code
# include <cstdio>
# include <conio.h>		
using namespace std;

int main()
	{
		long long n;
		int i,j,t=0;
		cin>>n;							//no. of test cases
		int a[n][n];
		for(i=0;i<n;i++)				// determine existing friends code not good
		{
			for(j=0;j<n;j++)
			{
				
				if(i==j){a[i][j]=0;}
				else  if(i!=j)
					{cin>>a[i][j];a[j][i]=a[i][j];}
					if(a[j][i]>0){a[i][j]=1;a[j][i]=1;}
			}
			
		}
	
		cout<<endl;
		for(i=0;i<n;i++)				// friend matrix i<->j=1 then friends i<->j=0 then not friends
		{
			for(j=0;j<n;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		for(i=0;i<n;i++)				// to compute number of friend suggestions
		{
			for(j=0;j<n;j++)
			{
				if(i!=j && a[i][j]==0){t+=1;}
			}
		}
		cout<<endl;
		cout<<t;						// number of friend suggestions
		return 0;
	}
