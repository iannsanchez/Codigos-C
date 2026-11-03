#include <stdio.h>
#include <conio.h>

int main()
{
    int edades[10], promedio;

    edades[0] = 4;
    edades[1] = 5;
    edades[2] = 3;
    edades[3] = 4;
    edades[4] = 6;
    edades[5] = 4;
    edades[6] = 5;
    edades[7] = 4;
    edades[8] = 5;
    edades[9] = 4;

    promedio = (edades[0] + edades[1] + edades[2] + edades[3] + edades[4] + edades[5] + edades[6] + edades[7] + edades[8] + edades[9]) / 10;

    printf("El promedio de edades en el aula es de: %d", promedio);
    _getch();
}