#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float media(float, float);

int main(){

    char nome;
    float nota1, nota2;

    setlocale(LC_ALL, "Portuguese");
    
    printf("Calculo da média bimestral");

    printf("\nDigite o nome do aluno: ");
        scanf("%s", &nome);
    printf("\nDigite o valor da primeira nota: ");
        scanf("%f", &nota1);
    printf("\nDigite o valor da segunda nota: ");
        scanf("%f", &nota2);
    
    printf("Nome do aluno: %s", nome);
    printf("Média do aluno: %f", media);
        if (media <= 6){
            printf("APROVADO!");
        }else
        printf("REPROVADO!");
                
    return 0;
}

float media(float nota1, float nota2){
        float result;
        result = (nota1 + nota2)/2;
        return result;
    }