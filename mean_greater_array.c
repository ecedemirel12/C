#include <stdio.h>

double mean_func(int arr[], int size)
{
	int sum=0, i;
	for(i=0 ; i<size ; i++)
	{
		sum+=arr[i];
	}
	return (double)sum/size;
}

void greaters(int arr1[], int arr2[], int size, double mean, int *size2)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		if(arr1[i]>mean)
		{
			arr2[*size2]=arr1[i];
			(*size2)++;
		}
	}
}

int main()
{
	int size, i, size2;
	double mean;
	
	printf("Enter the array size(1-30):");
	scanf("%d", &size);
	int arr1[size], arr2[size];
	
	printf("Enter %d integers:", size);
	for(i=0 ; i<size ; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	mean=mean_func(arr1, size);
	printf("Mean is %.2lf.\n", mean);
	
	printf("New array is: ");
	greaters(arr1, arr2, size, mean, &size2);
	for(i=0 ; i<size2; i++)
	{
		printf("%d ", arr2[i]);
	}
	
	return 0;
}


