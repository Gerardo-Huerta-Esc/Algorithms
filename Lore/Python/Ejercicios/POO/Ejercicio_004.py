"""
Definición de Clases:

Define una clase Empleado que tenga atributos comunes a todos los empleados, como nombre, edad y salario.
Define una clase Desarrollador que herede de Empleado y tenga un atributo adicional lenguaje_de_programacion.
Define una clase Gerente que herede de Empleado y tenga un atributo adicional departamento.
Define una clase DesarrolladorGerente que herede de ambas clases Desarrollador y Gerente, combinando las responsabilidades de ambas.
Métodos:

Implementa métodos en las clases para mostrar la información de los empleados.
Implementa un método en la clase DesarrolladorGerente para mostrar todas las responsabilidades.
"""

# Hubo algunos problemas de MRO con esta solución original:

# class Empleado:
#     def __init__(self,nombre,edad,salario):
#         self.nombre = nombre
#         self.edad = edad
#         self.salario = salario
#     def información(self):
#         print(f'Nombre: {self.nombre}, Edad: {self.edad}, Salario: {self.salario}')

# class Desarrollador(Empleado):
#     def __init__(self,nombre,edad,salario,lenguaje_de_programacion):
#         Empleado.__init__(self,nombre,edad,salario) # no usa super().
#         self.lenguaje_de_programacion = lenguaje_de_programacion
#     def información(self):
#         print(f'Nombre: {self.nombre}, Edad: {self.edad}, Salario: {self.salario}, Lenguaje: {self.lenguaje_de_programacion}')

# class Gerente(Empleado):
#     def __init__(self,nombre,edad,salario,departamento):
#         Empleado.__init__(self,nombre,edad,salario) # no usa super().
#         self.departamento = departamento
#     def información(self):
#         print(f'Nombre: {self.nombre}, Edad: {self.edad}, Salario: {self.salario}, Departamento: {self.departamento}')

# class DesarrolladorGerente(Desarrollador,Gerente):
#     def __init__(self,nombre,edad,salario,lenguaje_de_programacion,departamento):
#         Empleado.__init__(self,nombre,edad,salario)
#         Desarrollador.__init__(self,nombre,edad,salario,lenguaje_de_programacion)
#         Gerente.__init__(self,nombre,edad,salario, departamento)
        
#     def información(self):
#         print(f'Nombre: {self.nombre}, Edad: {self.edad}, Salario: {self.salario}, Lenguaje: {self.lenguaje_de_programacion}, Departamento: {self.departamento}')

# empleado = DesarrolladorGerente('German',27,45000,'Java','IoT')
# empleado.información()





# Solución mejorarda:


class Empleado:
    def __init__(self, nombre, edad, salario):
        self.nombre = nombre
        self.edad = edad
        self.salario = salario

    def mostrar_informacion(self):
        return f"Nombre: {self.nombre}, Edad: {self.edad}, Salario: {self.salario}"

class Desarrollador(Empleado):
    def __init__(self, nombre, edad, salario, lenguaje_de_programacion):
        Empleado.__init__(self, nombre, edad, salario)
        self.lenguaje_de_programacion = lenguaje_de_programacion

    def mostrar_informacion(self):
        info_basica = Empleado.mostrar_informacion(self)
        return f"{info_basica}, Lenguaje de Programación: {self.lenguaje_de_programacion}"

class Gerente(Empleado):
    def __init__(self, nombre, edad, salario, departamento):
        Empleado.__init__(self, nombre, edad, salario)
        self.departamento = departamento

    def mostrar_informacion(self):
        info_basica = Empleado.mostrar_informacion(self)
        return f"{info_basica}, Departamento: {self.departamento}"

class DesarrolladorGerente(Desarrollador, Gerente):
    def __init__(self, nombre, edad, salario, lenguaje_de_programacion, departamento):
        Empleado.__init__(self, nombre, edad, salario)
        Desarrollador.__init__(self, nombre, edad, salario, lenguaje_de_programacion)
        Gerente.__init__(self, nombre, edad, salario, departamento)

    def mostrar_informacion(self):
        info_basica = Empleado.mostrar_informacion(self)
        return f"{info_basica}, Lenguaje de Programación: {self.lenguaje_de_programacion}, Departamento: {self.departamento}"

    def mostrar_responsabilidades(self):
        return f"Responsabilidades: Desarrollar en {self.lenguaje_de_programacion} y gestionar el departamento de {self.departamento}"

#Ejemplo de uso
empleado = Empleado("Juan", 30, 50000)
desarrollador = Desarrollador("Ana", 25, 60000, "Python")
gerente = Gerente("Carlos", 40, 70000, "TI")
desarrollador_gerente = DesarrolladorGerente("Luis", 35, 80000, "Java", "Desarrollo")

print(empleado.mostrar_informacion())
print(desarrollador.mostrar_informacion())
print(gerente.mostrar_informacion())
print(desarrollador_gerente.mostrar_informacion())
print(desarrollador_gerente.mostrar_responsabilidades())


