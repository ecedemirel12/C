#include<stdio.h>
void calculate(int arr1[], int arr2[], char op[], int size, int res[])
{
	int i;
	for(i=0 ; i<size ; i++)
	{
		switch(op[i])
		{
			case '+':res[i]=arr1[i]+arr2[i];
					 break;
			case '-':res[i]=arr1[i]-arr2[i];
					 break;
			case '*':res[i]=arr1[i]*arr2[i];
					 break;
			case '/':res[i]=arr1[i]/arr2[i];
					 break;
			default:printf("Wrong operator\n");
		}
	}
}


int main()
{
	int i, n;
	printf("How many elements?");
	scanf("%d", &n);
	int num1[n], num2[n], result[n];
	char operators[n];

	printf("\nEnter first set of integers:");
	for(i=0 ; i<n ; i++)
		scanf("%d", &num1[i]);
		
	printf("\nEnter second set of integers:");
	for(i=0 ; i<n ; i++)
		scanf("%d", &num2[i]);
		
	printf("\nEnter a set of operators:");
	for(i=0 ; i<n ; i++)
		scanf(" %c", &operators[i]);

	calculate(num1, num2, operators, n, result);
	printf("\nThe resultant array:\n");
	for(i=0 ; i<n ; i++)
		printf("%4d%4c%4d=%4d\n", num1[i], operators[i], num2[i], result[i]);


	return 0;
}
