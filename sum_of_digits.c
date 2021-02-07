#include <stdio.h>
#include <stdlib.h>

void sum_of_digits(int num, int *sum)
{
	int remainder;
	*sum = 0;
	while(num != 0)
	{
		remainder = num%10;
		*sum += remainder;
		num = num / 10;
	}
}

int main()
{
	int num, result = 0;
	printf("Enter an integer:");
	scanf("%d", &num);
	sum_of_digits(num, &result);
	printf("The sum of digits is %d\n", result);

	system("pause");
	return 0;
}
