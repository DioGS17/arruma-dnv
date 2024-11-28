#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

void mulheres(char equipes[3][max][max], char sexo[2][max][2], int nota[2][max][1]){
    int i, j, m1 = 0, m2 = 0;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            if(i == 0){
                if(sexo[i][j][0] == 'F'){
                    m1++;
                }
                
            }else{
                if(sexo[i][j][0] == 'F'){
                    m2++;
                }
               
            } 
        }
    }

    if(m1 > m2){
        printf("\nA equipe 1 tem mais mulheres");

    }else if (m2 > m1){
        printf("\nA equipe 2 tem mais mulheres");

    }else if (m1 == m2){
        printf("\nAmbas as equipes possuem a mesma quantidade de mulheres");

    }else{
        printf("\nAmbas as equipes nao possuem mulheres");
    }
    
}

void projeto(char equipes[3][max][max], char sexo[2][max][2], int nota[2][max][1]){
    int i, j;

    printf("\nAlunas que podem participar do projeto:");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 6; j++){
            if (strcmp(sexo[i][j], "F") == 0 && nota[i][j][0] >= 8){
                printf("\n%s", equipes[i][j]);
            }
            
        }
            
    }
        
}

void ponto(char equipes[3][max][max], char sexo[2][max][2], int nota[2][max][1]){
    int i, j;
    char nome[max];

        printf("\nDigite o nome da aluna: ");
        scanf("%s", nome);
        
    for (i = 0; i < 2; i++){
        for (j = 0; j < 6; j++){
            if (strcmp(sexo[i][j], "F") == 0){
                if (strcmp(equipes[i][j], nome) == 0){
                    if(nota[i][j][0] == 10){
                        printf("\nEssa aluna já possui nota maxima");
                        return;

                    }else{
                        nota[i][j][0] += 1;
                        printf("\nFoi adicionado mais um ponto a aluna %s", nome);
                        return;
                    }
                        
                }
                    
            }
                
        }
            
    }
    printf("\nNome nao encontrado");
    
}

void addAluno(char equipes[3][max][max], char sexo[2][max][2], int nota[2][max][1], int n1, int n2){;
    int equipe = 0;

    while(equipe < 1 || equipe > 2){
        printf("\nEm qual equipe sera adicionado um aluno: ");
        scanf("%d", &equipe);

        if (equipe < 1 || equipe > 2){
            printf("\nEquipe inexistente.");
        }
    }

    if (equipe == 1){
        n1++;
        
        printf("\nDigite o nome do aluno, seu sexo e sua nota:");
        printf("\nNome: ");
        scanf("%s", &equipes[equipe-1][n1-1]);
    
        printf("Sexo(M/F): ");
        scanf("%s", &sexo[equipe-1][n1-1]);
        if(sexo[equipe-1][n1-1][0] == 'm' || sexo[equipe-1][n1-1][0] == 'f'){
            sexo[equipe-1][n1-1][0] -= 32;
        }
            
        printf("Nota: ");
        scanf("%d", &nota[equipe-1][n1-1][0]);

    }else{
        n2++;

        printf("\nDigite o nome do aluno, seu sexo e sua nota:");
        printf("\nNome: ");
        scanf("%s", &equipes[equipe-1][n2-1]);
    
        printf("Sexo(M/F): ");
        scanf("%s", &sexo[equipe-1][n1-1]);
        if(sexo[equipe-1][n2-1][0] == 'm' || sexo[equipe-1][n2-1][0] == 'f'){
            sexo[equipe-1][n2-1][0] -= 32;
        }
            
        printf("Nota: ");
        scanf("%d", &nota[equipe-1][n2-1][0]);
    }
    
}

void main(){
    char equipes[3][max][max], sexo[2][max][2], opcao[2];
    int nota[2][max][1], i, j, aux = 0, n1 = 6, n2 = 6;

    for (i = 0; i < 2; i++){
        printf("\nDigite os nomes dos integrantes da equipe %d, seu sexo e sua nota:\n", i+1);
        for(j = 0; j < 6; j++){
            printf("\nNome[%d]: ", j+1);
            scanf("%s", &equipes[i][j]);
            
            printf("Sexo(M/F): ");
            scanf("%s", &sexo[i][j]);
            if(sexo[i][j][0] == 'm' || sexo[i][j][0] == 'f'){
                sexo[i][j][0] -= 32;
            }
            
            printf("Nota: ");
            scanf("%d", &nota[i][j][0]);
        }
        
    }
    scanf("%c");

    do{
        printf("\nSelecione uma das opcoes abaixo (Digite a letra correspondente):\n");
        printf("\na) Imprimir qual equipe possui mais mulheres.");
        printf("\nb) Imprimir quais alunas de ambas equipes podem participar de um projeto.");
        printf("\nc) Adicionar mais um ponto a uma das alunas.");
        printf("\nd) Adicionar um aluno a uma das equipes.");
        printf("\ne) Encerrar o programa.\n");
        printf("\nResposta: ");
        scanf("%s", &opcao);

        if(strcmp(opcao, "a") == 0){
            mulheres(equipes, sexo, nota);

        }else if (strcmp(opcao, "b") == 0){
            projeto(equipes, sexo, nota);

        }else if (strcmp(opcao, "c") == 0){
            ponto(equipes, sexo, nota);

        }else if (strcmp(opcao, "d") == 0){
            addAluno(equipes, sexo, nota, n1, n2);

        }else if (strcmp(opcao, "e") == 0){
            aux = 1;

        }else{
            printf("\nERRO: Resposta invalida");

        }
         
    } while (aux != 1);
    
}