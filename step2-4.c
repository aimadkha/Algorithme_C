#include <stdio.h>
#include <stdlib>

int main(void) {
  int a, b, r;
  printf("enter a : ");
  scanf("%d",&a);
  printf("enter b : ");
  scanf("%d",&b);
  r = a % b;
  while (r !=0){
    a = b;
    b = r;
    r = a % b;
  }
  printf("le pgsd est %d", b);
  return 0;
}
