#include<stdio.h>
#include<stdlib.h>

int main(){
	int num [2];
	int x, i;
	for (i = 0; i < 2 ; i++){
		printf("enter number %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("%d + %d = %d\n", num[0], num[1], num[0] + num[1]);
	printf("%d - %d = %d\n", num[0], num[1], num[0] - num[1]);
	printf("%d * %d = %d\n", num[0], num[1], num[0] * num[1]);
	if (num[0] > 0){
		printf("%d / %d = %d\n", num[0], num[1], num[0] / num[1]);
	} else 
		printf("error");
	if (num[1] > 0){
	    printf("%d mod %d = %d\n", num[0], num[1], num[0] % num[1]);
    } else 
		printf("error");
	return 0;
}
