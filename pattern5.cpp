# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	int n,i,j,k;
	string c,s;
	c=" ";
	s="*";
	cout <<"Enter the number of lines to be printed\n";
	cin >>n;
	for(i=0;i<n;i++)
	{
		for(j=n-i-1;j>=1;j--)
		{
			cout <<c;
		}
		for(k=0;k<=2*i;k++)
		{
			cout <<s;
		}
		cout <<"\n";
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			cout <<c;
		}
		for(k=1;k<=2*i-1;k++)
		{
			cout <<s;
		}
		cout <<"\n";
	}
	return 0;
}
