import aasimaaritelmat
import aasilogiikka

def nayta_tila(sanakirja):
 print("Aasi on {} vuotta vanha ja rahaa on {} mk".format(sanakirja['IKÄ'], sanakirja['RAHA']))
 print("kylläisyys: ", sanakirja['KYLLÄISYYS'])
 print("Onnellisuus: ", sanakirja['ONNELLISUUS'])
 print("kylläisyys: ", sanakirja['JAKSAMINEN'])
 if sanakirja["ELÄKE"] == True:
  print("Aasi on jäänyt eläkkeelle")
  

def pyyda_syote(sanak):
  if sanak["ELÄKE"] == False:
   print("Valinnat: {}, {}, {}, {}".format(aasimaaritelmat.VALINNAT[0], aasimaaritelmat.VALINNAT[1], aasimaaritelmat.VALINNAT[2], aasimaaritelmat.VALINNAT[3])) 
   while True:
    valinta = input("Anna seuraava valinta: ")
    if valinta == 'q':
     return valinta
    elif valinta == 'r':
     return valinta
    elif valinta == 'k':
     return valinta
    elif valinta == 't':
     return valinta
    else:
     print("Virheellinen syöte")
  elif sanak["ELÄKE"] == True:
   print("Valinnat: {}, {}".format(aasimaaritelmat.ELAKEVALINNAT[0], aasimaaritelmat.ELAKEVALINNAT[1]))
   while True:
    valinta2 = input("Anna seuraava valinta: ")
    if valinta2 == 'q':
     return valinta2
    elif valinta2 == 'a':
     return valinta2
    else:
     print("Virheellinen syöte")