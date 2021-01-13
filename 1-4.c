#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  float moyen;
  int i = 0;
  while (numero != -1 || numero > 0){
    printf("Entrez un entier positif : ");
    scanf("%d", &numero);
    if (numero != -1){
       i++;
       moyen += numero;
    }
	
  }
  printf("\nLa moyenne de ces %d entiers vaut : %.2f", i, moyen/i);
  return 0;
}

