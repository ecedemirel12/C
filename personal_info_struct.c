#include <stdio.h>
#include <string.h>

struct bdate{
	int day;
	char month[10];
	int year;

};

struct person{
	int id;
	char name[50];
	struct bdate date;
};

int main()
{
	int i;
	struct person people[10]; //array of structure
	for(i=0 ; i<10 ; i++)
	{
		printf("Enter id: ");
		scanf("%d", &people[i].id);
		getchar(); //enter is a character
		printf("Enter name and surname: ");
		gets(people[i].name);
		printf("Enter day of birthday: ");
		scanf("%d%s%d", &people[i].date.day, &people[i].date.month, &people[i].date.year);
	}

	for(i=0 ; i<10 ; i++)
	{
		printf("Personal Info %d:\nName: %s\nID: %d\nBirthdate: %d/%s/%d", i+1, people[i].name, people[i].id, people[i].date.day, people[i].date.month, people[i].date.year);
	}

/*	strcpy(p1.name, "Ali");
	p1.id=123;
	p1.date.day=12;
	strcpy(p1.date.month,"JAN"); //because string
	p1.date.year=2000;    */
	
	return 0;
}
