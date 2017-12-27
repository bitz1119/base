#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int prevkaprev = 0;
	int prev = 1;
	for(int i = 2;i<n;i++)
	{
		int tempparchi = prevkaprev;
		prevkaprev = prev;
		prev = tempparchi + prev;
	}
	cout<<prev;
}