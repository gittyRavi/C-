# include <iostream>
using namespace std;
int main()
{
	int i=0,j=0,n;
	int a[i];
	cout <<"Enter a number : ";
	cin >>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			a[j]=j+1;
			cout <<a[j];
		}
		cout <<"\n";
	}
	return 0;
}
