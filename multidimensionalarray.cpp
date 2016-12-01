# include<iostream>
# include<cstdio>
# include<conio.h>
using namespace std;

class men
	{
		private:
			int n;
			float m[][2];
		public:
			float amtheight,amtweight;
			men()									//constrctor
				{
					n=1;
					amtheight=0;
					amtweight=0;
				}
			men(const men &man)						//copy-constructor
				{
					n=man.n;
					amtheight=man.amtheight;
					amtweight=man.amtweight;
				}
			~men()									//destructor
				{
					//class object is destroyed and memory is de-allocated
				}
			float set_men()
				{
					cout<<"Enter number of men : ";
					cin>>n;
					
					for(int i=0;i<n;i++)
						{
							cout<<"For men("<<i+1<<") ,\n";
							cout<<"Height : ";
							cin>>m[i][0];			//mheight
							cout<<"Weight : ";
							cin>>m[i][1];
						}
						
					return 0;
				}
			int get_men()
				{
					amtheight=m[0][0];
					amtweight=m[0][1];
					
					for(int i=1;i<n;i++)
						{
							amtheight+=m[i][0];
							amtweight+=m[i][1];
						}
						
					amtheight=(amtheight/n);
					amtweight=(amtweight/n);
					cout<<"Average height of men : "<<amtheight<<endl;
					cout<<"Average weight of men : "<<amtweight<<endl;
					
					return 0;
					
				}
	};
	int main()
		{
			men t;
			t.set_men();
			t.get_men();
			return 0;
		}
