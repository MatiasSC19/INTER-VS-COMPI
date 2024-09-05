#include stdio.h

int main() 
{
    int x = 0;
    int num = 0;
    int suma = 0;

    while (x < 10) 
    {
        printf("Ingrese un valor: ");
        scanf("%d", &num);
        suma += num;
        x++;
    }

    printf("Suma: %d\n", suma);
    printf("El promedio es de: %.2f\n", suma / 10.0);

    return 0;
}