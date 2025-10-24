import pandas as pd

data = {
    'fecha': ['2024-01-01', '2024-01-01', '2024-01-02', '2024-01-02', '2024-01-03'],
    'producto': ['A', 'B', 'A', 'B', 'A'],
    'ventas': [10, 20, 15, 18, 7]
}
df = pd.DataFrame(data)

# Tareas:
# Agrupar las ventas por producto y obtener el total acumulado.

# Calcular el promedio de ventas por producto.

# Añadir una columna que indique si las ventas del día fueron superiores al promedio del mismo producto.




# df_total = df[df['producto']=='A']
# print(df_total)
# a = df_total["ventas"].sum()
# print(f'Las ventas totales de A son: {a}')


for i in ["A","B"]:
    df_total = df[df['producto']==i]
    print(df_total)
    a = df_total["ventas"].sum()
    print(f'Las ventas totales de {i} son: {a}')


