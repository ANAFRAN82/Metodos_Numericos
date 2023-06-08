#include <stdio.h>
#include <stdlib.h>

int main(){
    float horas;
    float ph;
    float sal;
    float sa;

    printf("Precio por hora ");
    scanf("%d", &ph);

    printf("Horas semanales trabajadas ");
    scanf("%f", &horas);

    if(horas<=40){
        sal=horas*40;
        printf("Tu salario es de: %d \n", sal);
    }else {
        sa=(40*ph+(ph*1.5*(horas-40)));
        printf("Tu salario semanal es %f",sa);

    }
    printf("Fin del programa \n");
    system("Pause");
    return 0;
}
