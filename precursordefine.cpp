# include<iostream>
# include<cstdio>
# include<conio.h>
# include<iomanip>
# define MOD 1000000007
# define PI 3.1415
# define Circle_Area(radius) (PI*(radius)*(radius))
# define Circle_Perimeter(radius) (PI*(radius)*2)
using namespace std;

int main()
	{
		float s;
		long double area,perimeter;
		cout<<"Radius : ";
		cin>>s;
		area=Circle_Area(s);
		perimeter=Circle_Perimeter(s);
		cout<<endl;
		cout<<"Area : "<<area<<fixed<<setprecision(9);
		cout<<endl;
		cout<<"Perimeter : "<<perimeter;
		cout<<endl;
		long double t;
		t=s/MOD;
		cout<<"t : "<<t;
		return 0;
	}
