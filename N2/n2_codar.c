#include <stdio.h>


int main(void) {
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite a sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite a sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome Do Aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura %.2f", idade, altura);

    return 0;
}