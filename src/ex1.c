#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// selection_sort deve ordernar um vetor de tamanho MAX_ARR. 
// Recebe como parametros o vetor, seu tamanho e se a ordenação será crescente.
void selection_sort(int vetor[MAX_ARR], int tam_vetor, int crescente);

// bubble_sort deve ordernar um vetor de tamanho MAX_ARR. 
// Recebe como parametros o vetor, seu tamanho e se a ordenação será crescente.
void bubble_sort(int vetor[MAX_ARR], int tam_vetor, int crescente);

// troca_elementos deve receber um vetor e dois índices e trocar os troca 
// os elementos do vetor de lugar.
void troca_elementos(int vetor[MAX_ARR], int i, int j);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[])
{

  return 0;
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
}

void selection_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
}

void bubble_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
}

int le_vetor(int vetor[MAX_ARR]) {
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}
