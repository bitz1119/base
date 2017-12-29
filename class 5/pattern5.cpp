 /*

4

* ******** *
** ****** **
*** **** ***
**** ** ****

5
* ********** *
** ******** **
*** ****** ***
**** **** ****
***** ** *****

*/

#include <iostream>
using namespace std;

void printstar(int no_of_stars)
{
	for(int star = 1;star <=no_of_stars;star++)
	{
		cout<<"*";
	}
}


int main()
{
	int n;
	cin>>n;
	for(int rows = 1;rows<=n;rows++)
	{
		//print rows no of stars
		printstar(rows);
		//print space
		cout<<" ";
		//print (n-row+1) stars
		printstar(n-rows+1);
		//print (n-row+1) stars
		printstar(n-rows+1);
		//print space
		cout<<" ";
		//print rows no of star
		printstar(rows);
		cout<<endl;

	}
}




