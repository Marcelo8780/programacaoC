#include <stdio.h>

int main(void)
{
    char nome[10];
    int idade;
    float altura;
    char opcao;

    printf("Qual o seu nome: ");
    scanf("%s", &nome);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Qual a sua altura: ");
    scanf("%f", &altura);

    printf("Qual opção você escolhe: A, B ou C: ");
    scanf(" %c", &opcao);

    printf("O usuario se chama %s, possuí %d anos e tem uma altura de %f e escolheu a opção \"%c\" ", nome, idade, altura, opcao);
    return 0;

}