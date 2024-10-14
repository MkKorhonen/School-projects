PI = 3.1416

def laske_sektorin_ala(r, a):
 return a / 360 * PI * r ** 2
 
p = 68 / 360 * PI * 13.742 ** 2
print(round(p, 4))