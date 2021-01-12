#include <stdio.h>
#include <stdlib.h>

int main() {
  const float pi = 3.14;
  float r, d, s, p;
  printf("entrer le rayon : \n");
  scanf("%f", &r);
  d = r * 2;
  s = r * r * pi;
  p = d * pi;
  printf("Un cercle de rayon %f a pour diamètre %f, pour périmetre %f et pour surface %f.", r, d, p, s);
  return 0;
}

