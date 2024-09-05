#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int x = 0;
    int numimpar = 0;
    int numpar = 0;

    srand(time(NULL));

    while (x < 500)
     {
        int y = rand() % 51 + 50;

        if (y % 2 == 0) {
            numpar++;
        } else {
            numimpar++;
        }
        x++;
    }

    printf("Se generaron %d numeros impares y %d numeros pares.\n", numimpar, numpar);

    return 0;
}
