#include <stdio.h>

int factorial (int n){
    
    if (n < 0){
        printf("Error \n");
        return 0;
    }
    int f = 1;
    if (n == 0){
        return f;
    }else {
         
        for(int i = 1; i <= n; i++){
            f *= i; 
        }
        return f;
    }
}

int main (){
    
    int n;
    
    printf("Ingrese el numero: ");
    scanf("%d",&n);
    
    printf("%d",factorial(n));
   
    return 0;
}
