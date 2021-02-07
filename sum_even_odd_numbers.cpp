#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, sumEven=0, sumOdd=0, c;
	
	printf("Enter two numbers:");
	scanf("%d%d", &x, &y);
	while( (x>=y) || (x<0) || (y<0) )
	{
		printf("Re-enter two numbers:");
		scanf("%d%d", &x, &y);
	}
	
	for(c=x+1 ; c<y ; c++)
	{
		if(c%2==0)
		{
			sumEven+=c;
		}
		else
		{
			sumOdd+=c;
		}
	}
	
	printf("Sum of even numbers between %d and %d is %d.\nSum of odd numbers between %d and %d is %d,\n", x, y, sumEven, x, y, sumOdd);
	
	
	system("pause");
	
	return 0;
}
