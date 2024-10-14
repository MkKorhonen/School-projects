import sys
import time

def kysy_pelaajat():
    pelaajat = []
    
    while True:
        try:
            pelaajia = int(input("Montako pelaajaa? "))
            break
        except ValueError:
            print("Pelaajien lukumäärän pitää olla kokonaisluku")
    
    for i in range(pelaajia):
        nimi = input("Anna pelaajan %s nimi: " % (i + 1))
        pelaajat.append(nimi)
        
    return pelaajat

def pelaa_vuoro(kohdeaika):    
    input("Paina enter aloittaaksesi!")
    alku = time.time()
    input("Paina enter kun on kulunut %s sekuntia" % (kohdeaika))
    loppu = time.time()
    kulunut = loppu - alku
    erotus = abs(kulunut - kohdeaika)
    print("Painallusten välillä kului {:.3f} sekuntia".format(kulunut))
    print("Arvauksesi eroaa kohdeajasta {:.3f} sekuntia".format(erotus))
    return erotus

def nayta_tulokset(nimet, tulokset):
    levein_nimi = len(sorted(nimet, key=len)[-1])
    tulokset.sort()
        
    print("Pelin tulokset:")
    for tulos, pelaaja in tulokset:
        print("{}  {:.3f}".format(pelaaja.ljust(levein_nimi), tulos))

def pelaa_peli(pelaajat, kohdeaika):
    tulokset = []
    
    for pelaaja in pelaajat:
        print()
        print("On pelaajan {} vuoro".format(pelaaja))
        tulos = pelaa_vuoro(kohdeaika)
        tulokset.append((tulos, pelaaja))
    
    print()
    nayta_tulokset(pelaajat, tulokset)

if __name__ == "__main__":
    try:
        kohdeaika = int(sys.argv[1])
    except IndexError:
        print("Kohdeaikaa ei annettu komentoriviargumenttina")
    except ValueError:
        print("Kohdeajan pitää olla kokonaisluku")
    else:    
        pelaajat = kysy_pelaajat()
        pelaa_peli(pelaajat, kohdeaika)    
