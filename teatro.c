/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL, "Portuguese");

    int numeros = 0, reserva = 0, lugaresVagos = 1800, lugaresOcupados = 0;
    int poltrona[30][60], lin = 0, col = 0;
    float arrecadacaoPrimeiras = 0, arrecadacaoUltimas = 0, arrecadacaoTotal = 0, arrecadacaoMeio = 0;
    float precoIngressoUltimas = 0, precoIngressoPrimeiras = 0, precoIngressoMeio = 0, precoIngresso = 0, porcentagem = 0;
    bool ocupado = true, vago = false;

    printf("Defina o preço normal do ingresso: ");
    scanf("%f", &precoIngresso);
    printf("Preço definido: %1.2fR$\n", precoIngresso);

    precoIngressoPrimeiras = precoIngresso * 1.25;
    precoIngressoUltimas = precoIngresso * 0.9;
    precoIngressoMeio = precoIngresso;

    for(lin = 0; lin < 30; lin++){
        for(col = 0; col < 60; col++){
            poltrona [lin] [col] = 0;
        }
    }
        do{
            printf("\n\nEscolha uma das opções digitando o número correspondente:\n\n"
                   "_____________________________________________________________\n\n"
                   "Digite 1 para: Saber se o lugar escolhido está reservado:\n"
                   "Digite 2 para: Reservar ou cancelar uma reserva\n"
                   "Digite 3 para: Mostrar a porcetagem de ocupação\n"
                   "Digite 4 para: Saber o valor da arrecadação total com a compra de ingressos\n"
                   "Digite -1 para: Sair do menu e fechar o programa\n"
                   "_____________________________________________________________\n\n");

            scanf("%d", &numeros);

            switch(numeros){

                case 1:
                        printf("\nDigite a coluna e o número da poltrona que deseja verificar se está vaga: \n\n");

                        printf("\nFila desejada: ");
                        scanf("%d", &lin);
                        printf("\nPoltrona desejada: ");
                        scanf("%d", &col);

                        if(lin < 30 && col < 60){
                            if(poltrona[lin][col] == vago){
                                printf("\nA poltrona está vaga!\n\n");
                            }else if(poltrona[lin][col] == ocupado){
                                printf("\nA poltrona está ocupada!\n");
                            }else{
                                printf("\nDigite uma poltrona válida!\n");
                            }
                        }
            system("pause");
            system("cls");
            break;

                case 2:

                        printf("\nO que deseja fazer?\n\n"
                                "[1] Reservar uma poltrona\n"
                                "[2] Cancelar minha reserva\n\n");
                        scanf("%d", &reserva);

                        if (reserva == 1){

                            printf("\nAs 10 últimas poltronas são 10%% mais baratas!\n\n");
                            printf("As 5 primeiras poltronas são 25%% mais caras!\n\n");
                            printf("As demais poltronas tem o valor normal!\n\n");

                            printf("\nFila desejada: ");
                            scanf("%d", &lin);
                            printf("\nPoltrona desejada: ");
                            scanf("%d", &col);

                            if(lin < 30 && col < 60){
                                if(poltrona[lin][col] == vago){
                                    poltrona[lin][col] = ocupado;
                                    lugaresOcupados++;
                                    lugaresVagos--;
                                    printf("\nPoltrona reservada! Bom filme!");
                                }else if(poltrona[lin][col] == ocupado){
                                        printf("\nA poltrona está ocupada!\n");
                                }else{
                                    printf("\nDigite uma poltrona válida!\n");
                                }
                            }
                        }
                            if (reserva == 2){
                                printf("\nFila da poltrona que será cancelada: ");
                                scanf("%d", &lin);
                                printf("\nPoltrona que será cancela: ");
                                scanf("%d", &col);

                                if(lin < 30 && col < 60 && poltrona[lin][col] == ocupado){
                                    poltrona[lin][col] = vago;
                                    lugaresVagos++;
                                    lugaresOcupados--;
                                    printf("\nSua poltrona foi cancelada com sucesso!");
                                }

                                else{
                                    printf("\nPoltrona não reservada, escolha novamente!");
                                }
                            }
                printf("\n\nLugares vagos: %d", lugaresVagos);
                printf("\nLugares ocupados %d", lugaresOcupados);
                printf("\n\n");
                printf("______________________________________________________\n\n");

            system("pause");
            system("cls");
            break;

            case 3:
                    printf("\nLugares vagos: %d\n", lugaresVagos);
                    printf("\nLugares ocupados %d\n", lugaresOcupados);

                    porcentagem = ((float) lugaresOcupados / 1800) * 100;

                    printf("\nPorcentagem de cadeiras ocupadas: %1.2f%%", porcentagem);

                printf("\n\n");
                printf("______________________________________________________\n\n");

            system("pause");
            system("cls");
            break;

            case 4:

                    for(lin = 0; lin < 5; lin++){
                        for(col = 0; col < 60; col++){
                            if(poltrona[lin][col] == ocupado){
                                arrecadacaoPrimeiras += precoIngressoPrimeiras;
                                poltrona[lin][col] = vago;
                            }
                        }
                    }

                    for(lin = 20; lin < 30; lin++){
                        for(col = 0; col < 60; col++){
                            if(poltrona[lin][col] == ocupado){
                                arrecadacaoUltimas += precoIngressoUltimas;
                                poltrona[lin][col] = vago;
                            }
                        }
                    }

                    arrecadacaoTotal = arrecadacaoPrimeiras + arrecadacaoUltimas + precoIngressoMeio;
                    printf("\nArrecadação total: %1.2fR$\n\n", arrecadacaoTotal);

                printf("\n\n");
                printf("______________________________________________________\n\n");

            system("pause");
            system("cls");
            break;

            case -1:

                    printf("\n-------------------------------------------\n"
                           "\nObrigado pela preferência, volte sempre!\n"
                           "\n-------------------------------------------\n");
        }
    }while(numeros != -1);
}
*/
