#Pide tres números e imprime el mayor de ellos.
num1 = int(input('ingresa un numero'))
num2 = int(input('ingresa otro numero'))
num3 = int(input('ingresa un último numero'))


lista = [num1,num2,num3]
lista = sorted(lista)
print(lista[len(lista)-1])
