#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<conio.h>
#include<algorithm>
using namespace std;
class stdvtn
{
	private:
		int n;
		double sum,x,y;
	protected:
		double mean,var,s;
	public:
		stdvtn()
		{
			n=1;
			sum=0;
			x=0;
			y=0;
			mean=0;
			var=0;
		}
		stdvtn(const stdvtn &st)
		{
			n=st.n;
			sum=st.sum;
			x=st.x;
			y=st.y;
			mean=st.mean;
			var=st.var;
		}
		~stdvtn()
		{
			cout<<"The class object is destroyed and memory is de-allocated"<<endl;
		}
		int Mean()
		{	
			int i=0;
			cout<<"Enter the number of elements : ";
			cin>>n;
			double z[n];
			cout<<"Enter the elements one by one : "<<endl;
			for(i=0;i<n;i++)
			{
				cin>>z[i];
			}
			for(i=0;i<n;i++)
			{
				x=z[i];
				sum+=x;
			}
			mean=(sum/n);
			cout<<"Mean is : "<<mean<<endl;
			for(i=0;i<n;i++)
			{
				y=(pow((z[i]-mean),2));
				y+=y;
			}
			var=(y/n);
			return 0;
		}
		int sdv()
		{
			s=sqrt(var);
			cout<<endl;
			cout<<"The standard deviation is : "<<s<<endl<<endl;
			return 0;
		}
};
class prime : public stdvtn
{
	public:
	prime(){
	}
	prime(const prime &st){
	}
	~prime(){
	}
	int prm_check(int num)
	{
		int flag=0,j;
		for(j=2;j<=num/2;j++)
		{
			if(num%j==0)
			{
				flag=1;
				break;
			}
		}
		return flag;
	}
	int prm_get()
	{
		int flag,g,m=0;
		cout<<"The prime numbers between standard deviation and mean are : "<<endl<<endl;
		for(g=s+1;g<mean;g++)
		{
			flag=prm_check(g);
			if(flag==0)
			{
				m+=1;
				cout<<g<<" ";
			}
		}
		cout<<endl<<endl<<"The total no. of primes are : "<<m<<endl<<endl;
		return 0;
	}
};
int main()
{
	prime k;
	k.Mean();
	k.sdv();
	k.prm_get();
	return 0;
}
