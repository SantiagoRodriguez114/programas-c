#include <stdio.h>

int factorial(int n){
    
    if (n < 0){
        printf("Error \n");
        return 0;
    }
    
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
    
    printf("%d",factorial(n));
    
    return 0;
}
