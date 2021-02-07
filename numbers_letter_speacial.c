#include <stdio.h>
#include <stdlib.h>

int return_value(char ch)
{
	if('0'<=ch && ch<='9')
		return 1;
	else if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z'))  //we should look upper and lower case
		return 2;
	else //if the character isn't a number or letter, it should be a special character
		return 3; 
}

int main(void)
{
	int value, i, n; 
	char ch;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	for(i=0 ; i<n ; i++) //the loop for checking every character and printing them (n times)
	{
		printf("Enter a character: ");
		scanf(" %c", &ch);
		value=return_value(ch);  //after calling the fuction, the function will return an integer value and i assigned returned value to a variable named as 'value'
		if(value==1)
			printf("%c is a number character.\n", ch);
		else if(value==2)
			printf("%c is an alphabetic character.\n", ch);
		else
			printf("%c is a special character.\n", ch);
	}

	system("pause");
	return 0;
}
