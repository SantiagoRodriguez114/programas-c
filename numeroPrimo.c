#include <stdio.h>
#include <stdbool.h>


bool comprobacion(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    
    if( n < 0){
        printf("Valor Ingresado no valido");
        return 0;
    }

    if (comprobacion(n)) {
        printf("%d es un numero primo.\n", n);
    } else {
        printf("%d no es un numero primo.\n", n);
    }
    
    return 0;
}
