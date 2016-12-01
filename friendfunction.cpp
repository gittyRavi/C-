# include<iostream>									//needs debugging 
# include<cstdio>									//works only when men::n >= women::n
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
			void set_men()
				{
					cout<<"Enter number of men : ";
					cin>>n;
					
					for(int i=0;i<n;i++)
						{
							cout<<"For man("<<i+1<<") ,\n";
							cout<<"Height : ";
							cin>>m[i][0];			//mheight
							cout<<"Weight : ";
							cin>>m[i][1];
						}
						
				}
			void get_men()
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
					cout<<"Average height of men : "<<amtheight<<"\t";
					cout<<"Average weight of men : "<<amtweight<<endl;
					
				}
	};
class women
	{
		private:
			int n;
			float w[][2];
		public:
			float awmtheight,awmtweight;
			women()									//constrctor
				{
					n=1;
					awmtheight=0;
					awmtweight=0;
				}
			women(const women &woman)						//copy-constructor
				{
					n=woman.n;
					awmtheight=woman.awmtheight;
					awmtweight=woman.awmtweight;
				}
			~women()									//destructor
				{
					//class object is destroyed and memory is de-allocated
				}
			void set_women()
				{
					cout<<"Enter number of women : ";
					cin>>n;
					
					for(int i=0;i<n;i++)
						{
							cout<<"For woman("<<i+1<<") ,\n";
							cout<<"Height : ";
							cin>>w[i][0];			//wmheight
							cout<<"Weight : ";
							cin>>w[i][1];
						}

				}
			void get_women()
				{
					awmtheight=w[0][0];
					awmtweight=w[0][1];
					
					for(int i=1;i<n;i++)
						{
							awmtheight+=w[i][0];
							awmtweight+=w[i][1];
						}
						
					awmtheight=(awmtheight/n);
					awmtweight=(awmtweight/n);
					cout<<"Average height of women : "<<awmtheight<<"\t";
					cout<<"Average weight of women : "<<awmtweight<<endl;
					
				}
				friend int comparision(men,women);
	};
	int comparision(men man,women woman)					// friend function
		{
			if((man.amtheight>=woman.awmtheight)&&(man.amtweight>=woman.awmtweight))
				{
				cout<<"Men have higher average height and weight"<<endl;
				}
			else if((man.amtheight<=woman.awmtheight)&&(man.amtweight<=woman.awmtweight))
				{
				cout<<"Women have higher average height and weight"<<endl;
				}
			else
				return 0;
		}
	
	int main()
		{
			men t;
			women u;
			t.set_men();
			u.set_women();
			cout<<endl;
			t.get_men();
			u.get_women();
			cout<<endl;
			comparision(t,u);
			return 0;
			getch();
		}
