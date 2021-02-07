#include<stdio.h>

int main(void)
{
	int blank, row, num, blank2, c=1;
	
	printf("enter a number:");
	scanf("%d", &num);
	

	for(row=num ; row>0 ; row--)
	{
		for(blank=row-1 ; blank>0 ; blank--)
		{
			printf(" ");
		}

		printf("*");
		
		if(row!=num)
		{
			for(blank2=0 ; blank2<c ; blank2++)
			{
				if(row!=1)
			    {
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}

			c=c+2;
			printf("*\n");
		}
		else
		{
			printf("\n");
			
		}

	}
	
	system("pause");
	return 0;
}
