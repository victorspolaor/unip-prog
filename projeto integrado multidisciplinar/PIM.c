/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>

int lugarDef = 0, lugarComum = 0, lugaresOcupados = 0;
int lin = 0, col = 0;

typedef struct{
    char nome[50], email[50];
    double RG;

}participantes;

void ingressosDef(int resp);

void pause();

void matrizAssentos();

int main()
{
    setlocale(LC_ALL, "");

    participantes *inscritos;

    int linMax = 0, colMax = 0;
    int lugares = 0;
    int escolha = 0, respDef = 0;
    char resposta[9];
    bool ocupado = true, vago = false;

    printf("\n  Defina o número de vagas\n");
    printf("\n\t");
    scanf("%d", &lugares);

    // Alocar na memória o número total de lugares

    inscritos = malloc(lugares * sizeof(participantes));

    // Fazer a checagem até o nº de fileiras * assentos == total

   do{
        // Recebendo o número total de assentos

        printf("\n  Defina o número de fileiras e assentos por fileira!\n\n");
        printf("  Número de fileiras: ");
        scanf("%d", &linMax);
        printf("\n  Número de assentos: ");
        scanf("%d", &colMax);

        // Checagem se o número de fileiras multiplicado é igual ao de lugares

        if(linMax * colMax == lugares){
            printf("\n\t--------------------------------------------------------\n"
                   "\tNúmero de fileiras e assentos determinados com SUCESSO!\n"
                   "\t--------------------------------------------------------\n\n");
        pause();
        }
        else{
            printf("\nNúmero de fileiras e/ou assentos INVÁLIDOS, digite novamente!\n\n");
        pause();
        }
   }while(linMax * colMax != lugares);

   int poltrona[linMax][colMax];

    // Passando o valor bool "vago" para todos os assentos

    for(lin = 0; lin < linMax; lin++){
        for(col = 0; col < colMax; col++){
            poltrona[lin][col] = vago;
        }
    }

    if(linMax * colMax == lugares){
        do{

            printf("\n\t   BEM VINDO AO MENU DE CADASTRO\n\n"
                   "\tEscolha uma das opções digitando o número correspondente:\n"
                   "\tDigite [1] para efetuar ou cancelar uma reserva\n"
                   "\tDigite [2] para efetuar seu cadastro\n"
                   "\tDigite [-1] para sair do sistema\n\n");

            printf("\t");
            scanf("%d", &escolha);

            switch(escolha){

                case 1:
                        printf("\n\tVocê deseja reservar ou cancelar sua vaga?\n"
                               "\tDigite RESERVAR para reservas\n"
                               "\tDigite CANCELAR para cancelamento\n\n");

                        printf("\t\t");
                        scanf("%s", resposta);

                    if(!strcmp("Reservar", resposta) || !strcmp("reservar", resposta) || !strcmp("RESERVAR", resposta)){

                        matrizAssentos();

                        if(lin > linMax || col > colMax){
                            printf("\n\n\tAssento inválido! Escolha outro, por favor!\n\n");

                        pause();
                        }

                        strcpy(resposta, "");

                            if(lin <= linMax && col <= colMax){
                                if(poltrona[lin][col] == vago){

                                    printf("\n\tO assento está vago!\n\n");

                                    poltrona[lin][col] = ocupado;

                                    printf("\tVocê possui algum tipo de deficiência?\n\n"
                                    "\tDigite [1] se a resposta for sim, por favor!\n"
                                    "\tDigite [2] para comprar ingressos comuns\n\n");

                                    printf("\t");
                                    scanf("%d", &respDef);

                                    ingressosDef(respDef);

                                    if(lugarDef > 0.2 * lugares && respDef == 1){
                                        printf("\t--------------------------------------------------------------------\n"
                                               "\tOs lugares reservados para portadores de deficiência esgostaram!\n"
                                               "\tMas você ainda pode, se houver vagas, escolher uma vaga comum!\n"
                                               "\tFique à vontade e boa palestra!\n"
                                               "\t---------------------------------------------------------------------\n\n");

                                        poltrona[lin][col] = vago;

                                    }
                                    else if (lugarComum > 0.95 * lugares && respDef == 2){
                                        printf("As vagas comuns para assistir a palestra esgotaram, sinto muito!\n\n");

                                        poltrona[lin][col] = vago;
                                    }
                                    else if (lugaresOcupados == lugares){
                                        printf("-------------------------------------------------------------------------------------\n"
                                               "LIMITE MÁXIMO DE PARTICIPANTES ATINGIDO! DESCULPE, ESPERO QUE CONSIGA NA PRÓXIMA VEZ!\n"
                                               "-------------------------------------------------------------------------------------\n\n");
                                        pause();
                                    }
                                    else{

                                        printf("\n\t------------------------------------------\n"
                                               "\tVaga reservada com sucesso! Boa palestra!\n"
                                               "\t------------------------------------------\n\n");
                                    }
                                }
                                else if(poltrona[lin][col] == ocupado){
                                    printf("\n\tO assento está ocupado! Selecione outro por favor!\n\n");
                                }
                            pause();
                            break;
                        }
                    }
                    else if(!strcmp("Cancelar", resposta) || !strcmp("cancelar", resposta) || !strcmp("CANCELAR", resposta)){

                        matrizAssentos();

                        if(lin > linMax || col > colMax){
                            printf("\n\n\tAssento inválido! Escolha outro, por favor!\n\n");

                        pause();
                        }

                        if(poltrona[lin][col] == ocupado){
                            poltrona[lin][col] = vago;
                            printf("\n\tReserva cancelada com sucesso!\n\n");
                        }
                        else if(poltrona[lin][col] == vago){
                                printf("\n\tO assento não foi reservado!\n\n");
                        }
                    pause();
                    break;
                    }
                    else{
                        printf("\n\tOpção inválida!\n\n");

                    pause();
                    break;
                    }
            }

        lugaresOcupados = lugarComum + lugarDef;

        }while(escolha != -1 || lugaresOcupados < 400);
    }
}

void ingressosDef(int resp){
    if(resp == 1){
        lugarDef++;
        lugaresOcupados++;
    }else if(resp == 2){
        lugarComum++;
        lugaresOcupados++;
     }else{
         printf("\n\tOpção inválida!\n\n");
      }
}

void pause(){
    system("pause");
    system("cls");
}

void matrizAssentos(){
    printf("\n\tDigite o número da fileira desejada: ");
    scanf("%d", &lin);
    printf("\tDigite o número do assento desejado: ");
    scanf("%d", &col);
    printf("\n\n");
}
*/
