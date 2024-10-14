def kysy_salasana():
 while True:
   kysy_salasana = input("Kirjoita salasana: ")
   if len(kysy_salasana) < 8:
     print("Salasanan tulee olla vähintään 8 merkkiä pitkä")
   else:
     break
 return kysy_salasana
print(kysy_salasana())