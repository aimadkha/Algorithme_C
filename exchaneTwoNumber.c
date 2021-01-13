#include<stdio.h>
#include<stdlib.h>


int main() {
	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("%d\t%d", a ,b);
	/*int a, b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	a =a - b;
	b =b + a;
	a =b- a;
	printf("%d\t%d", a ,b);*/
	
	
	return 0;
}
