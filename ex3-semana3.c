#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
  int dado;

  srand(time(NULL));

  dado = 1 + rand()%1001;
  
  printf("lancei o dado, tente prevê-lo\n");
  int palpite;
  int tentativas = 0;
  while (palpite != dado){
   printf("seu palpite: ");
   scanf("%d", &palpite);
   printf("\n");
   if (palpite == dado){
     printf("finalmente acertou!");
     if (tentativas == 1){
       printf(" Sortudo... de primeira!");
     }
     if (tentativas > 1){
       printf(" ...mas demorou, isso te levou %d tentativas", tentativas);
       break;
      }
     }
   
   if (tentativas < 10) {
     if (palpite > dado){ 
       printf("tente um número menor\n");
     }
     if (palpite < dado){
       printf("tente um número maior\n");
     }
     // por motivos de balanceamento, 20 é um range divertido para te indicar a proximidade do palpite
     if (palpite > dado+20){
          printf("...um número muito menor\n");
     }
     if (palpite < dado-20){
          printf("...um número muito maior\n");
     }
      tentativas += 1;
     }
   else {
     printf("acabou as tentativas, o número era %d", dado);
     break;
   }     
   
  }
  return 0;
}