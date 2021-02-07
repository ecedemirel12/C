#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_within(char str[], char ch, int *count)
{
	int i, size, flag=0;
	*count=0;
	size=strlen(str);
	for(i=0 ; i<size ; i++)
	{
		if(str[i]==ch)
		{
			(*count)++;
			flag=1;
		}
	}
	return flag;
}

int main()
{
	char ch, str[50];
	int res, count;
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character: ");
	scanf(" %c", &ch);
	res=is_within(str, ch, &count);
	if(res==1)
	{
		printf("Yes, %c occurs %d times in '%s'", ch, count, str);
	}
	else
	{
		printf("%c not found in 's'", ch, str);
	}

	return 0;
}
