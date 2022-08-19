#include <stdio.h>

//Faz o fatorial recursivamente
int fatorial(int n){
    if(n == 0){//"Enquanto n != 0 "
        return 1;
    }else{
        return n * fatorial(n-1);//recursivo
    }
}

//Funcao principal
int main(){
    printf("Hello Git\n");
    printf("Fatorial(5) = %d\n", fatorial (5));//fatorial de n = 5
}