"""Apua Miinaharavan tekemiseen on saatu Janne Sipilältä"""

import haravasto
import random
import time
import sys

tila = {
 "kentta": None
} 
tila2 = {
 "kentta2": None
}

alku = 0
loppu = 0
vuoro = 0

def kysy_kentankoko():
 while True:
  syote = input("Anna kentan koko muodossa x,y: ")
  syote = syote.split(",")
  if len(syote) != 2:
    print("Anna kentan koko muodossa x,y!")
  else:   
    try:
     x, y = int(syote[0]), int(syote[1])
    except ValueError:
     print("Anna koot kokonaislukuina")
    else:
     if x != y:
      print("Leveys ja pituus pitaa olla yhta pitkia")
     else:
      return x, y
	 
	 
def kysy_miinat(l, p):
 while True:
   try:
    syote = int(input("Anna miinojen määrä: ")) 
   except ValueError:
    print("Anna miinat kokonaislukuina")
   if syote > l * p:
    print("Miinoja enemmän kuin ruutuja")
   else:
    return syote
   
   
def avaa_ruutuja(x, y):
 kentta = tila["kentta"]
 kentta2 = tila2["kentta2"]
 global alku
 global loppu
 global vuoro
 if kentta[y][x] == "x":
  loppu = time.time()
  kului = int(loppu - alku)
  print("Miina rajahti, hävisit pelin")
  with open("tilastot.txt", "a") as kohde:
    kohde.write("Hävisit pelin, päivämäärä: {}, aika: {} sekunttia, vuoroja: {}\n".format(time.asctime( time.localtime(time.time())), kului, vuoro))
  haravasto.lopeta()
  vuoro = 0
  alku = 0
  main()
 else:
  nro = laske_miinat(x, y, kentta)
  if nro == 0:
   tulvataytto(kentta, x, y)
  else:
   kentta[y][x] = "{}".format(nro)
   kentta2[y][x] = "{}".format(nro)
  voitto = voititko() 
  if voitto == True:
   loppu = time.time()
   kului = int(loppu - alku)
   print("Voitit pelin\n")
   with open("tilastot.txt", "a") as kohde:
    kohde.write("Voitit pelin, päivämäärä: {}, aika: {} sekunttia, vuoroja: {}\n".format(time.asctime( time.localtime(time.time())), kului, vuoro))
   haravasto.lopeta()
   alku = 0
   vuoro = 0
   main()

  
  
def voititko():
 kentta = tila["kentta"]
 for j in range(len(kentta)):
  if " " in kentta[j]:
   return False
 return True


   
	 
def laske_miinat(x, y, kentta):
 minX = x - 1
 if (minX < 0):
  minX = 0
  
 maxX = x + 1
 if (maxX >= len(kentta[0])):
   maxX = len(kentta[0]) - 1
   
 minY = y - 1
 if (minY < 0):
  minY = 0
  
 maxY = y + 1
 if (maxY >= len(kentta)):
  maxY = len(kentta) - 1

 ninja = 0
 for j in range(minY, maxY + 1):
  for i in range(minX, maxX + 1):
   if (i == x and j == y):
    continue
   
   if (kentta[j][i] == 'x'):
    ninja += 1
 return ninja   

 
def tulvataytto(kentta, x, y):
 kentta = tila["kentta"]
 kentta2 = tila2["kentta2"]
 taytto = [(x, y)]
 if kentta[y][x] == "x":
  pass
 else:
  while taytto:
   x, y = taytto.pop()
   minX = x - 1
   if (minX < 0):
    minX = 0
   
   maxX = x + 1
   if (maxX >= len(kentta[0])):
    maxX = len(kentta[0]) - 1
   
   minY = y - 1
   if (minY < 0):
    minY = 0

   maxY = y + 1
   if (maxY >= len(kentta)):
    maxY = len(kentta) - 1

   miina = 0
   for j in range(minY, maxY + 1):
    for i in range(minX, maxX + 1):
     if (i == x and j == y):
      continue
	 
     if (kentta[j][i] == "x"):
      miina += 1
	  
   for j in range(minY, maxY + 1):
    for i in range(minX, maxX + 1):
      if (i == x and j == y):
       continue

      if (kentta[j][i] == " ") and miina == 0:
       taytto.append((i, j))
	  
   kentta[y][x] = "{}".format(miina)
   kentta2[y][x] = "{}".format(miina)
      
	  
	  
