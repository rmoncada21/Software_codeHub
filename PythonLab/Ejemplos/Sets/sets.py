def main():
    # Conjunto de notas de los estudiantes
    sets_notas = {7.5, 8.0, 6.2, 9.1, 5.8}
    print("Notas iniciales (set):", sets_notas)

    # MÉTODOS DE SET
    sets_notas.add(7.0)
    print("Se agregó 7.0 con add():", sets_notas)

    sets_notas.discard(5.8)  # No lanza error si el valor no existe
    print("Se eliminó 5.8 con discard():", sets_notas)

    nota_eliminada = sets_notas.pop()  # Elimina un elemento arbitrario
    print("Se eliminó un elemento aleatorio con pop():", nota_eliminada)
    print("Set luego del pop():", sets_notas)

    sets_notas.clear()  # Borra todos los elementos
    print("Se borró todo el set con clear():", sets_notas)

    # Volver a crear un set de ejemplo
    sets_notas = {7.5, 8.0, 6.2, 9.1, 5.8, 7.5}  # 7.5 no se repite
    print("\nSet restaurado:", sets_notas)

    # FUNCIONES CON SETS
    promedio = sum(sets_notas) / len(sets_notas)
    nota_max = max(sets_notas)
    nota_min = min(sets_notas)

    print("Promedio de notas:", round(promedio, 2))
    print("Nota más alta:", nota_max)
    print("Nota más baja:", nota_min)

    print("\nListado de notas (recorriendo el set):")
    for nota in sets_notas:
        print(f"- Nota: {nota}")

    # Filtrar notas aprobadas (>= 7.0)
    sets_aprobadas = {x for x in sets_notas if x >= 7.0}
    print("Notas aprobadas (mayores o iguales a 7.0):", sets_aprobadas)

    # Convertir a texto
    sets_notas_texto = {str(x) for x in sets_notas}
    print("Notas convertidas a texto:", sets_notas_texto)

    # Otras operaciones útiles con sets
    sets_otras_notas = {6.0, 7.5, 8.5}
    sets_union = sets_notas.union(sets_otras_notas)
    sets_interseccion = sets_notas.intersection(sets_otras_notas)
    sets_diferencia = sets_notas.difference(sets_otras_notas)

    print("\nOperaciones con otros sets:")
    print("Unión:", sets_union)
    print("Intersección:", sets_interseccion)
    print("Diferencia:", sets_diferencia)

# Punto de entrada del programa
if __name__ == "__main__":
    main()
