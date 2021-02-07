#include <stdio.h>

int main()
{
	int i, j, n, sum=0;

	printf("Enter an integer n:");
	scanf("%d", &n);
	int arr[n][n];

	printf("Enter %d integer:", n*n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0 ; i<n ; i++)
	{
		sum=sum+arr[i][i]+arr[i][n-1-i];  //diagonal
	}
	if(n%2==1)  //to identify middle element
		sum=sum-arr[n/2][n/2];
		 
	printf("The sum is: %d", sum);
	
	return 0;
}
