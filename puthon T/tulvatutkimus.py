import haravasto
tila = {
    "planeetta": None
}

def piirra_kentta():
 kentta = tila['planeetta']
 haravasto.piirra_tausta ()
 haravasto.aloita_ruutujen_piirto ()
 for x in range(len(kentta[0])):
  for y in range(len(kentta)):
   if kentta[y][x] == "x":
    haravasto.lisaa_piirrettava_ruutu("x", x * 40, (len(planeetta) -y) * 40 - 40)
   else:
    haravasto.lisaa_piirrettava_ruutu(" ", x * 40, (len(planeetta) -y) * 40 - 40)
 haravasto.piirra_ruudut ()
 
 
def tulvataytto(planeetta, x, y):
 taytto = [(x, y)]
 if planeetta[y][x] == "x":
  pass
 else:
  while taytto:
   x, y = taytto.pop()
   planeetta[y][x] = "0"
   minX = x - 1
   if (minX < 0):
    minX = 0
   
   maxX = x + 1
   if (maxX >= len(planeetta[0])):
    maxX = len(planeetta[0]) - 1
   
   minY = y - 1
   if (minY < 0):
    minY = 0

   maxY = y + 1
   if (maxY >= len(planeetta)):
    maxY = len(planeetta) - 1
	
   for j in range(minY, maxY + 1):
    for i in range(minX, maxX + 1):
     if (i == x and j == y):
      continue
    

     if (planeetta[j][i] == " "):
      taytto.append((i, j))
	  

def main():
 haravasto.lataa_kuvat("C:\Projektit\puthon T\spritet")
 haravasto.luo_ikkuna(len(planeetta[0] * 40), len(planeetta * 40))
 haravasto.aseta_piirto_kasittelija(piirra_kentta)
 haravasto.aloita()
 

if __name__ == "__main__":
 planeetta = [
    [" ", " ", " ", "x", " ", " ", " ", " ", " ", " ", " ", "x", " "], 
    [" ", " ", "x", "x", " ", " ", " ", "x", " ", " ", " ", "x", " "], 
    [" ", "x", "x", " ", " ", " ", " ", "x", " ", " ", "x", "x", " "], 
    ["x", "x", "x", "x", "x", " ", " ", "x", " ", "x", " ", " ", " "], 
    ["x", "x", "x", "x", " ", " ", " ", " ", "x", " ", "x", " ", " "], 
    [" ", " ", "x", " ", " ", " ", " ", " ", " ", "x", " ", " ", " "]]
 tila["planeetta"] = planeetta
 tulvataytto(planeetta, 0, 0)
 main()