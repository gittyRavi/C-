# include <iostream>
# include <string>
using namespace std;
int main(void)
{
	int n,i,j,k=1;
	string c;
	c="*";
	cout <<"Enter the number of lines to be printed\n";
	cin >>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout <<c<<k++;
		}
		cout <<c<<"\n";
	}
	cout <<"Total number of stars = "<<k+n-1<<"\n";
	return 0;
}
