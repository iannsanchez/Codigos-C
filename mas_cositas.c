#include <stdio.h>
#include <stdlib.h>

/*#include significa que a continuación se va a poner
entre los signos < y > el nombre de un fichero ya programado.
Ese fichero contiene órdenes del lenguaje que se
van a usar en nuestro programa.

Concretamente, la línea anterior dice que hay que incluir
el fichero stdio.h, ya que más adelante en el programa se
va a usar una orden que hay programada dentro de él.
Estos ficheros con órdenes ya programadas son las librerías.*/

int main()
{
    /*main es una palabra reservada que sirve para indicar el inicio del programa propiamente
    dicho y siempre debe ir seguida de “()”. Más adelante ya se explicará por qué.*/

    printf("Primer programita leyendo del libro re bien loko.\n");
    /*Para imprimir en pantalla hay una
    orden ya programada en el fichero stdio.h (por eso se
    incluyó antes) que se llama printf. Esta orden es lo que se
    llama una subrutina.*/
    system("PAUSE");
}

/* \n sirve como salto de párrafo o texto etc, a parte hace que la computadora trabaje mas rapido porque manda a una memoria temporal (buffer)
todas las letras, en vez de desparramarlas a la pantalla asi de una*/
