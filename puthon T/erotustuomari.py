"""Pyytää käyttäjältä ottelun lopputuloksen ja palauttaa syötetyn tuloksen kokonaislukuina."""
def pyyda_maalit():
 while True:
  syote = input("Anna ottelun lopputulos: ")
  syote = syote.split("-")
  if len(syote) != 2:
   print("Anna tulos muodossa <joukkueen 1 maalit>-<joukkueen 2 maalit>!")
  else:
   try:
    n, m = int(syote[0]), int(syote[1])
   except ValueError:
    print("Anna tulos muodossa <joukkueen 1 maalit>-<joukkueen 2 maalit>!")
   else:
    return n, m




x, y = pyyda_maalit()
tulos = x - y
print("joukkueiden välinen maaliero on {}".format(tulos))
