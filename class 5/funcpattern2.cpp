#include <iostream>
using namespace std;
/*

1
22
333
4444
55555

*/
void printstar(int noofdig){
	for(int ps = 1;ps<=noofdig;ps++)
	{
		cout<<noofdig;
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