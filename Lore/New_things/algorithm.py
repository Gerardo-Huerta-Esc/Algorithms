lista = [
    ['H', 'A', 'T','Y','B'],
    ['C', 'O', 'T','R','P'],
    ['P', 'A', 'L','A','O'],
    ['C', 'A', 'T','A','I'],
    ['C', 'A', 'T','C','U']
]


palabra = [input('Introduce una perra palabra')]


# # ------ búsqueda en diagonal inversa ------
lista1 = []
for i,j in zip(range(4,-1,-1),range(4,-1,-1)):
    if lista[i][j] == 'H': # debe buscar por la inicial de la palabra a buscar
        for i,j in zip(range(4,-1,-1),range(4,-1,-1)):
            lista1.append(lista[i][j]) 
            print(lista[i][j])
    else:
        pass


lista2 = [ ]
if lista1:
    if lista2 != palabra:
        for i in range(len(lista1)):
                lista2.append(lista1[i])
                separador = ''
                resultado = separador.join(lista2)
                lista2 = [resultado]
                
                if lista2 == palabra:
                    print('Palabra encontrada')
                    break
if lista2 != palabra:
          print('Palabra no encontrada en la diagonal inversa')
                    
                

print(f'contenido de lista2 {lista2}')


# ------- Búsqueda en Diagonal ---------------

lista1 = []
for i,j in zip(range(0,5),range(0,5)):
    if lista[i][j] == 'H':
        for i,j in zip(range(0,5),range(0,5)):
            lista1.append(lista[i][j]) # aqui deberia guardar todas las letras despues de la H
    else:
        pass


# ------como hacer que verifique si hay una palabra
lista2 = [ ]
if lista1:
    if lista2 != palabra:
        for i in range(len(lista1)):
                lista2.append(lista1[i])
                separador = ''
                resultado = separador.join(lista2)
                lista2 = [resultado]
                
                if lista2 == palabra:
                    print('Palabra encontrada en la diagonal normal.')
                    break
if lista2 != palabra:
    print('Palabra no encontrada en la diagonal')                   
                

print(f'contenido de lista2 {lista2}')


# apartir de aquí hay que mejorar los script siguientes para meterlos en una función
# para que así no quede tan largo el código.

#---------------------------
#-------- recorrido columnas 
# --------------------------


# -------izq --> der --------

for i in range(0,5): #primera columna
    print(lista[i][0])

for i in range(0,5): #segunda columna
    print(lista[i][1])

for i in range(0,5): #tercera columna
    print(lista[i][2])

for i in range(0,5): #cuarta columna
   print(lista[i][3])

for i in range(0,5): #quinta columna
    print(lista[i][4])

# ----------der --> izq -----------

for i in range(4,-1,-1): #primera columna
    print(lista[i][0])

for i in range(4,-1,-1): #segunda columna
    print(lista[i][1])

for i in range(4,-1,-1): #tercera columna
    print(lista[i][2])

for i in range(4,-1,-1): #cuarta columna
   print(lista[i][3])

for i in range(4,-1,-1): #quinta columna
    print(lista[i][4])




#   -------------------------------
#   ------ Recorrido filas --------
#   -------------------------------


#     -------izq --> der ------

for j in range(0,5): #primera fila
    print(lista[0][j])

for j in range(0,5): #segunda fila
    print(lista[1][j])

for j in range(0,5): #tercera fila
    print(lista[2][j])

for j in range(0,5): #cuarta fila
   print(lista[3][j])

for j in range(0,5): #quinta fila
    print(lista[4][j])


#--------- der --> izq --------------

for j in range(4,-1,-1): #quinta fila
    print(lista[0][j])


for j in range(4,-1,-1): #quinta fila
    print(lista[1][j])


for j in range(4,-1,-1): #quinta fila
    print(lista[2][j])


for j in range(4,-1,-1): #quinta fila
    print(lista[3][j])


for j in range(4,-1,-1): #quinta fila
    print(lista[4][j])


