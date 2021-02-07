#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int blank, blank2, num, row;
	printf("enter a number:");
	scanf("%d", &num);
	row=num;
	
	while(row>0)
	{
		for(blank=row ; blank>0 ; blank--)
		{
			printf(" ");
		}
		printf("*");
		for(blank2=0 ; blank2<=num ; blank2++)
		{
			if((row==1)||(row==num))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("*\n");
		row--;
	}
	system("pause");
	return 0;
}
