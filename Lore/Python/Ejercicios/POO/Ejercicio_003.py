"""
**Problema de Entrevista:**

En SpaceX, trabajamos con múltiples tipos de vehículos espaciales. Queremos crear un sistema en Python que nos ayude a gestionar 
estos vehículos de manera eficiente utilizando programación orientada a objetos.

### Requisitos:

1. Crea una clase base llamada `Spacecraft` con las siguientes propiedades y métodos:
   - Propiedades:
     - `name` (str): nombre del vehículo espacial.
     - `d` (float): velocidad máxima del vehículo espacial en km/s.
     - `fuel` (float): cantidad de combustible en toneladas.
   - Métodos:
     - `__init__(self, name: str, max_speed: float, fuel: float)`: constructor para inicializar las propiedades.
     - `refuel(self, amount: float)`: método para agregar combustible. Aumenta la propiedad `fuel` en la cantidad `amount`.
     - `travel(self, distance: float) -> float`: método abstracto para calcular el tiempo de viaje en segundos. Este método debe ser implementado en las clases derivadas.

2. Crea dos clases derivadas de `Spacecraft` llamadas `Rocket` y `Shuttle`:
   - `Rocket`:
     - Propiedades:
       - `thrust` (float): empuje del cohete en kN.
     - Métodos:
       - `__init__(self, name: str, max_speed: float, fuel: float, thrust: float)`: constructor para inicializar las propiedades.
       - `travel(self, distance: float) -> float`: implementación para calcular el tiempo de viaje usando la fórmula `time = distance / max_speed`.
   - `Shuttle`:
     - Propiedades:
       - `passenger_capacity` (int): capacidad de pasajeros del transbordador.
     - Métodos:
       - `__init__(self, name: str, max_speed: float, fuel: float, passenger_capacity: int)`: constructor para inicializar las propiedades.
       - `travel(self, distance: float) -> float`: implementación para calcular el tiempo de viaje usando la fórmula `time = distance / (max_speed * 0.8)` 
       (debido a la menor eficiencia del transbordador en comparación con el cohete).

3. Crea instancias de `Rocket` y `Shuttle` y demuestra el uso de los métodos `refuel` y `travel`.

---
Este problema evalúa tus habilidades en POO, comprensión de herencia y polimorfismo, así como tu capacidad para trabajar con clases abstractas y métodos. ¡Buena suerte!
"""
from abc import ABC, abstractmethod

class Spacecraft(ABC):
    def __init__(self,name:str,max_speed:float,fuel:float):
        self.name = name
        self.max_speed = max_speed
        self.fuel = fuel

    def refuel(self, amount:float):
        self.fuel += amount
        print(f"Aumentando el combustible en una cantidad amount: {amount} \n" )

    @abstractmethod
    def travel(self, distance: float) -> float:
        pass
    
class Rocket(Spacecraft):
    def __init__(self, name:str, max_speed:float, fuel:float, thrust:float):
        super().__init__(name, max_speed,fuel)
        self.thrust = thrust
        print("Empuje thust en kN \n")

    def travel(self, distance: float) -> float:
        time = distance/self.max_speed
        print(f'Viajará {distance} en {time} tiempo \n')


class Shuttle(Spacecraft):
    def __init__(self,name:str,max_speed:float,fuel:float,passenger_capacity:int):
        super().__init__(name,max_speed,fuel)
        self.passenger_capacity = passenger_capacity
    def travel(self,distance:float) -> float:
        time = distance/(self.max_speed*0.8)
        print(f'Viajará {distance} en {time} tiempo \n')

nave1 = Rocket('Super Heavy',100.0,100.0,10)
nave2 = Shuttle('Dragon',80.0,100.0,4)

nave1.refuel(100)
nave1.travel(10000)

nave2.refuel(200)
nave2.travel(100)