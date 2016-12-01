# include <iostream>
# include <cstring>
# include <cmath>
# include <algorithm>
using namespace std;
int main()
{
	int i,m,n;
	string a,b;
	cout <<"Enter the number of elements from start to be swapped in the string : \n";
	cin >>n;
	cout <<"\nEnter the characters in the string without space : \n";
	cin >>a;
	b=a;
	for(i=0;i<n;i++)
	{
		swap(a[i],b[n-i-1]);
	}
	cout <<b;
	return 0;
}
