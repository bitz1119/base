#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int counter = 0;counter<n;counter++)
	{
		cin>>arr[counter];
	}
	int max = arr[0];
	for (int counter = 1;counter<n;counter++)
	{
		if(max < arr[counter])
		{
			max = arr[counter];
		}
	}

	cout<<max<<endl;
}