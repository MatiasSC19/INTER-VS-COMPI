L_Sucursales=["Juan", "María", "Pedro", "Luisa", "Carlos", "Ana", "José", "Marta","Luis", "Elena", "Miguel", "Sofía", "Javier", "Claudia", "Andrés","Laura", "Fernando","Paula", "Ricardo", "Carmen", "Roberto", "Gloria", "Santiago", "Lucía", "Daniel"]
L_Ventas=[10,2,33,44,25,1,32,73,54,35,18,244,93,34,57,12,26,33,745,45,617,72,773,74,40]
MayorV=0
x=0
suma=0
while x<25:
    suma=suma+L_Ventas[x]
    if L_Ventas[x]>MayorV:
        MayorV=L_Ventas[x]
        t=x
    x=x+1
print("El promedio de ventas es de: ", suma/25)
print("La mayor venta la tuvo la sucursal de ", L_Sucursales[t]," con un total de ",MayorV)


