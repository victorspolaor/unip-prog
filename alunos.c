/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[50];
    float altura, idade;
}aluno;

int main(void){

    setlocale(LC_ALL, "Portuguese");

    aluno alunos[3];
    int maisDe25Anos = 0, idadeInferiorAMedia = 0;
    int i = 0;
    float mediaAltura = 0, somaDasAlturas = 0, mediaIdades = 0, somaDasIdades = 0;

        for (i = 0; i < 3; i++){
            printf("Digite o nome do aluno: ");
            gets(alunos[i].nome);
            printf("Digite a altura do aluno: ");
            scanf("%f", &alunos[i].altura);
            somaDasAlturas += alunos[i].altura;
            fflush(stdin);
            printf("Digite a idade do mesmo: ");
            scanf("%f", &alunos[i].idade);
            somaDasIdades += alunos[i].idade;
            printf("\n\n");
            fflush(stdin);
        }

        for(i = 0; i < 3; i++){
            if(alunos[i].idade > 25){
                maisDe25Anos++;
            }
        }

        mediaIdades = somaDasIdades / 3;

        for (i = 0; i < 3; i++){
            if(alunos[i].idade < mediaIdades){
                idadeInferiorAMedia++;
            }
        }

        printf("Quantidade de alunos com mais de 25 anos: %d\n", maisDe25Anos);
        printf("\nQuantidade de alunos com idade inferior a média: %d\n", idadeInferiorAMedia);
        printf("\nAlunos com altura superior a média: \n");

        mediaAltura = somaDasAlturas / 3;

            for(i = 0; i < 3; i++){
                if(alunos[i].altura > mediaAltura){
                    printf("%s\n", alunos[i].nome);
                }
            }

        printf("\nAlunos com idade inferior a 18 anos e altura abaixo da média:\n");
            for(i = 0; i < 3; i++){
                if(alunos[i].idade < 18 && alunos[i].altura < mediaAltura){
                    printf("%s\n", alunos[i].nome);
                }
            }
}*/
