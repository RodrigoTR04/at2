#include <stdio.h>

#define ARR_SIZE 10

void exibe_vetor(int vetor[ARR_SIZE]);

void bubble_sort(int vetor[ARR_SIZE], int tam_vetor,int matriz[2][ARR_SIZE]);

int le_vetor(int vetor[ARR_SIZE]);

void troca_elementos(int vetor[ARR_SIZE], int i, int j);

int busca_binaria(int vetor[ARR_SIZE], int chave);

int main (int argc, char *argv[])
{
  int a,b,chave,i,vetor[ARR_SIZE],matriz_aux[2][ARR_SIZE];
  a = le_vetor(vetor);
  printf("Digite a chave a ser buscada: ");
  scanf("%i",&chave);
  for(i=0;i<ARR_SIZE;i++){
    matriz_aux[0][i] = vetor[i];
    matriz_aux[1][i] = i;
  }
  bubble_sort(vetor,a,matriz_aux);
  b = busca_binaria(vetor,chave);
  exibe_vetor(vetor);
  if(b!=-1){  
    printf("Valor %i encontrado no índice %i.",chave,matriz_aux[1][b]);
    return 0;
  }
  printf("Valor %i não foi encontrado!",chave);

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

int busca_binaria(int vetor[ARR_SIZE], int chave){
  int i,pos_ini,pos_fim;
  pos_ini = 0;
  pos_fim = ARR_SIZE-1;
  while(pos_ini<=pos_fim){
    i = pos_ini + (pos_fim-pos_ini)/2;
    if(vetor[i]==chave){
      return i;
    }
    if(vetor[i]<chave){
      pos_ini = i+1;
    }
    if(vetor[i]>chave){
      pos_fim = i-1;
    }
  }
  return -1;

}

void troca_elementos(int vetor[ARR_SIZE], int i, int j) {
  int aux;
  aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
}

void bubble_sort(int vetor[ARR_SIZE], int tam_vetor, int matriz[2][ARR_SIZE]) {
  int n,k;
  for(n=0;n<tam_vetor;n++){
    for(k=0;k<tam_vetor-1;k++){
      if(vetor[k]>vetor[k+1]){
        troca_elementos(vetor,k,k+1);
        troca_elementos(matriz[1],k,k+1);
      }
    }
  }
}

int le_vetor(int vetor[ARR_SIZE]) {
  int i, a;
  printf("Digite os valores do vetor: ");
  for(i=0;i<ARR_SIZE;i++){
    scanf("%i",&a);
    vetor[i] = a;
  }
  
  return i;
}
