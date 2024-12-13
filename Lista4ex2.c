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
    
    float A[6];
    int x;
    
    for(x=0;x<6;x++){
    printf("Insira o %i número:", x+1);
    scanf("%f", &A[x]);
    }
    
    float B[6];
    int y;
    
    for(y=0;y<6;y++){
    B[y] = fatorial(A[y]);
    }
    
    printf("números fatoriais:\n");
    
    int z;
    for (z=0;z<6;z++){
        printf("%.2f , ", B[z]);
    }
    return 0;
}
    