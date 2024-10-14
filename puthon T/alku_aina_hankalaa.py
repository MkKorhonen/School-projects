"""Kysyy käyttäjältä kokonaislukua käyttäen kysymyksenä parametrina annettua merkkijonoa. Virheellisen syötteen kohdalla käyttäjälle näytetään toisena parametrina annettu virheilmoitus. Käyttäjän antama kelvollinen syöte palautetaan kokonaislukuna."""
import math
def pyyda_syote(pyynto, virhe):
 while True:
  try: syote = int(input(pyynto))
  except ValueError:
   print(virhe)
  else:
   if syote <= 1:
    print(virhe)
   else:
    return syote
    

def tarkista_alkuluku(n):
 if n % 2 == 0 and n > 2: 
        return False
 return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))
 return t



luku = pyyda_syote("Anna kokonaisluku, joka on suurempi kuin 1: ", "Pieleen meni :'(.")
m = tarkista_alkuluku(luku)
if m == 0:
 print("kyseessä ei ole alkuluku.")
elif m == 1:
 print("Kyseessä on alkuluku.")