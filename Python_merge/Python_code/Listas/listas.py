def main():
    # Lista de notas de los estudiantes
    notas = [7.5, 8.0, 6.2, 9.1, 5.8]
    print("Notas iniciales:", notas)

    # MÉTODOS DE LISTA
    notas.append(7.0)
    print("Se agregó 7.0 con append():", notas)

    notas.insert(2, 6.8)
    print("Se insertó 6.8 en la posición 2:", notas)

    notas.remove(5.8)
    print("Se eliminó el valor 5.8 con remove():", notas)

    nota_eliminada = notas.pop()
    print("Se eliminó la última nota con pop():", nota_eliminada)
    print("Lista luego del pop():", notas)

    notas_copy = notas.copy()
    print("Se creó una copia con copy():", notas_copy)

    notas.sort()
    print("Lista ordenada con sort():", notas)

    notas.reverse()
    print("Lista invertida con reverse():", notas)

    # FUNCIONES CON LISTAS
    promedio = sum(notas) / len(notas)
    nota_max = max(notas)
    nota_min = min(notas)

    print("Promedio de notas:", round(promedio, 2))
    print("Nota más alta:", nota_max)
    print("Nota más baja:", nota_min)

    print("\nListado final de notas:")
    for i, nota in enumerate(notas):
        print(f"{i + 1}. Nota: {nota}")

    
    # filter(lambda x: x >= 7.0, notas)
    # filter(): Esta función permite filtrar elementos de una lista (o cualquier iterable) según una condición.
    # lambda x: x >= 7.0: Aquí se usa una función lambda, que es una función anónima, y está evaluando si cada elemento de la lista notas es mayor o igual a 7.0.
    # El resultado de filter() es un objeto iterable que contiene solo los elementos que cumplen con la condición (en este caso, las notas mayores o iguales a 7.0).
    notas_aprobadas = list(filter(lambda x: x >= 7.0, notas))
    print("Notas aprobadas (mayores o iguales a 7.0):", notas_aprobadas)
    
    # map(str, notas)
    # map(): Esta función aplica una función a cada elemento de un iterable (como una lista). En este caso, se aplica la función str a cada elemento de notas.
    # str: La función str convierte cada elemento de la lista notas en su representación de texto (cadena de caracteres).
    notas_texto = list(map(str, notas))
    print("Notas convertidas a texto:", notas_texto)

# Punto de entrada del programa
if __name__ == "__main__":
    main()
