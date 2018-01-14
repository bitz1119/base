#include <iostream>
using namespace std;
int main()
{
	int arr2d[100][100];
	int n;
	cin>>n;
	for (int row = 0; row < n; ++row)
	{
		for(int col = 0;col<n;col++)
		{
			cin>>arr2d[row][col];
		}
	}
	for (int row = 0; row < 50; ++row)
	{
		for(int col = 0;col<50;col++)
		{
			cout<<arr2d[row][col]<<" ";
		}
		cout<<endl;
	}




	// arr2d[0][1] = 2;

	// int arr[100] ;
	// arr = {1};
	// cout<<arr[0]<<" ";
	// cout<<arr[2];

	


}