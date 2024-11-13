'''Realizar un programa que conste de una clase llamada Estudiante, que tenga como atributos el nombre y 
la nota del alumno. Definir los métodos para inicializar sus atributos, imprimirlos y mostrar un mensaje 
con el resultado de la nota y si ha aprobado o no.'''

class Estudiante:
    def __init__(self,nombre,nota):
        self.nombre = nombre
        self.nota = nota

    def atributos(self):
        self.nombre = 'Nick'
        self.nota = 10
        return (f'Nota:  {self.nota}  ,Nombre:  {self.nombre}\nEl estudiante sí aprobó')

estudiante = Estudiante('Nick',10)
print(estudiante.atributos())