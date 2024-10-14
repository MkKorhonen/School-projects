import haravasto

def kasittele_hiiri(x, y, painike, m):
 if haravasto.HIIRI_VASEN == painike:
  painike = "vasen"
 elif haravasto.HIIRI_KESKI == painike:
  painike = 'keski'
 else:
  painike = 'oikea'
 print("Hiiren nappia {} painettiin kohdassa {}, {}".format(painike, x, y))

def main():
 haravasto.luo_ikkuna()
 haravasto.aseta_hiiri_kasittelija(kasittele_hiiri)
 haravasto.aloita()

if __name__ == "__main__":
 main()