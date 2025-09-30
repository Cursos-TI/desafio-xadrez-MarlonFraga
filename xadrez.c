#include <stdio.h>
/*

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     int bispo = 1; // Variavel de incremento
     int rainha = 1; //Variavel de incremento

     while (bispo <= 5) {
        printf("BISPO cinco casas para diagonal direita para cima, %d\n", bispo); bispo++;
     }
    
     printf("\n\n");//Pula duas linhas  
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

     for(int torre = 1; torre <= 5; torre++) {
        printf("TORRE cinco casas para direita. %d\n", torre);
    }

    printf("\n\n"); //Pula duas linhas


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    do
    {
        printf("RAINHA - Oito casas para esquerda. %d\n", rainha);
        rainha++;
    } while (rainha <= 8);
    
    printf("\n\n"); //Pula duas linhas

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int movimentoCavalo = 1;
    char posicao [5];

    printf("Informa uma Letra e uma Numero (Exemplo: B3): ");
    scanf("%s", posicao);

    while (movimentoCavalo--)
    {
        for(int i = 1; i <= 2; i++) {
            printf("Cima\n"); // Imprime "Cima"" duas vezes
        }
        printf("Direita\n"); //Imprimeira "Direita" uma vez
    }
    
    
    return 0;
}*/


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.      

    //Movimento TORRE com Recursivas  

         void moverTorre (int casas) {
            if (casas > 0){            
            printf("Direita\n");           
            moverTorre(casas - 1);

            }
         }

         int main () {                       
            int numero = 5;
            moverTorre(numero);

            return 0;
         }

    //Movimento BISPO com loops aninhados

         void moverBispo (int casas) {
            if (casas > 1){                      
            moverBispo(casas - 1);
         }
         }

        int main () { 
            
            for (int casas = 1; casas <= 8; casas++) {        
                printf("Diagonal Cima Direita - %d\n", casas);
         }
          

         return 0;
         }
        
  
  
    //Movimento RAINHA com Recursivas

         void moverRainha (int casas) {
            if (casas > 0){            
                printf("Esquerda\n", casas);           
                moverRainha(casas - 1);

         }    

         int main () {                       
            int numero = 8;
            moverRainha(numero);

         return 0;
         }

    //Movimento do Cavalo com Loops Complexos
         int main() {

         int movimentoCavalo = 1;
         int linhasCima = 2;  // casas para cima
         int colunasDireita = 1;  // casas para direita

         while (movimentoCavalo--) {
        // Loop vertical
            for (int i = 1; i <= linhasCima; i++) {
            printf("Cima (%d/%d)\n", i, linhasCima);
         }

        // Loop horizontal
            for (int j = 1; j <= colunasDireita; j++) {
            printf("Direita (%d/%d)\n", j, colunasDireita);
         }

            printf("Movimento concluído!\n");
    }

    return 0;
}



