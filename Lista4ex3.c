#include<stdio.h>


int main() {
    
    float A[5];
    int x;
    
    for(x=0;x<5;x++){
    printf("Insira o %i número para a matriz A:", x+1);
    scanf("%f", &A[x]);
    }
    
    float B[5];
    int y;
    
    for(y=0;y<5;y++){
    printf("Insira o %i número para a matriz B:", y+1);
    scanf("%f", &B[y]);
    }
    
    float C[5];
    int z;
    
    for(z=0;z<5;z++){
    C[z] = A[z] - B[z];
    }
    
    int i;
    for (i=0;i<5;i++){
        printf("%.2f , ", C[i]);
    }
    return 0;
}
    