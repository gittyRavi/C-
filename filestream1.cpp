# include<iostream>								//needs correct code
# include<cstdio>
# include<conio.h>
# include<fstream>
using namespace std;

class NwTx
{
int id;
char Text[20];
public:
void Enter(){cin>>id;gets(Text);}
void Display(){cout<<id<<" "<<Text<<endl;}
void Addnew();
void vowelcount();
};
char Ch='y';
void NwTx::Addnew()
{
fstream FIL;
FIL.open("NewText.txt", ios::out | ios::in | ios::app);
NwTx S;
char CH=Ch;
while(CH =='Y' || CH =='y')
{

FIL.write((char*)&S,sizeof(S));
S.Enter();
cout<<FIL.read((char*)&S,sizeof(S));
cout<<"More(Y/N)?";
cin>>::Ch;
}
FIL.close();
}
void NwTx::vowelcount()
{
ifstream file("NewText.txt",ios::in);
int n=0;
char ch;
while(file.get(ch))
{
if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'||
ch=='u'||ch=='U')
{
n++;
}
}
cout<<"\n Total no. of vowels are "<<n;
file.close();
}
int main()
	{
		NwTx s;
		s.Addnew();
		s.vowelcount();
	}
