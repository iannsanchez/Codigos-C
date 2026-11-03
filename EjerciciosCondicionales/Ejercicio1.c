/*Escriba un algoritmo que permita ingresar 3 valores numéricos y determine cuál es el mayor, el medio y el menor.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c, mayor, medio, menor;

    printf("Ingrese el primer numero: \n");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &b);
    printf("Ingrese el tercer numero: \n");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        mayor = a;
        if (b > c)
        {
            medio = b;
            menor = c;
        }
        else
        {
            medio = c;
            menor = b;
        }
    }
    else
    {
        if (b > a && b > c)
        {
            mayor = b;
            if (a > c)
            {
                medio = a;
                menor = c;
            }
            else
            {
                medio = c;
                menor = a;
            }
        }
        else
        {
            mayor = c;
            if (a > b)
            {
                medio = a;
                menor = b;
            }
            else
            {
                medio = b;
                menor = a;
            }
        }
    }

    printf("El mayor es %.2f, el valor medio %.2f, y el menor %.2f\n", mayor, medio, menor);
    _getch();
}