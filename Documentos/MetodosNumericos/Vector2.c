#include <stdio.h>
#include <stdlib.h>

int main(){
    int vector[100];
    int i=0;
    int r;
    while(i<=100){
        r=100-i;
        vector[i]=r;
        printf("Vector[%d]= %d ", i, vector[i]);
        printf("\n");
        i++;
    }
    system("Pause");
    return 0;
}
