#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  int dado;

  srand(time(NULL));

  dado = 1 + rand()%1001;
  
  printf("lancei o dado, tente prevê-lo\n");
  int palpite;
  int tentativas;
  while (palpite != dado){
   printf("seu palpite: ");
   scanf("%d", &palpite);
   if (palpite == dado){
     printf("finalmente acertou!");
     if (tentativas == 1){
       printf("sortudo... de primeira");
     }
     if (tentativas > 1){
       printf(" ...mas demorou, isso te levou %d tentativas", tentativas);  
      }
     }
   
   else {
     if (palpite > dado){ 
       printf("tente um número menor\n");
     }
     if (palpite < dado){
       printf("tente um número maior\n");
     }
     if (palpite > dado+20){
          printf("tente um número muito menor\n");
     }
     if (palpite < dado-20){
          printf("tente um número muito maior\n");
     }
      tentativas += 1;
     }
     
   
  }
  return 0;
}