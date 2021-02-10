#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void reversed(char arr1[], char arr2[])
{
    int i;

    for(i=0 ; i<SIZE ; i++)
    {
        arr2[i]=arr1[SIZE-1-i];
    }
}

int main()
{
    int i;
    char list1[SIZE], list2[SIZE];

    printf("Enter %d elements of array:", SIZE);
    for(i=0 ; i<SIZE ; i++)
    {
        scanf(" %c", &list1[i]);
    }

	reversed(list1, list2);

	printf("The original array:");
    for(i=0 ; i<SIZE ; i++)
    {
        printf(" %c", list1[i]);
    }

	printf("\nThe reversed array:");
    for(i=0 ; i<SIZE ; i++)
    {
        printf(" %c", list2[i]);
    }

    system("pause");
    return 0;
}
