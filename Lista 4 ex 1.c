#include <stdio.h>

int main() {
    
    float A[5];
    int x;
    
    for(x=0;x<5;x++){
    printf("Insira o %i número:", x+1);
    scanf("%f", &A[x]);
    }
    
    float B[5];
    int y;
    
    for(y=0;y<5;y++){
    B[y] = A[y]*3;
    }
    
    printf("números multiplicados por 3:\n");
    
    int z;
    for (z=0;z<5;z++){
        printf("%.2f,", B[z]);
    }
    return 0;
}
