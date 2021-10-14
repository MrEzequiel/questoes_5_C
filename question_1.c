#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
  
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int tamA, tamB, tamC, i;

  printf("\n\nEste programa le tres vetores, e se possivel faz a adicao dos 3");
  printf("\n\nDigite quantas linhas tem o vetor A: ");
  scanf("%d", &tamA);
  printf("\n\nDigite quantas linhas tem o vetor B: ");
  scanf("%d", &tamB);
  printf("\n\nDigite quantas linhas tem o vetor C: ");
  scanf("%d", &tamC);

  printf("\n\n\n");
  system("Pause");
  system("cls");

  if(tamA > 0 && tamB > 0 && tamC > 0){

    int A[tamA], B[tamB], C[tamC];

    printf("\n\nDigite os elementos de A!");
    for (i = 0; i < tamA; i++){
      printf("\n\nDigite o valor do elemento A[%d]: ", i);
      scanf("%d", &A[i]);
    }

    printf("\n\n\n");
    system("Pause");
    system("cls");

    printf("\n\nDigite os elementos de B!");
    for(i =0; i < tamB; i++){
      printf("\n\nDigite o valor do elemento B[%d]: ", i);
      scanf("%d", &B[i]);
    }

    printf("\n\n\n");
    system("Pause");
    system("cls");

    printf("\n\nDigite o elementos de C!");
    for(i = 0; i< tamC; i++){
      printf("\n\nDigite o valor do elemento C[%d]: ", i);
      scanf("%d", &C[i]);
    }

    printf("\n\n\n");
    system("Pause");
    system("cls");

    printf("\n\nVetor A");
    printf("\n\nA = [ ");
    for (i = 0; i < tamA; i++){
      printf("%d  ", A[i]);
    }
    printf("]");

    printf("\n\nVetor B");
    printf("\n\nB = [ ");
    for (i = 0; i < tamB; i++){
      printf("%d  ", B[i]);
    }
    printf("]");

    printf("\n\nVetor C");
    printf("\n\nC = [ ");
    for (i = 0; i < tamC; i++){
      printf("%d  ", C[i]);
    }
    printf("]");


    if(tamA == tamB && tamB == tamC){
      int D[tamB];
      printf("\n\nD = A + B + C = [ ");
      for(i = 0; i < tamB; i++){
        D[i] = A[i] + B[i] + C[i];
        printf("%d  ", D[i]);
      }
      printf("]");

    }else {
      printf("\n\nNão é possivel realizar a soma entre essas matrizes");
    }
    
   
    

  } else {
    printf("\n\nDigite os tres vetores com tamanhos maiores que 0!");
  }

  printf("\n\nObrigado por ultilizar nosso programa.");
  system("Pause");
  return 0;
}