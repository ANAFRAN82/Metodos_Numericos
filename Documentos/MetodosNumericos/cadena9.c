#include <stdio.h>
#include <string.h>

int main(){
    int res;
    char str1[]="para";
    char str2[]="para";
    res= strcmp( str1, str2 );
    printf("Resultado: %d ", res);
    return 0;
}
