PI = 3.1416

def laske_kuvion_ala(x):
 pieni_nelio = x ** 2
 pieni_nelio_halkaisia = (x ** 2 * 2) ** 0.5
 a = pieni_nelio_halkaisia / 2
 i = pieni_nelio_halkaisia ** 2
 y = PI * pieni_nelio_halkaisia ** 2
 k = (x ** 2 / 2) ** 0.5
 kk = k ** 2 / 2
 sekstori = 45 / 360 * PI * a ** 2
 
 p = pieni_nelio + kk + sekstori + i + 0.75 * y
 
 return p
 
print(round(laske_kuvion_ala(3.467), 4)) 