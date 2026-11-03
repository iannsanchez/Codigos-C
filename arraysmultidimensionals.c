#include <stdio.h>
#include <conio.h>

int main()
{
    int grades[2][5]; /*primer casilla es fila, segunda la columna*/
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;
    /*Se puede definir así los arreglos, pero mejor es: */
    /* int grades[2][5] = { {80, 70, 65, 89, 90} , {85, 80, 80, 82, 87} }; ó*/
    /*int grades[2][5] = {80, 70, 65, 89, 90, 85, 80, 80, 82, 87};*/

    for (i = 0; i < 2; i++)
    {
        average = 0;

        for (j = 0; j < 5; j++)
        {
            average += grades[i][j]; /*Lo mismo average += grades[][] que average = average + (el valor de la casilla)*/
        }

        average /= 5; /*Lo mismo average /= que average = average / (cualquier cosa)*/
        printf("La calificacion promedio de la materia %d es: %.2f\n", i, average);
    }

    _getch();
}