#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	// int arr[n];   never initialise like this
	int arr[100];
	for(int counter = 0;counter< n;counter++)
	{
		cin>>arr[counter];
	}

	int sum =0 ;

	for(int counter = 0;counter<n;counter++)
	{
		sum = sum+arr[counter];
	}

	float avg = (float)sum/n;
	cout<<avg<<endl;

	// sum = (float)(sum);
	// cout<<sum;




}