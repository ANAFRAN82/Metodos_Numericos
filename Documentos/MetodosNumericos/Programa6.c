#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i;
    int suma=0;
    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        suma=suma + i;
    }
    printf("La suma de los nuemros es igual a: %d\n", suma);
}
