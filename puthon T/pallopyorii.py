PI = 3.1416

def laske_ala(sade):
    return 4 * PI * sade ** 2
    
def laske_tilavuus(sade):
    return 4 / 3 * PI * sade ** 3

def laske_sade(piiri):
    return piiri / (PI * 2)

def laske_pallon_ominaisuudet(piiri):
    sade = laske_sade(piiri)
    ala = laske_ala(sade)
    tilavuus = laske_tilavuus(sade)
    return ala, tilavuus
    
print("Tämä ohjelma laskee pallon tilavuuden ja pinta-alan, kun tiedetään pallon ympärysmitta")
try:
    piiri = float(input("Anna pallon ympärysmitta: "))
except ValueError:
    print("Syötteessä tulee olla pelkästään numeroarvo.")
else:
    ala, tilavuus = laske_pallon_ominaisuudet(piiri)
    print("Tilavuus: {:.4f}".format(round(tilavuus, 4)))
    print("Pinta-ala: {:.4f}".format(round(ala, 4)))
