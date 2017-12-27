#include <iostream>
using namespace std;
int main()
{
	long long int num;
	cin>>num;
	int a = 0;
	for(long long int i = 2;i*i<= num;i++)
	{
		if(num%i==0)
		{
			a = 1;
			break;
		}
	}	
	if(a==0)
	{
	cout<<"prime";
	}
	else
	cout<<"not prime";
}

