"""
Claro, aquí tienes un ejercicio que combina Programación Orientada a Objetos con aspectos relevantes para un ingeniero de machine learning, 
como la implementación de un modelo básico y su entrenamiento:

### Ejercicio: Implementación de un Modelo de Machine Learning usando POO

**Instrucciones:**

1. **Definición de Clases**:
    - Define una clase `Dataset` que tenga atributos para almacenar los datos y métodos para cargar los datos desde un archivo (puedes simularlo con una lista de listas).
    - Define una clase `LinearRegression` que implemente un modelo de regresión lineal simple. Esta clase debe tener métodos para entrenar el modelo (`fit`), predecir 
      (`predict`), y calcular el error cuadrático medio (`mean_squared_error`).

2. **Entrenamiento y Predicción**:
    - Crea un objeto de la clase `Dataset` y carga los datos.
    - Crea un objeto de la clase `LinearRegression`, entrena el modelo con los datos y realiza predicciones.
    - Calcula y muestra el error cuadrático medio de las predicciones.

### Código Inicial

A continuación, te dejo una plantilla de cómo podrías estructurar las clases y el flujo del programa:

```python
import numpy as np

class Dataset:
    def __init__(self):
        self.data = []
    
    def load_data(self, data):
        self.data = data
    
    def get_features_and_labels(self):
        X = np.array([row[:-1] for row in self.data])
        y = np.array([row[-1] for row in self.data])
        return X, y

class LinearRegression:
    def __init__(self):
        self.weights = None
    
    def fit(self, X, y, epochs=1000, lr=0.01):
        X = np.c_[np.ones(X.shape[0]), X]  # Add bias term
        self.weights = np.zeros(X.shape[1])
        for _ in range(epochs):
            predictions = self.predict(X, add_bias=False)
            errors = y - predictions
            gradient = -2 * X.T @ errors / len(y)
            self.weights -= lr * gradient
    
    def predict(self, X, add_bias=True):
        if add_bias:
            X = np.c_[np.ones(X.shape[0]), X]
        return X @ self.weights
    
    def mean_squared_error(self, y_true, y_pred):
        return np.mean((y_true - y_pred) ** 2)

# Datos de ejemplo (puedes sustituirlos por otros datos)
data = [
    [1.0, 2.0, 3.0],
    [2.0, 3.0, 4.0],
    [3.0, 4.0, 5.0],
    [4.0, 5.0, 6.0]
]

# Crear y cargar el dataset
dataset = Dataset()
dataset.load_data(data)
X, y = dataset.get_features_and_labels()

# Crear y entrenar el modelo de regresión lineal
model = LinearRegression()
model.fit(X, y)

# Hacer predicciones y calcular el error
predictions = model.predict(X)
mse = model.mean_squared_error(y, predictions)

print(f"Predicciones: {predictions}")
print(f"Error cuadrático medio: {mse}")
```

### Instrucciones Detalladas

1. **Clase `Dataset`**:
    - `__init__`: Inicializa el atributo `data`.
    - `load_data(data)`: Carga los datos en el atributo `data`.
    - `get_features_and_labels()`: Devuelve los atributos (`X`) y las etiquetas (`y`) de los datos.

2. **Clase `LinearRegression`**:
    - `__init__`: Inicializa el atributo `weights`.
    - `fit(X, y, epochs, lr)`: Entrena el modelo usando descenso de gradiente. `epochs` define el número de iteraciones y `lr` la tasa de aprendizaje.
    - `predict(X, add_bias)`: Predice los valores de `X`. Si `add_bias` es `True`, añade un término de sesgo a `X`.
    - `mean_squared_error(y_true, y_pred)`: Calcula el error cuadrático medio entre `y_true` y `y_pred`.

Completa el código proporcionado y asegúrate de probar diferentes conjuntos de datos para verificar la funcionalidad de tu implementación. ¡Buena suerte!
"""
