#include <iostream>
using namespace std;
int main()
{
	int nfactorial = 1,rfactorial = 1,n_minus_r_factorial = 1;
	int n,r;
	cin>>n>>r;
	for(int cur = 1;cur<=n;cur++)
	{

		nfactorial = nfactorial*cur;
	}
	// cout<<factorial<<endl;

	for(int cur = 1;cur<=r;cur++)
	{
		rfactorial = rfactorial*cur;
	}

	for (int cur = 1;cur<= (n-r);cur++ )
	{
		n_minus_r_factorial = n_minus_r_factorial*cur;
	}

	int ncr = nfactorial/(rfactorial*n_minus_r_factorial);
	cout<<ncr<<endl;



}