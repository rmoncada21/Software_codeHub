def main():
    # Tupla de notas de los estudiantes (inmutable)
    notas = (7.5, 8.0, 6.2, 9.1, 5.8)
    print("Notas iniciales (tupla):", notas)

    # Para modificar, debemos crear una nueva tupla (a partir de una lista temporal)
    notas_lista = list(notas)
    notas_lista.append(7.0)
    notas = tuple(notas_lista)
    print("Se agregó 7.0 (conversión a lista + append):", notas)

    # Insertar un valor en una posición específica
    notas_lista = list(notas)
    notas_lista.insert(2, 6.8)
    notas = tuple(notas_lista)
    print("Se insertó 6.8 en la posición 2:", notas)

    # Eliminar un valor
    notas_lista = list(notas)
    notas_lista.remove(5.8)
    notas = tuple(notas_lista)
    print("Se eliminó el valor 5.8:", notas)

    # pop() – eliminar el último elemento
    notas_lista = list(notas)
    nota_eliminada = notas_lista.pop()
    notas = tuple(notas_lista)
    print("Se eliminó la última nota con pop():", nota_eliminada)
    print("Tupla luego del pop():", notas)

    # Copia de la tupla
    notas_copy = tuple(notas)
    print("Copia de la tupla:", notas_copy)

    # Ordenar e invertir – usando sorted() y reversed()
    notas_ordenadas = tuple(sorted(notas))
    print("Tupla ordenada:", notas_ordenadas)

    notas_invertidas = tuple(reversed(notas))
    print("Tupla invertida:", notas_invertidas)

    # FUNCIONES CON TUPLAS
    promedio = sum(notas) / len(notas)
    nota_max = max(notas)
    nota_min = min(notas)

    print("Promedio de notas:", round(promedio, 2))
    print("Nota más alta:", nota_max)
    print("Nota más baja:", nota_min)

    print("\nListado final de notas:")
    for i, nota in enumerate(notas):
        print(f"{i + 1}. Nota: {nota}")

    # Filtrar notas aprobadas (>= 7.0)
    notas_aprobadas = tuple(filter(lambda x: x >= 7.0, notas))
    print("Notas aprobadas (mayores o iguales a 7.0):", notas_aprobadas)

    # Convertir a texto
    notas_texto = tuple(map(str, notas))
    print("Notas convertidas a texto:", notas_texto)

# Punto de entrada del programa
if __name__ == "__main__":
    main()
