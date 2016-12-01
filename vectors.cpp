#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<conio.h>
#include<algorithm>
#include<vector>
using namespace std;
class numv
{
	protected:
		int i,n;
	public:
		void n_numv()
		{
			string s[i];
			cout<<"Enter the no. of vectors : "<<flush;
			cin>>i;
			cout<<"Enter the no. of vector elements of all vectors : "<<flush;
			cin>>n;
		}
};
class vec : public numv
{
	public:
		void vect()
		{
			int k;
			vector<string>s(n);
			cout<<"Enter elements for each : "<<endl;
			for(int j=0;j<i;j++)
			{
				cout<<"Enter for vector("<<j+1<<") : "<<endl;
				for(vector<string>::size_type k=0;k<n;k++)
				{
					cin>>s[k];
				}
				
			}
		}
};
int main()
{
	vec v;
	cout<<"Vector operations : "<<endl;
	v.n_numv();
	cout<<endl;
	cout<<"[Enter till last vector]"<<endl<<endl;
	v.vect();
	cout<<"You Entered all, to exit press Enter"<<endl;
	return 0;
	getch();
	
}
