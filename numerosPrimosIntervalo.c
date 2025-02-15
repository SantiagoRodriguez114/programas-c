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
    int x,y;
    
    printf("Ingrese un numero: ");
    scanf("%d", &x);

    printf("Ingrese un numero: ");
    scanf("%d", &y);
    
    if( x < 0 || y < 0 || x > y){
        printf("Valor Ingresado no valido");
        return 0;
    }
    
    for(int i = x; i < y;i++){
        if (comprobacion(i)) {
        printf("%d es un numero primo.\n", i);
        } else {
        printf("%d no es un numero primo.\n", i);
        }
    }
    
    
    return 0;
}
