# include <iostream>
# include <string>
using namespace std;
float pow(float x, int y)
{
	float t;
	int i;
	t=x;
	if(y==0)
	return t=1;
	else if(y==1)
	return t=x;
	else
     	for(i=2;i<=y;i++)
     	{
			t=x*t;	
		}
		return t;
}
int main()
{
	float m;
	int n;
	cout <<" Enter a rational number and an integer as its power ( a^b ) :\n";
	cout <<" a = ";
	cin >>m;
	cout <<" \n b = ";
	cin >>n;
	cout <<" \n a^b is : "<<pow(m,n);
	return 0;
}
