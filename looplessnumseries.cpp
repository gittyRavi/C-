#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int n, c = 1;
  cout<<"Enter the numbers : "<<endl;
  scanf("%d",&c);   
  scanf("%d",&n);	// It is assumed that n >= 1
  cout<<endl<<c<<" to "<<n<<" : "<<endl;
  print:  // label
 
  printf("%d,", c);
  c++;
 
  if (c <= n-1)
    goto print;
    else 
    	printf("%d.", n);

	return 0;
}
