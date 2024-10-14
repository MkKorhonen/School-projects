def avaa_ruutuja(kentta):
 kleveys = kentta[0].count(' ') + kentta[0].count('N')
 kkorkeus = sum(1 for x in kentta if isinstance(x, list))
 print(kleveys)
 print(kkorkeus)
 while True:
  x, y = kysy_koordinaatit(kleveys, kkorkeus)
  if x == None or y == None:
   break
  else:
   ninjat = laske_ninjat(x, y, kentta)
   print("Koordinaateissa {},{} seisovaa taistelijaa ympäröi {} ninjaa!".format(x, y, ninjat))
 return kentta
 
 
def kysy_koordinaatit(kleveys, kkorkeus):
 while True:
  syote = input("Anna koordinaatit tai lopeta tyhjällä: ")
  if not syote:
   return None, None
  syote = syote.split(",")
  if len(syote) != 2:
    print("Anna koordinaatit muodossa x,y: ")
  else:   
    try:
     x, y = int(syote[0]), int(syote[1])
    except ValueError:
     print("Anna koordinaatit kokonaislukuina")
    else:
     tarkistus = tarkista_koordinaatit(x, y, kleveys, kkorkeus)
     if tarkistus == False: print("Koordinaatit ovat ruudukon ulkopuolella")
     else:
      return x, y
	  
def tarkista_koordinaatit(x, y, leveys, korkeus):
 if leveys <= 0 or korkeus <= 0:
  return False
 else:
  if 0 < leveys - x <= 1 and 0 < korkeus - y <= 1 or x == 0 and y == 0:
   return True
  elif x >= leveys or x < 0 or y >= korkeus or y < 0:
   return False
  elif leveys - x <= 1 or korkeus - y <=1 or x == 0 or y == 0:
   return True
  elif x >= 2 and y >= 2:
   return True
   
   
def laske_ninjat(x, y, huone):

 minX = x - 1
 if (minX < 0):
  minX = 0
  
 maxX = x + 1
 if (maxX >= len(huone[0])):
   maxX = len(huone[0]) - 1
   
 minY = y - 1
 if (minY < 0):
  minY = 0
  
 maxY = y + 1
 if (maxY >= len(huone)):
  maxY = len(huone) - 1

 ninja = 0
 for j in range(minY, maxY + 1):
  for i in range(minX, maxX + 1):
   if (i == x and j == y):
    continue
   
   if (huone[j][i] == 'N'):
    ninja += 1
 return ninja   
   
huone = avaa_ruutuja([['N', ' ', ' ', ' ', ' '],
                      ['N', 'N', 'N', 'N', ' '],
                      ['N', ' ', 'N', ' ', ' '],
                      ['N', 'N', 'N', ' ', ' '],
                      [' ', ' ', ' ', ' ', ' '],
                      [' ', ' ', ' ', ' ', ' ']]) 
			
			  