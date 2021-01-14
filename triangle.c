#include <stdio.h>
#include <stdlib.h>
int i;
void printSpace(int n){
	int s ;
	for (s = 1 ; s <= n - i ; s++ ){
		printf(" ");
	}
}

void printStart(int n){
	int x;
	for (i = 1 ; i <= n ; i++){
		printSpace(n);
		for (x = 1 ; x <= 2*i-1; x++){
		   printf("*");
	    }
	    printf("\n");
			
	}
	
}
int main(){
	printStart(5);
	
	return 0;
}
