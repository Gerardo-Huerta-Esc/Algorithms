'''
Definir la clase Círculo:

La clase debe tener un atributo radio.
La clase debe tener un método para calcular el área del círculo.
La clase debe tener un método para calcular la circunferencia del círculo.
La clase debe tener un método para cambiar el radio del círculo.
Implementar la clase en un programa:

Crear una instancia de la clase Círculo.
Solicitar al usuario el radio del círculo.
Calcular y mostrar el área y la circunferencia del círculo.
''' 

import math


class Círculo:
    def __init__(self,radio):
        self.radio = radio

    def calcular_area(self,radio):
        print(f'El radio es: {math.pi*radio**2}')
    def calcular_circunferencia(self,radio):
        print(f'La circunferencia es: {2*math.pi*radio}')
    def cambiar_radio(self,radio):
        radio_2 = radio*2
        print(f'El nuevo radio es: {radio_2}')
        



def main():
    radio = float(input("Ingresa un radio: \n"))
    circulo = Círculo(radio)
    circulo.calcular_area(radio)
    circulo.calcular_circunferencia(radio)
    circulo.cambiar_radio(radio)


if __name__ == '__main__':
    main()