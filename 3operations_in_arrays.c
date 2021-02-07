#include <stdio.h>

void add(int arr1[], int arr2[], int res[], int size)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		res[i]=arr1[i]+arr2[i];
	}
}

void substract(int arr1[], int arr2[], int res[], int size)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		res[i]=arr1[i]-arr2[i];
	}
}

void multiply(int arr1[], int arr2[], int res[], int size)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		res[i]=arr1[i]*arr2[i];
	}
}

int main()
{
	int size, i;
	char op;
	
	printf("Enter the array size[1-30]:");
	scanf("%d", &size);
	int arr1[size], arr2[size], res[size];
	
	printf("Enter %d integers:", size);
	for(i=0 ; i<size ; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter %d integers:", size);
	for(i=0 ; i<size ; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	printf("Enter an operation(+, -, *):");
	scanf(" %c", &op);
	switch(op)
	{
		case '+':	add(arr1, arr2, res, size);
					break;
		case '-':   substract(arr1, arr2, res, size);
					break;
		case '*':   multiply(arr1, arr2, res, size);
					break;
		default:    printf("Wrong operation!");
	}
	
	printf("Result: ");
	for(i=0 ; i<size ; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}
