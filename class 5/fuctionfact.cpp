#include <iostream>
using namespace std;

int factorial(int x)
{

	int xfact = 1;
	for(int cur = 1;cur<=x;cur++)
	{
		xfact = xfact*cur;
	}

	return xfact;
}



void voidfact(int x)
{
	int xfact = 1;
	for(int cur = 1;cur<=x;cur++)
	{
		xfact = xfact*cur;
	}
	cout<<xfact;

}


int main()
{
	int n,r;
	// cin>>n>>r;
	// int nfact,rfact,nrfact;
	// nfact = factorial(n);
	// rfact = factorial(r);
	// nrfact = factorial(n-r);
	// int ncr = nfact/(rfact*nrfact);
	// cout<<ncr<<endl;


	cin>>n;
	voidfact(n);

	// cout<<fact<<endl;
}