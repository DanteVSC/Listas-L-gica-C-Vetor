#include<stdio.h>


int main() {

    int A[5][3];
    int x;

    int B[5][3];
    int y;

    int C[5][3];
    int z;

    for(x=0;x<5;x++){
    for(y=0;y<3;y++){
    printf("Matriz A, linha %i, coluna %i:", x+1, y+1);
    scanf("%i", &A[x][y]);
    printf("Matriz B, linha %i, coluna %i:", x+1, y+1);
    scanf("%i", &B[x][y]);
    C[x][y] = A[x][y] + B[x][y];
    }
    }
    printf("\n");

    for(x=0;x<5;x++){
    for(y=0;y<3;y++){
    printf("Matriz C, linha %i, coluna %i: %i \n", x+1, y+1, C[x][y]);
    }
    }

    return 0;
}