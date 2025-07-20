#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void movimentobispo (int b){
    if(b > 0){
    printf("CIMA, DIREITA\n");
    movimentobispo (b - 1); 
    }
}


void movimentorainha (int r){
    if(r > 0){
        printf("ESQUERDA\n");
            movimentorainha (r - 1);
        }
    }

void movimentotorre (int t){
    if(t > 0){
        printf("DIREITA\n");
        movimentotorre (t - 1);
    }
}




int main (){
    int a;
    int horse = 0;
    int b = 0;
    int torre = 5;
    int rainha = 8;
    int bispo = 5;
/* ================================= PRIMEIRA PARTE QUE ERA PRA SUBSTITUIR ================================================
    
    printf("TORRE:  \n");
    for (int torre = 0; torre < 5; torre ++){
        printf("DIREITA\n");
    }


    printf("RAINHA: \n");
    while (rainha < 8){
        rainha++;
        printf ("ESQUERDA\n");
    }


    printf("BISPO:  \n");
do {
    bispo++;
        printf("CIMA, DIREITA\n");
}while (bispo < 5);
*/
printf("TORRE:  \n");
movimentotorre (torre);
printf("RAINHA: \n");
movimentorainha (rainha);
printf("BISPO 1:  \n");
movimentobispo (bispo);

printf("BISPO 2:\n");
for (int vertical = 0; vertical < 5; vertical++){
        for(int horizontal = 0; horizontal < 1; horizontal++){
            printf("DIREITA, ");
        }printf ("CIMA\n");
}



printf("CAVALO 1: \n");
for (int cavalo = 0; cavalo < 1; cavalo ++){
    for (int a = 0; a < 2; a++){
        printf("BAIXO\n");
    }printf("ESQUERDA\n");
}

printf("CAVALO 2:   \n");
while (horse < 1){
    horse++;
         while (b < 2){
             printf("BAIXO\n");
          b++;
       }
    printf ("ESQUERDA\n");
}



printf("CAVALO 3:\n");
for (int cavalheiro= 0; cavalheiro < 1 ; cavalheiro++){
    for (int horsinho = 0; horsinho < 2; horsinho++){
        srand(time(0));
    a = rand () %2; 
 if(a == 1){
    printf("DIREITA\n");
 }else{
         printf("ESQUERDA\n");
        }
    }printf("CIMA");
}

return 0;
}