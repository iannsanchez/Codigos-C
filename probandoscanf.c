#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, suma;

    printf("Ingrese dos numeros enteros para sumar\n");
    scanf("%d", &a);
    scanf("%d", &b);

    suma = a + b;

    printf("La suma de: %d mas %d es igual a: %d", a, b, suma);
    _getch();
}