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





#1
for i in ["A","B"]:
    df_total = df[df['producto']==i]
    print(df_total)
    a = df_total["ventas"].sum()
    print(f"promedio total de ventas para {i}: {df_total['ventas'].mean()}")
    print(f"Las ventas totales de {i} son: {a}")

    df_total.loc[df_total['ventas'] == df_total['ventas'].mean(), "comparacion"] = "Igual al promedio" 
    df_total.loc[df_total['ventas'] < df_total['ventas'].mean(), "comparacion"] = "menor al promedio"
    df_total.loc[df_total['ventas'] > df_total['ventas'].mean(), "comparacion"] = "Mayor al promedio"

    print(f'df completo {df_total}')

 