#include <stdio.h>

int main(void)
{
    char nome[10] = "Marcelo";
    int idade = 23;
    float altura = 1.75;

    printf("Meu nome é : %s\n", nome);
    printf("A idade é: %i\n", idade);
    printf("Altura: %.2f \n", altura);
    return 0;

    /* 
    %d: Imprime um inteiro no formato decimal.
 
    %i: Equivalente a %d.
    
    %f: Imprime um número de ponto flutuante no formato padrão.
    
    %e: Imprime um número de ponto flutuante na notação científica.
    
    %c: Imprime um único caractere.
    
    %s: Imprime uma cadeia (string) de caracteres.
    
    */
}