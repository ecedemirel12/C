#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num, factorial, decision, c;
	
	do
	{
		printf("Enter a number:");
		scanf("%d", &num);

		if(num<0)
		{
			printf("Re-enter a number:");
			scanf("%d", &num);
		}
		else
		{
			
			for(c=1, factorial=1 ; c<=num ; c++)
			{
				factorial=factorial*c;
			}
		}
		
		printf("%d!=%d\n", num, factorial);
		printf("Press 1 to continue, 0 to stop:");
		scanf("%d", &decision);
		printf("\n\n");
	}
	while(decision==1);
	
	
	system("pause");
	return 0;
}
