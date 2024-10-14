leveys = float(input("Anna kentän leveys: "))
korkeus = float(input("Anna kentän korkeus: "))
if leveys <= 0 or korkeus <= 0:
 print("Noin pienelle kentälle ei mahdu ainuttakaan pistettä!")
else:
 x = float(input("Anna x-koordinaatti: "))
 y = float(input("Anna y-koordinaatti: "))
 if 0 < leveys - x <= 1 and 0 < korkeus - y <= 1 or x == 0 and y == 0:
  print("antamasi piste (x: {}, y: {}) on kentän nurkassa.".format(x, y))
 elif x >= leveys or x < 0 or y >= korkeus or y < 0:
  print("antamasi piste (x: {}, y: {}) on kentän rajojen ulkopuolella.".format(x, y))
 elif leveys - x <= 1 or korkeus - y <=1 or x == 0 or y == 0:
  print("antamasi piste (x: {}, y: {}) on kentän laidalla.".format(x, y))
 elif x >= 2 and y >= 2:
  print("antamasi piste (x: {}, y: {}) on kentän keskellä.".format(x, y))