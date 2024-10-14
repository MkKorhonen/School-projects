"""Tarkistaa ovatko annetut x, y -koordinaatit annettujen rajojen sisällä. Palauttaa True, jos koordinaatit ovat rajojen sisällä; muuten palautetaan False."""
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


 """Pyytää käyttäjältä koordinaatteja kunnes käyttäjä antaa kaksi kokonaislukua, joista molemmat ovat annetun kentän rajojen sisäpuolella, tai tyhjän syötteen. Palauttaa saadut koordinaatit. Jos käyttäjä antaa tyhjän syötteen, palautetaan kaksi None-arvoa."""
def kysy_koordinaatit(kleveys, kkorkeus):
 while True:
  syote = input("Anna koordinaatit tai lopeta tyhjällä: ")
  if not syote:
   return None, None
  syote = syote.split(" ")
  if len(syote) != 2:
    print("Anna kaksi koordinaattia välilyönnillä erotettuna")
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


 """Avaa pelikentällä olevia ruutuja merkitsemällä ne x:llä. Avattavia ruutuja kysytään käyttäjältä kunnes tämä haluaa lopettaa antamalla tyhjän syötteen. Kentän tila tulostetaan jokaisen avauksen jälkeen."""
def avaa_ruutuja(kentta):
 kleveys = kentta[0].count('o')
 kkorkeus = sum(1 for x in kentta if isinstance(x, list))
 print(kleveys)
 print(kkorkeus)
 while True:
  x, y = kysy_koordinaatit(kleveys, kkorkeus)
  if x == None or y == None:
   break
  else:
   kentta[y][x] = 'x'
   print(kentta)
 return kentta


testi = avaa_ruutuja([['o', 'o', 'o', 'o', 'o', 'o'], ['o', 'o', 'o', 'o', 'o', 'o'], ['o', 'o', 'o', 'o', 'o', 'o'], ['o', 'o', 'o', 'o', 'o', 'o']])
