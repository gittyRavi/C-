# include<iostream>

char *strcat(char *str1, const char *str2)
	{
		char *p;
		p=str1;
		while(*str1)
		{
			*p++=*str1++;	
		}
		
		while(*str2)
		{
			*p++=*str2++;
		}
		*p='\0';
		return str1;
	}
int main()
	{
		char a[]="hi";
		char b[]=" hello";
		strcat(a,b);
		puts(a);
		return 0;
	}
