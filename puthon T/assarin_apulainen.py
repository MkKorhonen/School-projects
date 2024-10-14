import sys

def kysele_arvosanat():
 monikko = []
 while True:
  syote = input("Anna opiskelijan nimi tai lopeta antamalla q: ")
  if syote == "q":
   return monikko
  else:
   syote2 = input("Anna arvosana: ")
   try:
    arvosana = int(syote2)
   except ValueError:
    print("Anna arvosana kokonaislukuina")
   else:
    monikko.append(((syote, arvosana)))

def kirjoita_tiedostoon(tiedosto, arvosanat):
 try:
  with open(tiedosto, "w") as kohde:
   for arvosana in arvosanat:
    kohde.write("{}\n".format(": ".join((arvosana[0], str(arvosana[1])))))
   print("Kirjoitettiin arvosanat tiedostoon {}".format(tiedosto))
 except IOError:
  print("Ei voitu avata tiedostoa")

if __name__ == "__main__":
 try:
  nimi = sys.argv[1]
 except IndexError:
  print("Virhe: kohdetiedoston nimi on annettava komentoriviargumenttina!")
 else:
  kysely = kysele_arvosanat()
  tallenna = kirjoita_tiedostoon(nimi, kysely)