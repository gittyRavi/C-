#include<iostream>
#include<cstdlib>			/* or stdlib.h for close() use in some compilers */
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	ofstream outFile;		/* to write to file. */

	outFile.open("C:/Users/ravi/Documents/fstream_text_c_plus_plus.txt");	/* create or open file. */

	outFile<<"Write your entries to add or change in file ."<<endl;	/* write or change content of file. */

	outFile.close();		/* close file. */

	cout<<"File is written or changed."<<endl;
	
	return 0;
}
