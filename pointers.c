#include <stdio.h>
#include <stdlib.h>

void dobra_sequencia(int *array, int tamanho) {
  for(int i=0; i<tamanho; i++) {
    array[i] = 2 * array[i];
  }
}

int* le_vetor(int tamanho) {
  int *vetor = (int *)malloc(tamanho*sizeof(int));

  for (int i=0; i<tamanho; i++) {
    int num;
    scanf("%d", &num);
    vetor[i] = num;
  }

  return vetor;
}

int main() {
  // 5 * sizeof(int) = tamanho total da sequencia em bytes
  // (int *) casting para um vetor de inteiros
  int *vetor = le_vetor(5);
  int *copia = vetor;

  dobra_sequencia(vetor, 5);

  printf("%d\n", vetor[3]);
  printf("%d\n", copia[3]);
  printf("%d\n", *(copia + 3));
  printf("%d\n", *(3 + copia));

  return 0;
}