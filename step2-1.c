#include<stdio.h>
#include<stdlib.h>

#define max(a,b) (((a) > (b)) ? 1 : 0)
#define True 1
#define False 0 


int main() {
	int a, b;
	printf("enter first number : ");
	scanf("%d", &a)
	printf("enter second number : ");
	scanf("%d", &b)
	if (max(a, b) == 1){
		printf("True");
	} else 
		printf("False");
	
	return 0;
}
