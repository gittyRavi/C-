# include<iostream>

char *strcpy(char *destination,char *source)		
	{							  
	char *p;						  
	p=destination;						  
	while(*source)						   
	{							   
		*p++=*source++;					   
	}							   
	*p='\0';						  
	return destination;
	}
int *strlen(const char *source)
	{
		int i=0,k;
		while(*source)
		{
			i++;
			*source++;
		}
		k=i;
		std::cout<<k;
	}

int main()
	{	int n=1,*h;
		h=&n;
		char a[12]="asdfgh as",b[12];
		strcpy(b,a);
		std::cout<<&a<<" ";
		puts(a);
		putchar('\n');
		std::cout<<&b<<" ";
		puts(b);
		putchar('\n');
		strlen(b);
		std::cout<<" "<<h<<" "<<*h;
		return 0;
		system("PAUSE");
	}
