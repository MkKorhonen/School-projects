def nayta_tulokset(tiedosto):
 with open(tiedosto) as lahde:
  for rivi in lahde.readlines():
   rivi = rivi.strip()
   koti, vieras, pisteet, pisteetv = rivi.split(",")
   print("{} {} - {} {}".format(koti, pisteet, pisteetv, vieras))
 return tiedosto
 
 


 
 

