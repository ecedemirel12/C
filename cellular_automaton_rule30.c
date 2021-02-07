#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100
#define GENERATION_COUNT 50
#define MAX_STATE_COUNT 8

void initialize_array(int arr[], int state_length)
{
	int mid, i;
	mid=(state_length-1)/2;
	for(i=0 ; i<state_length ; i++) //numbers in the array except the middle number should be 0
	{
		arr[i]=0;
	}
	arr[mid]=1;
}

void search_state(int look_up[][2], int *new_state, int s_indice)
{
	int lookUp_iterator;
	for (lookUp_iterator=0 ; lookUp_iterator<MAX_STATE_COUNT ; lookUp_iterator++)  //finding the next number in look up table
	{
	 	if(s_indice==look_up[lookUp_iterator][0])
		{
		   *new_state=look_up[lookUp_iterator][1];
        }
	}
}

void calculate_next_state(int current_state[], int next_state[], int look_up[][2])  //length for converting
{
	int i, state_indice;
	next_state[0]=0; //when we look i=1 to length-1, i assigned first and last numbers to 0, because the array size should continue same size
	next_state[LENGTH]=0;
	for(i=1 ; i<=LENGTH-1 ; i++) // i starts 1, ends length-1 because we look the number before current number and the number after current number
	{
		state_indice=current_state[i-1]*4+current_state[i]*2+current_state[i+1]*1;//convert binary number to decimal number
		search_state(look_up, &next_state[i], state_indice); //I called the search_state function to find number (1 or 0) in look up table
	}
}

void print_state(int arr[], int length)
{
	int i;
	for(i=0 ; i<length ; i++)
	{
		if(arr[i]==0)
		{
			printf("-");
		}
		else
		{
			printf("#");
		}
	}
	printf("\n");
}

void swap_arrays(int current_state[], int next_state[])
{
	int i;
	for(i=0 ; i<LENGTH ; i++)
	{
		current_state[i]=next_state[i];
	}
}

int main()
{
	int look_up[MAX_STATE_COUNT][2]={{0,0},{1,1},{2,1},{3,1},{4,1},{5,0},{6,0},{7,0}};  // rule 30
	int i;
	int current[LENGTH], next[LENGTH]; //states

	printf("Current State\tNext State\n---------------------------\n");
	for(i=0 ; i<MAX_STATE_COUNT ; i++) //print look up table for rule 30
	{
		switch(i)
		{
			case 0:printf("0\t\t");
				break;
			case 1:printf("1\t\t");
				break;
			case 2:printf("10\t\t");
				break;
			case 3:printf("11\t\t");
				break;
			case 4:printf("100\t\t");
				break;
			case 5:printf("101\t\t");
				break;
			case 6:printf("110\t\t");
				break;
			case 7:printf("111\t\t");
				break;	
		}
		printf("%d\n", look_up[i][1]); 
	}

	initialize_array(current, LENGTH);
	for(i=0 ; i<=GENERATION_COUNT ; i++) //after the first state, there should be 50 generation
	{
		calculate_next_state(current, next, look_up);
		print_state(current, LENGTH);  
		swap_arrays(current, next);
	}
	
	system("pause");
	return 0;
}
