#include<stdio.h>


int main() {

    float A[8];
    int x;

    for(x=0;x<8;x++){
    printf("Insira o %i número:", x+1);
    scanf("%f", &A[x]);
    }

    float B[8];
    int y;

    for(y=0;y<8;y++){
    B[y] = A[y]*A[y];
    }

    printf("números ao quadrado:\n");

    int z;
    for (z=0;z<8;z++){
        printf("%.2f , ", B[z]);
    }
    return 0;
}
