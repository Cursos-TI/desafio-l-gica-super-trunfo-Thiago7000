#include <stdio.h>

int main (){

       int escolha, regras;
       int atributo, atributo2;
       float carta1_atributo1, carta1_atributo2;
       float carta2_atributo1, carta2_atributo2;
       float soma1, soma2;

       //cidade 1
       char letra1;
       char numero1 [3];
       char nome_cidade1 [20];
       float area1;
       int populacao1;
       float pib1;
       int pontos_turisticos1;


       //cidade 2
       char letra2;
       char numero2 [3];
       char nome_cidade2 [20];
       float area2;
       int populacao2;
       float pib2;
       int pontos_turisticos2;

       //Inicio do programa
       printf ("bem vindo ao jogo super trunfo\n");
       printf ("Escolha uma das opcoes abaixo\n");
       printf ("1. Jogar\n");
       printf ("2. Ver Regras\n");
       printf ("Escolha:");
       scanf ("%d", &escolha);

       switch (escolha)
       { 
       case 1:
              printf ("Bem vindo!\n");    
              printf  ("Antes do jogo comecar escolha o atributo ");
              printf ("que voce quer comparar\n");
              printf ("1. Populacao\n");
              printf ("2. Area\n");
              printf ("3. PIB\n");
              printf ("4. Numero de pontos turisticos\n");
              printf ("5. Densidade demografica\n");
              printf ("Escolha: ");
              scanf ("%d", &atributo);
        
              //Escolha segundo atributo
              switch (atributo)
              {
              case 1:
                     printf ("Escolha seu segundo atributo (diferente do primeiro)\n");
                     printf ("2. Area\n");
                     printf ("3. PIB\n");
                     printf ("4. Numero de pontos turisticos\n");
                     printf ("5. Densidade demografica\n");
                     printf ("Escolha: ");
                     scanf ("%d", &atributo2);       
                     break;
              case 2:
                     printf ("Escolha seu segundo atributo (diferente do primeiro)\n");
                     printf ("1. Populacao\n");
                     printf ("3. PIB\n");
                     printf ("4. Numero de pontos turisticos\n");
                     printf ("5. Densidade demografica\n");
                     printf ("Escolha: ");
                     scanf ("%d", &atributo2);       
                     break;
               case 3:
                     printf ("Escolha seu segundo atributo (diferente do primeiro)\n");
                     printf ("1. Populacao\n");
                     printf ("2. Area\n");
                     printf ("4. Numero de pontos turisticos\n");
                     printf ("5. Densidade demografica\n");
                     printf ("Escolha: ");
                     scanf ("%d", &atributo2);       
                     break;
              case 4:
                     printf ("Escolha seu segundo atributo (diferente do primeiro)\n");
                     printf ("1. Populacao\n");
                     printf ("2. Area\n");
                     printf ("3. PIB\n");
                     printf ("5. Densidade demografica\n");
                     printf ("Escolha: ");
                     scanf ("%d", &atributo2);       
                     break;
               case 5:
                     printf ("Escolha seu segundo atributo (diferente do primeiro)\n");
                     printf ("1. Populacao\n");
                     printf ("2. Area\n");
                     printf ("3. PIB\n");
                     printf ("4. Numero de pontos turisticos\n");
                     printf ("Escolha: ");
                     scanf ("%d", &atributo2);       
                     break;
              default:
                     printf ("Voce nao selecionou o primeiro atributo corretamente\n");
                     break;
              }



              //LEITURA DA CARTA 1
              printf ("Crie sua primeira carta agora, vamos la!\n");

              //leitura da letra
              printf ("digite uma letra entre A e H\n");
              scanf (" %c", &letra1);

              //leitura do numero
              printf ("digite um numero entre 01 e 04\n");
              scanf ("%s", numero1);

              //leitura da cidade 
              printf ("digite o nome da sua primeira cidade\n");
              scanf ("%s", nome_cidade1);

              //leitura da populacao
              printf  ("digite o numero de habitantes em sua cidade\n");
              scanf ("%d", &populacao1);

              //leitura da area
              printf ("digite a area da sua cidade, (a area esta em km²)\n");
              scanf ("%f", &area1);

              //leitura do PIB
              printf ("digite o PIB da sua cidade\n");
              scanf ("%f", &pib1);

              //leitura do ponto turistico
              printf ("digite a quantidade de pontos turisticos de sua cidade\n");
              scanf ("%d", &pontos_turisticos1);


              //LEITURA DA CARTA 2
              printf("agora crie sua segunda carta!\n");

              //leitura da letra
              printf ("digite uma letra entre A e H\n");
              scanf (" %c", &letra2);

              //leitura do numero
              printf ("digite um numero entre 01 e 04\n");
              scanf ("%s", numero2);

              //leitura da cidade 
              printf ("digite o nome da sua segunda cidade\n");
              scanf ("%s", nome_cidade2);

              //leitura da populacao
              printf  ("digite o numero de habitantes em sua segunda cidade\n");
              scanf ("%d",&populacao2);

              //leitura da area
              printf ("digite a area da sua cidade\n");
              scanf ("%f", &area2);

              //leitura do PIB
              printf ("digite o PIB da sua cidade\n");
              scanf ("%f", &pib2);

              //leitura do ponto turistico
              printf ("digite a quantidade de pontos turisticos de sua cidade\n");
              scanf ("%d", &pontos_turisticos2);

              //Calculos da densidade e PIB per capita, (CARTA 1) 
              float densidade_populacional1 = (float) populacao1/area1;
              double pib_per_capita1 = (double) pib1 * 1000000000.0/ (float) populacao1;


              //EXIBINDO DADOS DA CARTA 1
              printf ("CARTA 1\n");
              printf ("Estado: %c\n", letra1);
              printf("Codigo da cidade: %c%s\n",letra1,numero1);
              printf ("Nome da cidade: %s\n", nome_cidade1);
              printf ("Populacao: %d\n", populacao1);
              printf ("Area: %.2f km²\n", area1);
              printf ("PIB: %.2f bilhoes de reais\n", pib1);
              printf ("Numero de pontos turisticos: %d\n", pontos_turisticos1);
              printf ("Densidade populacional: %.2f hab/km\n", densidade_populacional1 );
              printf ("Pib per capita: %.2f bilhoes de reais\n", pib_per_capita1);


              //Calculos da densidade e PIB per capita, (CARTA 2)
              float densidade_populacional2 = (float) populacao2/area2;
              double pib_per_capita2 = (double) pib2 * 1000000000.0/ (float) populacao2;

              //EXIBINDO DADOS DA CARTA 2
              printf ("CARTA 2\n");
              printf ("Estado: %c\n", letra2);
              printf("Codigo da cidade: %c%s\n", letra2,numero2);
              printf ("Nome da cidade: %s\n", nome_cidade2);
              printf ("Populacao: %d\n", populacao2);
              printf ("Area: %.2f km²\n", area2);
              printf ("PIB: %.2f bilhoes de reais\n", pib2);
              printf ("Numero de pontos turisticos: %d\n", pontos_turisticos2);
              printf ("Densidade populacional: %.2f hab/km\n", densidade_populacional2 );
              printf ("Pib per capita: %.2f bilhoes de reais\n", pib_per_capita2);
              

              //***COMPARAÇÃO DAS CARTAS (ATRIBUTO 1)***
              switch (atributo)
              { 
              case 1:  
                     printf ("Comparacao do atributo Populacao:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Populacao\n");
                     printf ("%s: %d habitantes VS ", nome_cidade1, populacao1);
                     printf ("%s: %d habitantes\n", nome_cidade2, populacao2);

                     //Guardando o valor dos atributos
                     carta1_atributo1 =  (float) populacao1;
                     carta2_atributo1 = (float) populacao2;

                     if (populacao1 == populacao2){
                            printf ("Empate no primeiro atributo!\n");}  
                     else if(populacao1 > populacao2){
                            printf("Carta 1 e a vencedora do primeiro atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do primeiro atributo.\n");}                                                          
                     break;
              case 2:
                     printf ("Comparacao do atributo Area:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Area\n");
                     printf ("%s: %.2f km VS ", nome_cidade1, area1);
                     printf ("%s: %.2f km\n", nome_cidade2, area2);

                     //Guardando o valor dos atributos
                     carta1_atributo1 = area1;
                     carta2_atributo1 = area2;

                     if (area1 == area2){
                            printf ("Empate no primeiro atributo!\n");}         
                     else if (area1 > area2){
                            printf("Carta 1 e a vencedora do primeiro atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do primeiro atributo.\n");}    
                     break;
              case 3:
                     printf ("Comparacao do atributo PIB:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: PIB\n");
                     printf ("%s: %.2f bilhoes VS ", nome_cidade1, pib1);
                     printf ("%s: %.2f bilhoes\n", nome_cidade2, pib2);

                     //Guardando o valor dos atributos
                     carta1_atributo1 = pib1;
                     carta2_atributo1 = pib2;

                     if (pib1 == pib2){
                            printf ("Empate no primeiro atributo!\n");}  
                     else if(pib1 > pib2){
                            printf("Carta 1 e a vencedora do primeiro atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do primeiro atributo.\n");}                                                                   
                     break;
              case 4:
                     printf ("Comparacao do atributo Pontos Turisticos:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Pontos turisticos\n");
                     printf ("%s: %d VS ", nome_cidade1, pontos_turisticos1);
                     printf ("%s: %d\n", nome_cidade2, pontos_turisticos2);

                     //Guardando o valor dos atributos
                     carta1_atributo1 = (float) pontos_turisticos1;
                     carta2_atributo1 = (float) pontos_turisticos2;

                     if (pontos_turisticos1 == pontos_turisticos2){
                            printf ("Empate no primeiro atributo!\n");}  
                     else if(pontos_turisticos1 > pontos_turisticos2){
                            printf("Carta 1 e a vencedora do primeiro atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do primeiro atributo.\n");}                                             
                     break;
              case 5:
                     printf ("Comparacao do atributo Densidade Populacional:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Densidade Populacional\n");
                     printf ("%s: %.2f hab/km VS ", nome_cidade1, densidade_populacional1);
                     printf ("%s: %.2f hab/km\n", nome_cidade2, densidade_populacional2);

                     //Guardando o valor dos atributos
                     carta1_atributo1 = densidade_populacional1;
                     carta2_atributo1 = densidade_populacional2;

                     if (densidade_populacional1 == densidade_populacional2){
                            printf ("Empate no primeiro atributo!\n");}  
                     else if(densidade_populacional1 < densidade_populacional2){
                            printf("Carta 1 e a vencedora do primeiro atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do primeiro atributo.\n");}                                                                              
                     break;
              default:
                     printf ("### *Opcao invalida* ###\n");              
                     break;       
              }                                       

              //###COMPARAÇÃO DAS CARTAS (ATRIBUTO 2)###
              switch (atributo2)
              { 
              case 1:  
                     printf ("Comparacao do atributo Populacao:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Populacao\n");
                     printf ("%s: %d habitantes VS ", nome_cidade1, populacao1);
                     printf ("%s: %d habitantes\n", nome_cidade2, populacao2);

                     //Guardando o valor dos atributos
                     carta1_atributo2 = (float) populacao1;
                     carta2_atributo2 = (float) populacao2;

                     if (populacao1 == populacao2){
                            printf ("Empate no segundo atributo!\n");}  
                     else if(populacao1 > populacao2){
                            printf("Carta 1 e a vencedora do segundo atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do segundo atributo.\n");}                                                          
                     break;
              case 2:
                     printf ("Comparacao do atributo Area:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Area\n");
                     printf ("%s: %.2f km VS ", nome_cidade1, area1);
                     printf ("%s: %.2f km\n", nome_cidade2, area2);

                     //Guardando o valor dos atributos
                     carta1_atributo2 = area1;
                     carta2_atributo2 = area2;

                     if (area1 == area2){
                            printf ("Empate no segundo atributo!\n");}         
                     else if (area1 > area2){
                            printf("Carta 1 e a vencedora do segundo atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do segundo atributo.\n");}    
                     break;
              case 3:
                     printf ("Comparacao do atributo PIB:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: PIB\n");
                     printf ("%s: %.2f bilhoes VS ", nome_cidade1, pib1);
                     printf ("%s: %.2f bilhoes\n", nome_cidade2, pib2);

                     //Guardando o valor dos atributos
                     carta1_atributo2 = pib1;
                     carta2_atributo2 = pib2;

                     if (pib1 == pib2){
                            printf ("Empate no segundo atributo!\n");}  
                     else if(pib1 > pib2){
                            printf("Carta 1 e a vencedora do segundo atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do segundo atributo.\n");}                                                                   
                     break;
              case 4:
                     printf ("Comparacao do atributo Pontos Turisticos:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Pontos turisticos\n");
                     printf ("%s: %d VS ", nome_cidade1, pontos_turisticos1);
                     printf ("%s: %d\n", nome_cidade2, pontos_turisticos2);

                     //Guardando o valor dos atributos
                     carta1_atributo2 = (float) pontos_turisticos1;
                     carta2_atributo2 = (float) pontos_turisticos2;

                     if (pontos_turisticos1 == pontos_turisticos2){
                            printf ("Empate no segundo atributo!\n");}  
                     else if(pontos_turisticos1 > pontos_turisticos2){
                            printf("Carta 1 e a vencedora do segundo atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do segundo atributo.\n");}                                             
                     break;
              case 5:
                     printf ("Comparacao do atributo Densidade Populacional:\n");  
                     printf ("Cidade 1: %s\n", nome_cidade1);
                     printf ("Cidade 2: %s\n", nome_cidade2);
                     printf ("Atributo usado: Densidade Populacional\n");
                     printf ("%s: %.2f hab/km VS ", nome_cidade1, densidade_populacional1);
                     printf ("%s: %.2f hab/km\n", nome_cidade2, densidade_populacional2);

                     //Guardando o valor dos atributos
                     carta1_atributo2 = densidade_populacional1;
                     carta2_atributo2 = densidade_populacional2;

                     if (densidade_populacional1 == densidade_populacional2){
                            printf ("Empate no segundo atributo!\n");}  
                     else if(densidade_populacional1 < densidade_populacional2){
                            printf("Carta 1 e a vencedora do segundo atributo.\n");
                     } else{
                            printf("carta 2 e a vencedora do segundo atributo.\n");}                                                                              
                     break;
              default:
                     printf ("### *Opcao invalida* ###\n");              
                     break;       
              }     
              
              //Soma dos atributos
              soma1 = carta1_atributo1 + carta1_atributo2;
              soma2 = carta2_atributo1 + carta2_atributo2;

              //Comparação Final 
              printf ("Pais 1 e: %s e Pais 2 e %s\n", nome_cidade1, nome_cidade2);
              printf ("Os 2 atributos usados na comparacao foram:\n");
             
              //Primeiro atributo
              switch (atributo)
              {
              case 1: printf ("Populacao\n"); break;
              case 2: printf ("Area\n"); break;
              case 3: printf ("PIB\n"); break;
              case 4: printf ("Numero de pontos turisticos\n"); break;
              case 5: printf ("Densidade demografica\n"); break;
              default: printf ("Desconhecido\n"); break; 
              }
         
              //Exibindo o valor do atributo 1 de cada carta
              printf ("%s = %.0f e %s = %.0f\n", nome_cidade1, carta1_atributo1, nome_cidade2, carta2_atributo1);

              //Segundo atributo
              switch (atributo2)
              {
              case 1: printf ("Populacao\n"); break;
              case 2: printf ("Area\n"); break;
              case 3: printf ("PIB\n"); break;
              case 4: printf ("Numero de pontos turisticos\n"); break;
              case 5: printf ("Densidade demografica\n"); break;
              default: printf ("Desconhecido\n"); break; 
              }

              //Exibindo o valor do atributo 2 de cada carta
              printf ("%s = %.0f e %s = %.0f\n", nome_cidade1, carta1_atributo2, nome_cidade2, carta2_atributo2);

              //Exibindo a soma dos atributos
              printf ("%s: %.0f + %.0f = %.0f\n", nome_cidade1, carta1_atributo1, carta1_atributo2, soma1);
              printf ("%s: %.0f + %.0f = %.0f\n", nome_cidade2, carta2_atributo1, carta2_atributo2, soma2);
              printf ("%.0f x %.0f\n", soma1, soma2);

              //Definindo a Vitória 
              if (soma1 == soma2) { 
                     printf ("Empate!");
              } else if (soma1 > soma2){
                     printf ("Vitoria da carta 1, %s", nome_cidade1);
              } else {
                     printf ("Vitoria da carta 2, %s", nome_cidade2);
              }
              break;
       case 2:
              printf ("Regras:\n");
              printf ("1. Objetivo do jogo\n");
              printf ("2. Atributos\n");
              scanf ("%d", &regras);

              switch (regras)
              {
              case 1:
                     printf ("o objetivo do jogo e voce criar 2 cartas com nome de uma cidade que voce desejar "); 
                     printf ("e fazer uma disputa entre elas de acordo com o atributo que voce escolher\n");               
                     printf ("Bom jogo, espero que se divirta!\n");
                     break;
              case 2:
                     printf ("Atributos sao as caracteristicas de de sua cidade e que voce mesmo ira decidir.\n");            
                     printf ("Os atributos sao:\n");
                     printf ("1. Nome do Pais (nao e usado para comparacao\n)");                
                     printf ("2. Populacao\n");
                     printf ("3. Area\n");
                     printf ("4. PIB\n");
                     printf ("5. Numero de pontos turisticos\n");
                     printf ("6. Densidade demografica\n");
                     break;
              default:
                     printf ("### Nao existe essa regra! ###");
                     break;        
              }
              break;
       default:
              printf ("### *Opcao invalida!* ###\n");
              break;                 
       }

return 0;

}