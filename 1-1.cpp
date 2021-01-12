#include <stdio.h>
#include<stdlib.h>
int main() {
	char firstName [10] ;
	char lastName [10] ;
	char sex [10];
	int age;
	char nPHone[10];
	
	printf("enter the firstName :\n");
	scanf("%s", &firstName);
	printf("enter the lastName :\n");
	scanf("%s", &lastName);
	printf("enter the age :\n");
	scanf("%d", &age);
	printf("enter the phone number :\n");
	scanf("%s", &nPHone);
	printf("enter the sex :\n");
	scanf("%s", &sex);
	
	printf(" name : %s %s\n age : %d\n number phone : %s\n sex :  %s", firstName, lastName, age, nPHone, sex );
	return 0;
	
}
