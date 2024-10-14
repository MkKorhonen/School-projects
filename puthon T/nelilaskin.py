operaatio = input("Valitse operaatio (+, -, *, /): ")
if operaatio != "+" and operaatio != "-" and operaatio != "*" and operaatio != "/":
  print("Operaatiota ei ole olemassa")
else:
 try: 
  luku_1 = float(input("Anna luku 1: "))
 except ValueError:
  print("Ei tämä ole mikään luku")
 else:
  try: 
   luku_2 = int(input("Anna luku 2 "))
  except ValueError:
    print("Ei tämä ole mikään luku")
  else:
   if operaatio == "+":
    tulos = luku_1 + luku_2
    print("tulos: {}".format(tulos))
   elif operaatio == "-":
    tulos = luku_1 - luku_2
    print("tulos: {}".format(tulos))
   elif operaatio == "*":
    tulos = luku_1 * luku_2
    print("tulos: {}".format(tulos))
   elif operaatio == "/":
    try: tulos = luku_1 / luku_2
    except ZeroDivisionError: print("Tällä ohjelmalla ei pääse äärettömyyteen")
    else:
     print("tulos: {}".format(tulos))