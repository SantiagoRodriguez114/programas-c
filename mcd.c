#include <stdio.h>

int mcd(int dividendo, int divisor) {
    while (divisor != 0) { 
        int temp = divisor;       
        divisor = dividendo % divisor; 
        dividendo = temp;         
    }
    return dividendo; 
}

int main() {
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("El maximo comun divisor es: %d\n", mcd(a, b));

    return 0;
}
