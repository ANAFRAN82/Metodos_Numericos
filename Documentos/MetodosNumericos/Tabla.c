#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[100];
    int i=0;
    int b=2;
    while(i<=100){
        a[i]=i*b;
        i++;
    }
    i=0;
    while(i<100){
        printf("a[%d]= %d\n",i,a[i]);
        i++;
    }
    system("Pause");
    return 0;

}
