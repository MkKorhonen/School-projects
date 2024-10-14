import math
def laske_pituus(lista):
 return math.hypot(lista[0] - lista[2], lista[1] - lista[3])
 
pituus = laske_pituus([1, 1, 2, 1])
print(pituus)
