# include <iostream>
# include <cstring>
# include <cmath>
# include <algorithm>
using namespace std;
int main()
{
	int i,j,n;
	string a,b;
	cout <<"Enter the number of elements in the string : \n";
	cin >>n;
	cout <<"\nEnter the characters in the string : \n";
	cin>>a;
	b=a;
	for(i=n-1;i>=0;i--)
	{
		for(j=n-i-1;j<n;j++)
		{
			b[j]=a[n-j-1];
			cout <<b[j];
		}
		return 0;
	}
	
}
