#include <stdio.h>
void average(int st_grades[][3], double avg[], int num_st, int num_exam)
{
	int sum;
	int i,j;
	for(i=0 ;i<num_st ; i++) //i is students number
	{
		sum=0; //set sum as 0 for each student
		for(j=0 ; j<num_exam ; j++) //j is exams number
		{
			sum=sum+st_grades[i][j];
		}
		avg[i]=(double)sum/num_exam;
	}
}

int main()
{
	int i, j;
	int arr[30][3];
	double st_avg[30];
	for(i=0 ; i<30 ; i++)
	{
		printf("Enter the grades fot student %d:", i+1);
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	average(arr, st_avg, 30, 3);
	for(i=0 ; i<30 ; i++)
	{
		printf("The average of student %d is %.2lf\n", i+1, st_avg[i]);
	}
	
	return 0;
}
