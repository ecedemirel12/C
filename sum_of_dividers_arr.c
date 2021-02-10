#include <stdio.h>

int sum_of_dividers(int num)
{
	int i, sum=0;
	for(i=2 ; i<num ; i++)
	{
		if(num%i==0)
			sum+=i;
	}
	return sum;
}

int main()
{
	int max, i, sum;
	printf("Enter a positive integer:");
	scanf("%d", &max);
	int arr[max];
	printf("Enter %d elements:", max);
	for(i=0 ; i<max ; i++)
	{
		scanf("%d", &arr[i]);
		sum=sum_of_dividers(arr[i]);
		printf("Sum of dividers of %d is %d\n", arr[i], sum);
	}
	
	return 0;
}
