import haravasto
import random 

tila = {
    "kentta": None
}

def miinoita(kentta, vapaat, lkm):
 while lkm > 0:
  x = random.randint(0, len(kentta)-1)
  y = random.randint(0, len(kentta[0])-1)
  if (x, y) in vapaat:
   vapaat.remove((x, y))
   kentta[x][y] = "x"
   lkm = lkm - 1
  

def piirra_kentta():
 kentta = tila['kentta']
 haravasto.tyhjaa_ikkuna ()
 haravasto.piirra_tausta ()
 haravasto.aloita_ruutujen_piirto ()
 for x in range(len(kentta[0])):
  for y in range(len(kentta)):
   if kentta[y][x] == "x":
    haravasto.lisaa_piirrettava_ruutu("x", x * 40, y * 40)
   else:
    haravasto.lisaa_piirrettava_ruutu(" ", x * 40, y * 40)
 haravasto.piirra_ruudut ()


def main():
 haravasto.lataa_kuvat("C:\Projektit\puthon T\spritet")
 haravasto.luo_ikkuna(400, 400)
 haravasto.aseta_piirto_kasittelija(piirra_kentta)
 haravasto.aloita()
 
if __name__ == "__main__":
 kentta = []
 for rivi in range(10):
  kentta.append([])
  for sarake in range(10):
    kentta[-1].append(" ")

 tila["kentta"] = kentta

 jaljella = []
 for x in range(10):
  for y in range(10):
   jaljella.append((x, y))
 miinoita(kentta, jaljella, 25)
 main()
 
