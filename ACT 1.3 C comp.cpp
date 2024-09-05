#include stdio.h

int main() {
    char *L_Sucursales[] = {
        "Juan", "María", "Pedro", "Luisa", "Carlos", "Ana", "José", "Marta",
        "Luis", "Elena", "Miguel", "Sofía", "Javier", "Claudia", "Andrés",
        "Laura", "Fernando", "Paula", "Ricardo", "Carmen", "Roberto", "Gloria",
        "Santiago", "Lucía", "Daniel"
    };

    int L_Ventas[] = {
        10, 2, 33, 44, 25, 1, 32, 73, 54, 35, 18, 244, 93, 34, 57, 12, 26, 
        33, 745, 45, 617, 72, 773, 74, 40
    };

    int MayorV = 0;
    int x = 0;
    int suma = 0;
    int t = 0;  

    while (x < 25) {
        suma += L_Ventas[x];
        if (L_Ventas[x] > MayorV) {
            MayorV = L_Ventas[x];
            t = x; 
        }
        x++;
    }

    printf("El promedio de ventas es de: %.2f\n", (float)suma / 25);
    printf("La mayor venta la tuvo la sucursal de %s con un total de %d\n", L_Sucursales[t], MayorV);

    return 0;
}
