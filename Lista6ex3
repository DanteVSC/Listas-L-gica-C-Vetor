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
    
    int A[10];
    int x;
    
    for(x=0;x<10;x++){
    printf("Insira o %i número para Matriz A:", x+1);
    scanf("%i", &A[x]);
    }
    
    int B[10][3];
    int y;
    
    for(y=0;y<3;y++){
    for(x=0;x<10;x++){
    if (y==0){
    B[x][y]= A[x] + 5;
    }
    else if (y==1){
    B[x][y]= fatorial(A[x]);
    }
    else{
    B[x][y]= A[x] * A[x];
    }
    }
    }
    
    printf("Matriz B:\n");
    
    for(y=0;y<3;y++){
    for(x=0;x<10;x++){
    printf("Matriz B [%i] [%i]:%i\n",x+1, y+1, B[x][y]);
    }}
    
    return 0;
    
    }