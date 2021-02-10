#include <stdio.h>

int main()
{
	int i, j, n, temp;

	printf("Enter the size of Matrix:");
	scanf("%d", &n);
	int arr[n][n];

	printf("Enter %d Matrix numbers:", n*n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for(i=0 ; i<n ; i++)
	{
		temp=arr[i][i];
		arr[i][i]=arr[i][n-i-1];
		arr[i][n-i-1]=temp;
	}
	printf("The Matrix after swapping diagonals:\n");
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
