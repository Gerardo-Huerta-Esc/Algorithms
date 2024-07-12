'''
Parte I:

Ejercicio de POO con Herencia Múltiple y unit tests

Definición de Clases:

Define una clase Persona que tenga atributos comunes a todas las personas, como nombre y edad.
Define una clase Empleado que herede de Persona y tenga un atributo adicional salario.
Define una clase Desarrollador que herede de Empleado y tenga un atributo adicional lenguaje_de_programacion.
Define una clase Gerente que herede de Empleado y tenga un atributo adicional departamento.
Define una clase DesarrolladorGerente que herede de ambas clases Desarrollador y Gerente, combinando las responsabilidades de ambas.

Métodos:

Implementa métodos en las clases para mostrar la información de las personas y empleados.
Implementa un método en la clase DesarrolladorGerente para mostrar todas las responsabilidades.



Parte II:

Agrega unit tests para verificar la funcionalidad de las clases.
'''
import unittest


class Persona():
    def __init__(self,nombre,edad):
        self.nombre = nombre
        self.edad = edad
    
    def información(self):
        return f'Nombre: {self.nombre}, Edad: {self.edad}'

class Empleado(Persona):
    def __init__(self,nombre,edad,salario):
        Persona.__init__(self,nombre,edad)
        self.salario = salario

    def información(self):
        información_básica = Persona.información(self) 
        return f'{información_básica}, Salario: {self.salario}'


class Desarrollador(Empleado):
    def __init__(self,nombre,edad,salario, lenguaje_de_programacion):
        Empleado.__init__(self,nombre,edad,salario)
        self.lenguaje_de_programacion = lenguaje_de_programacion

    def información(self):
        información_básica = Persona.información(self)
        return f'{información_básica}, lenguaje de programación: {self.lenguaje_de_programacion}'


class Gerente(Empleado):
    def __init__(self,nombre,edad,salario,departamento):
        Empleado.__init__(self,nombre,edad,salario)
        self.departamento = departamento

    def información(self):
        información_basica = Empleado.información(self)
        return f'{información_basica}, departamento: {self.departamento}'


class DesarrolladorGerente(Desarrollador,Gerente):
    def __init__(self,nombre,edad,salario,lenguaje_de_programacion,departamento):
        Persona.__init__(self,nombre,edad)
        Desarrollador.__init__(self,nombre,edad,salario,lenguaje_de_programacion)
        Gerente.__init__(self,nombre,edad,salario,departamento)

    def información(self):
        información_basica = Desarrollador.información(self)
        return f'{información_basica}, departamento: {self.departamento}' 
    def responsabilidades(self):
        return f'Responsabilidades: Programar en {self.lenguaje_de_programacion} y supervisar el área de {self.departamento}'

def main():
    
    persona = Persona('gerlt',21)
    empleado = Empleado('Geralt',21,21000)
    desarrollador = Desarrollador('Geralt',21,21000,'C++')
    gerente = Gerente('Geralt',21,21000,'IA')
    desarrolladorgerente = DesarrolladorGerente('Geralt',21,21000,'C++','IA')

    print(persona.información())
    print(empleado.información())
    print(desarrollador.información())
    print(gerente.información())
    print(desarrolladorgerente.información())
    print(desarrolladorgerente.responsabilidades())




# Clase de pruebas unitarias
class TestHerenciaMultiple(unittest.TestCase):

    def setUp(self):
        self.persona = Persona('Ana Lopez', 28)
        self.empleado = Empleado('Carlos Gomez', 30, 30000)
        self.desarrollador = Desarrollador('Luis Martinez', 25, 40000, 'Java')
        self.gerente = Gerente('Maria Gonzalez', 45, 60000, 'Recursos Humanos')
        self.desarrollador_gerente = DesarrolladorGerente('Juan Perez', 35, 50000, 'Python', 'Desarrollo')

    def test_persona_informacion(self):
        self.assertEqual(self.persona.información(), 'Nombre: Ana Lopez, Edad: 28')

    def test_empleado_informacion(self):
        self.assertEqual(self.empleado.información(), 'Nombre: Carlos Gomez, Edad: 30, Salario: 30000')

    def test_desarrollador_informacion(self):
        self.assertEqual(self.desarrollador.información(), 'Nombre: Luis Martinez, Edad: 25, lenguaje de programación: Java')

    def test_gerente_informacion(self):
        self.assertEqual(self.gerente.información(), 'Nombre: Maria Gonzalez, Edad: 45, Salario: 60000, departamento: Recursos Humanos')

    def test_desarrollador_gerente_informacion(self):
        self.assertEqual(self.desarrollador_gerente.información(), 'Nombre: Juan Perez, Edad: 35, lenguaje de programación: Python, departamento: Desarrollo')

    def test_desarrollador_gerente_responsabilidades(self):
        self.assertEqual(self.desarrollador_gerente.responsabilidades(), 'Responsabilidades: Programar en Python y supervisar el área de Desarrollo')

if __name__ == '__main__':
    main()
    unittest.main()