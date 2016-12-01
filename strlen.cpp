# include <iostream>
# include <cstring>
using namespace std;
int main(void)
{	
	char c[256];
	cout <<"Enter your name : ";
	cin >>c;
	cout <<"String length before null character is : "<<(unsigned)strlen(c);
	return 0;
}
