print("Ingrese las monedas de oro ganadas en un año: ")
ingreso = int(input())

if ingreso < 0:
    tributo = "¿Cómo vas a ganar monedas negativas?"
elif ingreso <= 10000:
    tributo = "No tienes que pagar nada"
elif ingreso <= 50000:
    tributo = f"Tienes que pagar {(ingreso - 10000) * 0.1} monedas al tesoro real "
else:
    tributo = f"Tienes que pagar {4000 + ((ingreso - 50000) * 0.2)} al tesoro real"
    
print(tributo)