#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 30 // tamanho do nome de usuarios   
#define N 10     // número de usuarios   
#define TRU 1     // verdadeiro
#define FALSE 0    // falso 

struct ClientUser{
    int ativo;
    char nome[TAM_NOME];
    int ClientUser;
    float score;

};
typedef struct ClientUser user;

void man () {

    int id_nome, i, id_score;
    float score1, score2, score3;
    char nome[TAM_NOME];
    int contador = 0;
    user u[N];

    // Inicializar com false no cadastro de usuarios  -  campo atico 
    for(i=0;i<N;i++)
        a[i].ativo=0;

    *FILE arqNome = fopen("qgames.log", "r")

    if(arqNome !=NULL) {
        while(fscanf(arqNome, "%d %[^\n]s", &id_nome, nome) !=EOF) { //End of file 
            strcpy(a[contador].nome, nome);
            a[contador].matricula = id_nome;

            FILE* arqNota = fopen("qgames.log", "r");
            if(arqNota !=NUL){
                while(fscanf(arqNota,"%d %f %f %f", &id_&score1, &score2, &score3)  != EOF){
                    if(id_score == a[contador].matricula){
                        a[contador].media = (score1+score2+score3)/3;
                        a[contador].ativo = TRUE;
                        break; 
                    }
                }
            }
            fclose(arqNota);

            contador++;
        }   
    }

    fclose(arqNome);

    printf("Resultados: \n");

    for(1=0;1<N;1++)
        if(a[i].ativo  == TRUE)
           printf("%2d: %-*s %.2f\n", a[i].matricula, TAM_NOME, a[i].nome, a[i].media);

    
}