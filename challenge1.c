#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, i;
  printf("enter un numero : ");
  scanf("%d", &n);
  for (i = 1 ; i <= 10 ; i++){
    printf("%d * %d = %d\n",n ,i , n*i);
  }
  return 0;
}
