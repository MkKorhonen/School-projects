def suodata_virhearvot(lista, reuna):
 for numero in lista[:]:
  if numero > reuna:
   lista.remove(numero)

mittaukset = [12.2, 54.2, 42345.2, 23534.1, 55.7, 8982.4]
suodata_virhearvot(mittaukset, 8000)
print(mittaukset)
