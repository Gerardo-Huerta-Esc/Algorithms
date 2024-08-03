'''
Polimorfismo

Formas Geométricas

Definición de Clases:

Clase base Forma con un método abstracto area.
Clases derivadas Circulo, Rectangulo y Triangulo que implementen el método area.

Objetivo: Crear una lista de diferentes formas y calcular el área total de todas ellas.
'''

from abc import ABC, abstractmethod
import math

# Clase base con método abstracto
class Forma(ABC):
    @abstractmethod
    def area(self):
        pass

# Clase derivada Circulo
class Circulo(Forma):
    def __init__(self, radio):
        self.radio = radio
    
    def area(self):
        return math.pi * self.radio**2

# Clase derivada Rectangulo
class Rectangulo(Forma):
    def __init__(self, largo, ancho):
        self.largo = largo
        self.ancho = ancho
    
    def area(self):
        return self.largo * self.ancho

# Clase derivada Triangulo
class Triangulo(Forma):
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura
    
    def area(self):
        return 0.5 * self.base * self.altura

# Crear instancias de las formas
circulo = Circulo(2)
rectangulo = Rectangulo(3, 4)
triangulo = Triangulo(3, 5)

# Lista de formas
formas = [circulo, rectangulo, triangulo]

# Calcular el área total
area_total = sum(forma.area() for forma in formas)
print(f"El área total es: {area_total}")
