/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define inteira 12
#define meia 6


int main(void){

    setlocale(LC_ALL,"");

    int escolha, idade = 0, qtdMeia = 0, totalPessoas = 0;
    float somaInt = 0, somaMeia = 0, somaTotal = 0, horario = 0;


        do{

        escolha = 0;

                    printf("\n\t\tMENU DO CINEMA"
                           "\n\n________________________________________________________\n"
                           "\n DIGITE O N�MERO DO SERVI�O CORRESPONDENTE:\n\n"
                           " Digite [1] para comprar uma entrada inteira \n"
                           " Digite [2] para comprar meia entrada \n"
                           " Digite [3] para saber se o filme j� come�ou\n"
                           " Digite [-1] para sair do sistema e saber as informa��es de venda e lota��o\n\n"
                           " VALOR DAS ENTRADAS:\n\n"
                           "---------------------\n"
                           " Inteira: R$ 12.00  |\n"
                           "---------------------\n"
                           " Meia: R$ 6.00      |\n"
                           "---------------------\n"
                           "________________________________________________________\n\n");

                    scanf("%d", &escolha);

                        switch (escolha){

                               case 1:	//se for inteira

                                somaInt += inteira;
                                totalPessoas++;
                                printf("\nEntrada inteira foi comprada com sucesso!\n"
                                       "Bom filme!\n\n");

                        system("pause");
                        system("cls");
                        break;

                            case 2: // se for meia

                                printf("\nInforme a idade da crian�a: \n\n");
                                scanf("%d", &idade);

                                if(idade<=14){

                                    somaMeia += meia;
                                    totalPessoas++;

                                    printf("\nMeia entrada comprada com sucesso! Bom filme!\n\n");
                                }
                                else{// meia com mais de 14

                                    printf("\n\nA crian�a tem mais que 14 anos, o valor cobrado ser� inteiro\n");
                                    somaInt += inteira;
                                    totalPessoas++;
                                }

                            system("pause");
                            system("cls");
                            break;

                               case 3://chegou tarde

                                    printf("\nHor�rio de funcionamento do guich�: at� o in�cio do filme\n\n"
                                           "IN�CIO DO FILME: 20h\n");

                                    printf("\n\tInforme o hor�rio entre v�rgulas, por favor!\n\n");
                                    scanf("%f", &horario);

                                    if(horario >= 20){
                                        printf("\nO filme j� come�ou! Sinto muito e obrigado pela prefer�ncia!\n\n");

                                    }
                                    else if(horario < 20){
                                        printf("\nO filme ainda n�o come�ou, gostaria de reservar um ingresso?\n\n");
                                    }

                            system("pause");
                            system("cls");
                            break;

                                case -1:

                                        //calculando o total
                                        somaTotal = somaMeia + somaInt;

                                        qtdMeia = somaMeia / 6;

                                        //Requisitos do c�digo
                                        printf("\nValor total dos ingressos �: R$%.2f\n", somaTotal);
                                        printf("\nTotal de pessoas no cinema �: %d\n", totalPessoas);
                                        printf("\nQuantidade de ingressos a meia entrada vendidos das meias �: %d\n", qtdMeia);
                                        printf("\nValor total das inteiras �: R$%.2f\n\n", somaInt);


                            system("pause");
                            system("cls");
                            break;

                            }

                            if(totalPessoas == 4){
                                printf("\n\t\tO CINEMA LOTOU\n");

                                somaTotal = somaMeia + somaInt;

                                qtdMeia = somaMeia / 6;

                                printf("\n Valor total dos ingressos �: R$%.2f\n", somaTotal);
                                printf("\n Total de pessoas no cinema �: %d\n", totalPessoas);
                                printf("\n Quantidade de ingressos a meia entrada vendidos das meias �: %d\n", qtdMeia);
                                printf("\n Valor total das inteiras �: R$%.2f\n\n", somaInt);

                             }

                  }while(escolha != -1 && totalPessoas < 4);
}
*/
