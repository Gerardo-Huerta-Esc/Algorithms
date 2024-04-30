# reemplaza este ejercicio, esta muy facil

# En este ejercicio, implementarás una clase base Vehiculo y una subclase Coche. 
# El Vehiculo tiene métodos arrancar() y detener() para simular las acciones de 
# arrancar y detener un vehículo. La subclase Coche hereda de Vehiculo y agrega un método tocar_claxon().

class Vehiculo():
    def __init__(self):
        pass
    def arrancar(self):
        print('El coche está arrancado.')

    def detener(self):
        print('El coche está detenido.')

class Coche(Vehiculo):
    def __init__(self):
        super().__init__()

    def tocar_claxon(self):
        print('Ek coche está tocando el claxon.')


def main():
    coche = Coche()
    coche.arrancar()
    coche.detener()
    coche.tocar_claxon()

if __name__ == '__main__':
    main()


