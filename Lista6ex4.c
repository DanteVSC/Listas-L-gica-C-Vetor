#include<stdio.h>

float fatorial(x)
{
    float a, i=1;
    a = x;
    while (i < x){
    a = a * (x - i);
    i += 1;
    }
    
    return a;
}

int main() {
    
    int A[4];
    int x;
    
    for(x=0;x<4;x++){
    printf("Insira o %i número para Matriz A:", x+1);
    scanf("%i", &A[x]);
    }
    
    int B[4];
    
    for(x=0;x<4;x++){
    printf("Insira o %i número para Matriz B:", x+1);
    scanf("%i", &B[x]);
    }
    
    int C[4][2];
    int y;
    
    for(y=0;y<2;y++){
    for(x=0;x<4;x++){
    if (y==0){
    C[x][y]= A[x] * 2;
    }
    else{
    C[x][y]= B[x] - 5;
    }
    }
    }
    
    printf("Matriz C:\n");
    
    for(y=0;y<2;y++){
    for(x=0;x<4;x++){
    printf("Matriz C [%i] [%i]:%i\n",x+1, y+1, C[x][y]);
    }}
    
    return 0;
    
    }
