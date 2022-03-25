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
  int vetor[MAX_ARR],a,metodo,crescente;
  a = le_vetor(vetor);
  printf("Selecione o método de ordenação (1 - Selection, 2 - Bubble): ");
  scanf("%i",&metodo);
  printf("Ordenação crescente (1) ou decrescente (0): ");
  scanf("%i",&crescente);
  if(metodo==1){
    selection_sort(vetor,a,crescente);
  }
  if(metodo==2){
    bubble_sort(vetor,a,crescente);
  }
  exibe_vetor(vetor,a);
  return 0;
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
  int aux;
  aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
}

void selection_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
  int i, j, min_ind,max_ind;
  if(crescente==1){
    for (i = 0; i < tam_vetor-1; i++){
        min_ind = i;
        for (j = i+1; j < tam_vetor; j++){
          if (vetor[j] < vetor[min_ind]){
            min_ind = j;
          }  
        }        
        troca_elementos(vetor,min_ind,i);
    }
  }
  if(crescente==0){
    for (i = 0; i < tam_vetor-1; i++){
        max_ind = i;
        for (j = i+1; j < tam_vetor; j++){
          if (vetor[j] > vetor[max_ind]){
            max_ind = j;
          }  
        }        
        troca_elementos(vetor,max_ind,i);
    }
  } 
}

void bubble_sort(int vetor[MAX_ARR], int tam_vetor, int crescente) {
  int n,k;
  if(crescente==1){
    for(n=0;n<tam_vetor;n++){
      for(k=0;k<tam_vetor-1;k++){
        if(vetor[k]>vetor[k+1]){
          troca_elementos(vetor,k,k+1);
        }
      }
    }
  }
  if(crescente==0){
    for(n=0;n<tam_vetor;n++){
      for(k=0;k<tam_vetor-1;k++){
        if(vetor[k]<vetor[k+1]){
          troca_elementos(vetor,k,k+1);
        }
      }
    }
  }
}

int le_vetor(int vetor[MAX_ARR]) {
  int i, a;
  printf("Digite os valores do vetor: ");
  for(i=0;i<MAX_ARR;i++){
    scanf("%i",&a);
    if(a==-100||i==MAX_ARR){
      break;
    } 
    vetor[i] = a;
  }
  
  return i;
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}