def piirra_kentta():
 kentta = tila2["kentta2"]
 haravasto.piirra_tausta ()
 haravasto.aloita_ruutujen_piirto ()
 for x in range(len(kentta[0])):
  for y in range(len(kentta)):
   if kentta[y][x] == "x":
    haravasto.lisaa_piirrettava_ruutu(" ", x * 40, y * 40)
   elif kentta[y][x] == "0":
    haravasto.lisaa_piirrettava_ruutu("0", x * 40, y * 40)
   elif kentta[y][x] == "1":
    haravasto.lisaa_piirrettava_ruutu("1", x * 40, y * 40)
   elif kentta[y][x] == "2":
    haravasto.lisaa_piirrettava_ruutu("2", x * 40, y * 40)
   elif kentta[y][x] == "3":
    haravasto.lisaa_piirrettava_ruutu("3", x * 40, y * 40)
   elif kentta[y][x] == "4":
    haravasto.lisaa_piirrettava_ruutu("4", x * 40, y * 40)
   elif kentta[y][x] == "5":
    haravasto.lisaa_piirrettava_ruutu("5", x * 40, y * 40)
   elif kentta[y][x] == "6":
    haravasto.lisaa_piirrettava_ruutu("6", x * 40, y * 40)
   elif kentta[y][x] == "7":
    haravasto.lisaa_piirrettava_ruutu("7", x * 40, y * 40)
   elif kentta[y][x] == "8":
    haravasto.lisaa_piirrettava_ruutu("8", x * 40, y * 40)
   elif kentta[y][x] == "f":
    haravasto.lisaa_piirrettava_ruutu("f", x * 40, y * 40)
   else:
    haravasto.lisaa_piirrettava_ruutu(" ", x * 40, y * 40)
 haravasto.piirra_ruudut ()
 
 
def kasittele_hiiri(x, y, painike, m):
 kentta2 = tila2["kentta2"]
 global vuoro
 x = int(x / 40)
 y = int(y / 40)
 if haravasto.HIIRI_OIKEA == painike:
  vuoro += 1
  if kentta2[y][x] == "f":
   kentta2[y][x] = " "
  else:
   kentta2[y][x] = "f"
 else:
  if kentta2[y][x] == "f":
   kentta2[y][x] = "f"
  else:
   vuoro += 1
   avaa_ruutuja(x, y)
   

def miinoita(kentta, kentta2, vapaat, lkm):
 while lkm > 0:
  x = random.randint(0, len(kentta)-1)
  y = random.randint(0, len(kentta[0])-1)
  if (x, y) in vapaat:
   vapaat.remove((x, y))
   kentta[x][y] = "x"
   kentta2[x][y] = "x"
   lkm = lkm - 1
   
def menu():
 print("Tervetuloa pelaamaan miinaharavaa! Valitse toiminto")
 print("1 - aloita uusi peli")
 print("2 - tilastot")
 print("3 - lopeta")
 while True:
  valinta = input("Valitse toiminto (1-3): ")
  if valinta == "1":
   return True
  elif valinta == "2":
   lue_tilastot("tilastot.txt")
  elif valinta == "3":
   return False
  else:
   print("Valintaa ei ole olemassa")
   
   
def kirjoita_tilastoon(tiedosto, lista):
 try:
  with open(tiedosto, "a") as kohde:
    kohde.write("Kentan koko {}x{}  Miinojen maara: {}\n".format(str(lista[0]), str(lista[1]), str(lista[2])))
 except IOError:
  print("Ei voitu avata tiedostoa")
  
  
def lue_tilastot(tiedosto):
 with open(tiedosto) as lahde:
  for rivi in lahde.readlines():
   print(rivi)
   
def main():
 global alku
 valinta = menu()
 if valinta == False:
  sys.exit()
 else:
  kentta = []
  kentta2 = []
  l, p = kysy_kentankoko() 
  for rivi in range(l):
   kentta.append([])
   for sarake in range(p):
    kentta[-1].append(" ")
   
  for rivi in range(l):
   kentta2.append([])
   for sarake in range(p):
    kentta2[-1].append(" ")
  
  tila["kentta"] = kentta
  tila2["kentta2"] = kentta2
 
  jaljella = []
  for x in range(l):
   for y in range(p):
    jaljella.append((x, y))
	
  miinat = kysy_miinat(l, p)
  miinoita(kentta, kentta2, jaljella, miinat)
  lista = [l, p, miinat]
  tallenna = kirjoita_tilastoon("tilastot.txt", lista)
	
  haravasto.lataa_kuvat("C:\Projektit\puthon T\spritet")
  haravasto.luo_ikkuna(len(kentta[0] * 40), len(kentta * 40))
  haravasto.aseta_piirto_kasittelija(piirra_kentta)
  haravasto.aseta_hiiri_kasittelija(kasittele_hiiri)
  alku = time.time()
  haravasto.aloita()
 
  
 
 
if __name__ == "__main__":
  main()