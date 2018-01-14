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
	// int max = arr[0];
	int no_to_be_search ;
	cin>>no_to_be_search;
	int parchi = 0;
	for (int counter = 0;counter<n;counter++)
	{
		if(no_to_be_search==arr[counter])
		{
			parchi = 1;
			break;
		}
	}

	if(parchi ==1)
	{
		cout<<"yup! no is found";
	}
	else
	{
		cout<<"oooooooooops! not found";
	}
}