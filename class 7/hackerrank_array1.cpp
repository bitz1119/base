#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	for(int arr_i = 0 ; arr_i < n ; arr_i++)
	{
		cin>>arr[arr_i];
	}

	for(int arr_i = n-1;arr_i>=0;arr_i--)
	{
		cout<<arr[arr_i]<<" ";
	}
}