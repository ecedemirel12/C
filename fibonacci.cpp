#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int numofNumbers, c, firstnum=0, secondnum=1, nextnum=1;
	
	do
	{
		printf("Enter a positive integer number:");
		scanf("%d", &numofNumbers);
	}
	while(numofNumbers<=0);
	
	printf("Fibonacci numbers:");
	
	for(c=0;c<numofNumbers;c++)
	{
		printf("\t%d", nextnum);
		nextnum=firstnum+secondnum;
		firstnum=secondnum;
		secondnum=nextnum;
		
	}
	
	printf("\n");
	
	
	system("pause");
	return 0;
}
