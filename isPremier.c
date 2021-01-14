#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPremier(int n){
		int i;
		bool premier = false;
		for (i = 2 ; i < n ; i++ ){
			if (n % i == 0){
				return true;
			}
		}
		return false;
	}
	
int main(){
	int x;
	printf("enter number : ");
	scanf("%d", &x);
	bool num = isPremier(x);
	if (num){
		printf("%d is non premier.", x);
	} else 
		printf("%d is premier.", x);
	
	return 0;
}

