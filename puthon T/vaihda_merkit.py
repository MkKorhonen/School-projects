"""Vaihtaa merkkijonosta 1-merkit 2-merkeiksi ja 2-merkit 1-merkeiksi. Palauttaa muutetun merkkijonon."""

def vaihda_merkit(merkkijono):
 merkkijono = merkkijono.replace("1", "3")
 merkkijono = merkkijono.replace("2","1")
 merkkijono = merkkijono.replace("3","2")
 
 return merkkijono
 
 
 
 
merkkijono = input("Anna rivi: ")
print(vaihda_merkit(merkkijono))