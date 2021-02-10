#include <stdio.h>

void calculator(double num1, double num2, double *s, double *d, double *p, double *q)
{
	*s=num1+num2;
	*p=num1*num2;
	*d=num1-num2;
	if(num2!=0)
		*q=(double)num1/num2;
	else
		printf("Divison by zero error!");
}

int main()
{
	double n1, n2, sum, difference, product, quotient;
	printf("Enter two real number:");
	scanf("%lf%lf", &n1, &n2);
	calculator(n1, n2, &sum, &difference, &product, &quotient);
	printf("The sum is %.2lf\n", sum);
	printf("The difference is %.2lf\n", difference);
	printf("The product is %.2lf\n", product);
	printf("The quotient is %.2lf\n", quotient);
	
	return 0;
}
