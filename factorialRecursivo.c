#include <stdio.h>

int factorial(int n){
  
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int main(){
    
    
    int n;
    
    printf("Ingrese el numero: ");
    scanf("%d",&n);

    if(n < 0){
        printf("Numero ingresado no valido, debe ser un numero positivo");
    }else{
        printf("Factorial de %d es %d", n, factorial(n));
    }
    return 0;
}
