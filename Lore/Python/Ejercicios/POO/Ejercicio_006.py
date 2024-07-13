'''
Ejercicio de POO con Herencia Múltiple: Animales en un Zoológico

Definición de Clases:


Clase Animal:
Atributos comunes a todos los animales: nombre y edad.
Método para mostrar la información básica del animal.

Clase Terrestre:
Hereda de Animal.
Atributo adicional: velocidad (en km/h).
Método para mostrar la información de los animales terrestres.

Clase Acuatico:
Hereda de Animal.
Atributo adicional: profundidad_maxima (en metros).
Método para mostrar la información de los animales acuáticos.

Clase Ave:
Hereda de Animal.
Atributo adicional: altura_maxima_vuelo (en metros).
Método para mostrar la información de las aves.

Clase Pingüino:
Hereda de Terrestre y Acuatico.
Método para mostrar todas las habilidades del pingüino.
'''

class Animal():
    def __init__(self,nombre,edad):
        self.nombre = nombre
        self.edad = edad

    def información(self):
        return f'Nombre: {self.nombre}, edad: {self.edad}'

class Terrestre(Animal):
    def __init__(self,nombre,edad,velocidad): #velocidad en km/h
        Animal.__init__(self,nombre,edad)
        self.velocidad = velocidad
    
    def información(self):
        información_básica = Animal.información(self)
        return f'{información_básica}, velocidad: {self.velocidad} km/h.'


class Acuatico(Animal):
    def __init__(self,nombre,edad,profundidad_maxima):#profundidad máxima en m
        Animal.__init__(self,nombre,edad)
        self.profundidad_maxima = profundidad_maxima

    def información(self):
        información_basica = Animal.información(self)
        return f'{información_basica}, produndidad máxima: {self.profundidad_maxima}m'

class Ave(Animal):
    def __init__(self,nombre,edad,altura_maxima_vuelo): #altura maxima en m
        Animal.__init__(self,nombre,edad)
        self.altura_maxima_vuelo = altura_maxima_vuelo

    def información(self):
        información_basica = Animal.información(self)
        return f'{información_basica}, altura máxima de vuelo: {self.altura_maxima_vuelo}m.'

class Pingüino(Terrestre,Acuatico):
    def __init__(self,nombre,edad,velocidad,profundidad_maxima):
        Animal.__init__(self,nombre,edad)
        Terrestre.__init__(self,nombre,edad,velocidad)
        Acuatico.__init__(self,nombre,edad,profundidad_maxima)

    def información(self):
        información_basica = Terrestre.información(self)
        return f'{información_basica}, profundidad máxima: {self.profundidad_maxima}'



def main():
    animal1 = Animal('Ornitorinco',2)
    animal2 = Terrestre('Ornitorinco',2,3)
    animal3 = Acuatico('Ornitorinco',2,6)
    animal4 = Ave('Ornitorinco',2,10)
    pinguino = Pingüino('Ornitorinco',2,10,50)

    print(animal1.información())
    print(animal2.información())
    print(animal3.información())
    print(animal4.información())
    print(pinguino.información())

if __name__ == '__main__':
    main()

