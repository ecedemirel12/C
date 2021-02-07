#include <stdio.h>

void poly(int arr[], int degree)
{
	int i, j=degree;  //I defined j because i didn't want to real degree of polynomaial function
	for(i=0 ; i<=degree ; i++)
	{
		if(j>0) 
		{
			printf("%dx^%d", arr[i], j);
			if(arr[i+1]>0)
				printf("%c", '+'); //if the next number negative it prints directly and there will be minus before the number but if the next number is positive we should print the plus sign befor the number
		}
		else	//if the degree j is 0, we should only print coefficent
		{ 		//j also cannot possible be negative, because i shoulde be more than degree for j<0 but if i become more than degree, we will get out the loop
			printf("%d", arr[i]);
		}
		j--; //because power of next term will decrease
	}
}

void find_derivative(int arr[], int degree, int der_degree)
{
	int i, j, c; //c is counter to take derivatives how many times we want
	j=degree;

	//I arranged coefficents of the array after taking derivatives
	for(c=0 ; c<der_degree ; c++)
	{
		for(i=0 ; i<=degree ; i++)
		{
			arr[i]=arr[i]*j;
			j--; //because power of next term will decrease
		}
		degree--; //after taking derivative the degree of polynomial function will change
		j=degree;
	}
	
	//I printed the array that i arranged
	if(degree>=0)
	{	for(i=0 ; i<=degree ; i++)
		{
			if(j>0)
			{
				printf("%dx^%d", arr[i], j);
				if(arr[i+1]>0)
					printf("%c", '+');
			}
			else if(j==0) //if the degree j is 0, we should only print coefficent
			{
				printf("%d", arr[i]);
			}
			j--; //because power of next term will decrease
		}
	}
	else //if new_degree is negative, the result always will be always 0 (we can't take derivative no more)
		printf("0");
}

int main()
{
	int degree, i, der_degree;

	printf("Enter the degree of polynomial equation(1-10):");
	scanf("%d", &degree);
	int coeff[degree];

	for(i=0 ; i<=degree ; i++) // "for loop" to get array elements
	{
		printf("Enter the coefficient of x to the power %d: ", degree-i);
		scanf("%d", &coeff[i]);
	}
	
	printf("Entered polynomial:\nf(x)=");
	poly(coeff, degree);

	printf("\nWhich degree of derivative you want to calculate? ");
	scanf("%d", &der_degree);
	printf("%d. derivative: df(x)=", der_degree);
	find_derivative(coeff, degree, der_degree);
	
	return 0;
}
