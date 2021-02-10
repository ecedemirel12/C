#include <stdio.h>
#include <string.h>

int main()
{
	char name1[5], name2[5];
	int i, j;
	printf("Enter a name:");
	gets(name1);
	printf("Enter a name:");
	gets(name2);

	printf("Common characters:");
	for(i=0 ; i<5 ; i++)
		for(j=0 ; j<5 ; j++)
			if(name1[i]==name2[j])
				printf("%c ", name1[i]);

 	return 0;
}
