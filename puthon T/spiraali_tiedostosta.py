from turtle import*

def piirra_spiraali(vari, lkm, sade, kasvu, paksuus):
 color(vari)
 pensize(paksuus)
 for i in range(lkm):
  circle(sade, 90)
  sade = sade + kasvu
 return piirra_spiraali
 
def piirra_tiedostosta(file):
 with open(file) as lahde:
  for rivi in lahde.readlines():
   rivi = rivi.rstrip()
   lista = rivi.split(",")
   vari = lista[0]
   lkm = int(lista[1])
   sade = int(lista[2])
   kasvu = float(lista[3])
   paksuus = int(lista[4])
   piirra = piirra_spiraali(vari, lkm, sade, kasvu, paksuus)
 return file