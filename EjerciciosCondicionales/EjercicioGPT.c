/*Hacé un programa que:

Cree una variable int numero.
Le asigne un número que vos quieras.
Use un if.
Si el número es mayor que 10, que imprima:
El numero es mayor que 10
Si no, que no haga nada.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int numero = 10;

    if (numero > 10)
    {
        printf("El numero es mayor que 10");
    }
    else
    {
        printf("El numero no es mayor que 10");
    }

    _getch();
}