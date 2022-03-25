#include <stdio.h>

#define ARR_SIZE 10

void exibe_vetor(int vetor[ARR_SIZE]);

int main (int argc, char *argv[])
{

  return 0;
}

void exibe_vetor(int vetor[ARR_SIZE]) {
  printf("[");
  for (int i = 0; i < ARR_SIZE; i++) {
    printf("%i", vetor[i]);
    if ( i < ARR_SIZE - 1 ) printf(", ");
  }
  printf("]\n");
}
