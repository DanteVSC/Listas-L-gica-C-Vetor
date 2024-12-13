#include<stdio.h>


int main() {

    float A[10];
    int x;

    for(x=0;x<10;x++){
    printf("Insira o %i número:", x+1);
    scanf("%f", &A[x]);
    }

    float B[10];
    int y;

    for(y=0;y<10;y++){
    B[9-y] = A[y];
    }

    printf("matriz B:\n");

    int z;
    for (z=0;z<10;z++){
        printf("%.2f , ", B[z]);
    }
    return 0;
}
