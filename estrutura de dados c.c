/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, 
real e char. Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação. */
#include <stdio.h>

int main()
{
    int i = 10;
    float r = 6.9;
    char caractere = 'V';
    
    int *pontInteiro;
    float *pontReal;
    char *pontCaractere;
    
    pontInteiro = &i;
    pontReal = &r;
    pontCaractere = &caractere;
    
    printf("Valor do inteiro: %d\n", i);
    printf("Valor do real: %.2f\n", r);
    printf("Valor do caractere: %c\n", caractere);
    
    *pontInteiro = 30;
    *pontReal = 7.9;
    *pontCaractere = 'A';

    printf("Inteiro %i ", *pontInteiro);
    printf("\nValor do real: %.2f",  *pontReal);
    printf("\nChar %c", *pontCaractere);
    
}

/* Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. 
Em seguida, compare seus endereços e exiba o conteúdo do maior endereço. */

//O CODIGO TA DANDO ERRO
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    if (&num1 > &num2) {
        printf("Conteudo do maior endereço: %d\n", num1);
    } else{

        printf("Conteudo do maior endereço: %d\n",num2);
    }

}

/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, 
esta função é chamada passando duas variáveis A e B por exemplo e, 
após a execução o da função, A conterá o valor de B e B terá o valor de A. */
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valorA, valorB;


    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    trocar(&valorA, &valorB);

    printf("Depois da troca:\n");
    printf("Valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

}

/*Elaborar um programa que leia dois valores inteiros (A e B).
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. 
A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B. */
#include <stdio.h>

int somaDobro(int *a, int *b) {
    int resultado = 2 * (*a + *b); 
    *a *= 2; 
    *b *= 2; 
    return resultado; 
}

int main() {
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    int resultado = somaDobro(&valorA, &valorB);


    printf("Valor de A (dobro): %d\n", valorA);
    printf("Valor de B (dobro): %d\n", valorB);


    printf("Soma do dobro de A e B: %d\n", resultado);

}
