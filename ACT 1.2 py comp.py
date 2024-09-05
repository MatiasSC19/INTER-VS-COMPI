import random
x=0
numimpar=0
numpar=0
while x<500:
    y=random.randint(50,100)
    if y%2==0:
        numpar=numpar+1
    else:
        numimpar=numimpar+1
    x=x+1
print("Se generaron ", numimpar," numeros impares y ",numpar," numeros pares.")