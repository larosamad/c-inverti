//Dati in input due numeri scrivere un programma in linguaggio C che stampi i due numeri invertiti 
// di posizione (rispetto all'ordine con cui sono stati immessi)

#include <stdio.h>
int a, b, c;
int main(void)
{
    printf("Inserisci un numero");
    scanf("%d", &a);
    printf("Inserisci un altro numero");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("I tuoi numeri sono %d e %d", a, b);
    return 0;
}
