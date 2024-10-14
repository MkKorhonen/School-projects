import csv

def tallenna_summat(lista, nimi):
 try:
  with open(nimi, "w", newline="") as kohde:
   kirjoitin = csv.writer(kohde)
   for rahet, rahet2, rahet3, rahet4 in lista:
    kirjoitin.writerow([rahet, rahet2, rahet3, rahet4])
 except IOError:
  print("Ei voitu avata tiedostoa")
  
  
summat = [
    ["$123,123,123", "$56,548", "$666,666,666,666", "$945,246,000"], 
    ["$45", "$645,231", "$765,312,765", "$12,000,000,001"]
]
tallenna_summat(summat, "rahat.csv")
