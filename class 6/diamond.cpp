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
	for(int row = 1;row<=(n/2)+1;row++)
	{
		//print space n/2+1-row
		printchar(' ',n/2+1-row);
		//print star 2*row-1
		printchar('*',2*row-1);
		cout<<endl;
	}
	for (int lowerrow =1;lowerrow<=n/2;lowerrow++)
	{
		//print space lowerrow times
		printchar(' ',lowerrow);
		//print star n-2*lowerrow
		printchar('*',n-2*lowerrow);
		cout<<endl;

	}
}