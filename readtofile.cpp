#include<iostream>
#include<cstdlib>			/* or stdlib.h for close() use in some compilers */
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	string item;			/* to temporarily store string values from the file before each space and end of file. */

	ifstream inFile;		/* to read through file. */
	inFile.open("C:/Users/ravi/Documents/fstream_text_c_plus_plus.txt");
	int count = 0;			/* to count number of words */

	if(inFile.fail())		/* to check for error opening file to avoid crashing during execution. */
	{
		cerr<<"Error opening file."<<endl;
		exit(1);
	}

	while(!inFile.eof())		/* change the code as required. */
	{
		inFile>>item;
		count++;				/* error in final count */
	}
	inFile.close();

	cout<<"Number of words is : "<< count <<endl;

	return 0;
}
