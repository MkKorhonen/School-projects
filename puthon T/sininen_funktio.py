import math

def muunna_xy_koordinaateiksi(kulma, vektori):
 x = int(round(vektori * math.cos(kulma), 0))
 y = int(round(vektori * math.sin(kulma), 0))
 return x, y
 
testi = muunna_xy_koordinaateiksi(math.pi / 2, 1)