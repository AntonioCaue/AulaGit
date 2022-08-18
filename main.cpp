#include <stdio.h>

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

int main(){
    printf("Hello Git\n");
    printf("Fatorial(5) = %d\n", fatorial (5));
}