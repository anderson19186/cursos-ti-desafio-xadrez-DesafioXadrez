#include <stdio.h>

                  // movimentações das peças xadrez
         void moverbispo(int bispo){
         if (bispo > 0){
         moverbispo(bispo -1);
         printf("direita,cima  %d casa \n",bispo);}}

         void moverTorre(int Torre){
         if (Torre>0){
         printf("horizontal %d casa \n",Torre);
         moverTorre(Torre - 1);}}
      
         void moverRainha(int Rainha){
         if (Rainha>0){
         moverRainha(Rainha -1);
         printf("Esquerda %d casa \n", Rainha);}}
        
         void moverCavalo(int Cavalo) {
    while (Cavalo > 0 ) {
        if (Cavalo == 1) {
            printf("cima\n");
            printf("cima\n");
            printf("direita\n");
             break;
        }if (Cavalo>1 && Cavalo <3) {
           
            printf("cima\n");
            printf("cima\n");
            printf("esquerda\n");
            Cavalo --;
            break;

         
        }else{
               printf("opção invalida");
            }
            continue; // volta para o início do laço
        }
    }
         //Menu do jogo.
     int  menu()
     { int dado;
     
       printf("Escolha qual peça de xadrez quer movimentar movimentar \n");
       printf("1.Bispo \n");
       printf("2.Torre \n");
       printf("3.Rainha \n");
       printf("4.cavalo\n");
       printf("5.Digite 0 para sair...\n");
       scanf("%d",&dado);

      return dado;
      
     }

int main(){
        
        int bispo,dado=1;
        int Torre,Rainha,Cavalo;
       

        do
        {
        dado=menu(); // chama menu do jogo
        switch (dado) //Seleciona as peças e movimentos.
        {
        case 1:
             printf("Bispo selecionado \n");
             printf("digite a quantidade de casas de (1 a 5)\n");
             scanf("%d",&bispo);
             if (bispo >= 1 && bispo <= 5){moverbispo(bispo);
             }else {
                printf("opção invalida \n");}
                
                break;
                  
         case 2:
              printf("Torre selecionada \n");
              printf("digite a quantidade de casas (1 a 5 )\n");
              scanf("%d",&Torre);
               if (Torre >= 1 && Torre<=5){moverTorre(Torre);
              }else {
              printf("opção invalida \n");}

              break;

             
         case 3:
               printf("Rainha selecionada \n");
               printf("Digite a quantidade de casas (1 a 8): ");
               scanf("%d", &Rainha);
               if (Rainha >= 1 && Rainha <= 8){
                  moverRainha(Rainha);
               } else {
                  printf("Opção inválida \n");
               }
               break;
         case 4:
               printf ("Cavalo selecionado \n");
               printf ("Selecione o movimento do cavalo \n");
               printf ("1. cima-direita\n");
               printf ("2. cima-esquerda\n");
               scanf("%d",&Cavalo);
               if (Cavalo >= 1 && Cavalo <=2){
                  moverCavalo(Cavalo);
               } else {
                  printf("Opção inválida\n");
               }
               break;



                    
             }}
              while (dado != 0);// reinicia menu
              // sair do jogo.
              printf(" Saindo do jogo... \n");

             
             
        
                 
        
     return 0;
    }
    
    
    
