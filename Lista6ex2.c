#include<stdio.h>

int main() {
    
    int A[7];
    int x;
    
    for(x=0;x<7;x++){
    printf("Insira o %i número para matriz A:", x+1);
    scanf("%i", &A[x]);
    }
    
    int B[7];
    
    for(x=0;x<7;x++){
    printf("Insira o %i número para matriz B:", x+1);
    scanf("%i", &B[x]);
    }
    
    int C[7][2];
    printf("Matriz C:\n");
    
    for(x=0;x<7;x++){
    C[x][0] = A[x];
    printf("Linha %i Coluna 1: %i \n", x, C[x][0]);
    
    }
    for(x=0;x<7;x++){
    C[x][1] = B[x];
    printf("Linha %i Coluna 2: %i \n", x, C[x][1]);
    }
    
    
    
    
    return 0;
}
    