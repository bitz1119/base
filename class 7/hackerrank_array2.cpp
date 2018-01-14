#include <iostream>
using namespace std;

int sum_of_hourglass(int arr[6][6],int a,int b)
{

	int sum = arr[a][b]+arr[a][b+1]+arr[a][b+2]+arr[a+1][b+1]+arr[a+2][b]
			+arr[a+2][b+1] + arr[a+2][b+2];
  
  	return sum;
}


int main()
{
	//declaration of array
	int matrix[6][6];
	//input array
	for (int row = 0; row < 6; ++row)
	{
		for(int col = 0;col<6;col++)
		{
			cin>>matrix[row][col];
		}
	}
	//access 4*4matrix
	int max = sum_of_hourglass(matrix,,00);
	for (int row = 0; row < 4; ++row)
	{
		for(int col = 0;col<4;col++)
		{
			// cin>>matrix[row][col];
			int hourglass_sum = sum_of_hourglass(matrix,row,col);
			if(hourglass_sum>max)
			{
				max = hourglass_sum;
			}

		}
	}
	cout<<max;

}