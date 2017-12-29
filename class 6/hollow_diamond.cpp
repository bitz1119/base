#include <iostream>
using namespace std;

void printchar(char r,int n)
{
	for(int nooftimes = 1;nooftimes<=n;nooftimes++)
	{
		cout<<r;
	}
}


int main()
{
	int n;
	cin>>n;
	//print n times star
	printchar('*',n);
	cout<<endl;
	for(int row = 1;row<=(n/2);row++)
	{
		// print star n/2 + 1 - row
		printchar('*',n/2 + 1 - row);
		//print space 2*row-1
		printchar(' ',2*row-1);
		// print star n/2 + 1 - row
		printchar('*',n/2 + 1 - row);
		cout<<endl;

	}
	for (int lowerrow =1;lowerrow<=n/2-1;lowerrow++)
	{
		//print star lowerrow+1
		printchar('*',lowerrow+1);
		//print space n - 2*lowerrow -2
		printchar(' ',n - 2*lowerrow -2);
		//print star lowerrow+1
		printchar('*',lowerrow+1);
		cout<<endl;

	}
	printchar('*',n);
}