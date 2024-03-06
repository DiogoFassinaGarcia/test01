#include <stdio.h>
int valor;
int resultados [400000];
int contador;
int main(void) {
  printf("escreva um número inteiro: ");
  scanf("%d", &valor);

  while (contador < valor +1){
    contador += 1;
    if (valor % contador == 0){
      resultados[contador] = contador;
    }
  }
  printf("os divisores de %d são:", valor);
  for (int i = 0; i < contador; i++)
    if (resultados[i] != 0){
    printf(" %d ", resultados[i]);
    }
  return 0;
}