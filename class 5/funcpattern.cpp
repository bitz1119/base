#include <iostream>
using namespace std;

/*

*
**
***
****
*****

*/



void printstar(int noofstars){
	for(int ps = 1;ps<=noofstars;ps++)
	{
		cout<<"*";
	}
}

int main()
{
	int n;
	cin>>n;
	for (int currow = 1;currow <=n;currow++)
	{
		//currow times print star
		printstar(currow);
		cout<<endl;
	}
}