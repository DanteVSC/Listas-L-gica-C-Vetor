#include<stdio.h>


int main() {
    
    float A[20];
    int x;
    
    for(x=0;x<20;x++){
    printf("Insira o %i número para a matriz A:", x+1);
    scanf("%f", &A[x]);
    }
    
    float B[30];
    int y;
    
    for(y=0;y<30;y++){
    printf("Insira o %i número para a matriz B:", y+1);
    scanf("%f", &B[y]);
    }
    
    float C[50];
    int z;
    
    for(z=0;z<50;z++){
    if (z < 20){
    C[z] = A[z];
    }
    else{
    C[z] = B[z-20];
    }
    }
    
    int i;
    for (i=0;i<50;i++){
        printf("%.2f , ", C[i]);
    }
    return 0;
}
    