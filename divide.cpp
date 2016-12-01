# include <iostream>
# include <cstring>
# include <cmath>
# include <iomanip>
using namespace std;
int main()
{
	double a,b; // with float error may come in decimal
	string c;
	cout <<"Enter your name\n";
	getline(cin,c); // getline() to input characters after spaces also
	cout <<c<<"\n";
	printf("name string bit address %d\n",&c);
	cout <<"Enter two numbers a and b to divide\n";
	cin >>a>>b;
	cout <<"When a is divided by b we get : "<<fixed<<setprecision(10)<<a/b<<endl; //iomanip for fixed and setprecision()
	return 0;
}
