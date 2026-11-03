#include <stdio.h>
#include <conio.h> /*para usar _getch*/

void main()
{
    printf("wacho la tengo re clara\nme quie\bro\n"); /*la \b es backspace y el \v vertical tab no sirve en el .exe*/
    printf("\a");
    printf("\a");
    printf("\a");
    printf("\a");
    printf("\a"); /* Hace ruidito cuando abro el programa, la cantidad de \a no cambia el ruido*/
    printf("puedoponerunabandadecosasquese borrasi\rmilar al de backspace pero mas polenta\n");
    printf("horizontal tab a ver?\t ahhhh deja espacio a la derecha, un tab horizontal claro jajaj \t \t \t\t\tputoelquelee");
    _getch(); /* este evita ocupar el system("PAUSE") ese feo, y hace lo mismo*/
}
