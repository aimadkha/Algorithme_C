#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, i;
  int counter = 0;
  printf("enter number : ");
  scanf("%d", &n);
  for (i = 2 ; i < n ; i++){
    if (n % i == 0){
      counter++;
      break;
    }
  }
  if (counter == 0){
      printf("le numero %d est premier.",n);
  } else
      printf("le numero %d est non premier.",n);
  return 0;
}
