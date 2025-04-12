def main():
    # Diccionario con datos de un estudiante
    
    # estudiante = { "nombre": "Ana", "edad": 22, "carrera": "Ingeniería", "promedio": 8.6}
    estudiante = {
        "nombre": "Ana",
        "edad": 22,
        "carrera": "Ingeniería",
        "promedio": 8.6
    }

    print("Diccionario inicial:", estudiante)

    # MÉTODOS DE DICCIONARIO
    estudiante["universidad"] = "UNAM"
    print("Se agregó una nueva clave 'universidad':", estudiante)

    estudiante["edad"] = 23
    print("Se actualizó la edad:", estudiante)
    
    universidad = estudiante.get("universidad")
    print("Valor de la clave 'universidad' usando get():", universidad)

    estudiante.pop("carrera")
    print("Se eliminó la clave 'carrera' con pop():", estudiante)

    clave, valor = estudiante.popitem()
    print(f"Se eliminó el último par agregado con popitem(): {clave} => {valor}")
    print("Diccionario luego de popitem():", estudiante)

    copia_estudiante = estudiante.copy()
    print("Se creó una copia del diccionario con copy():", copia_estudiante)

    claves = list(estudiante.keys())
    print("Claves del diccionario con keys():", claves)

    valores = list(estudiante.values())
    print("Valores del diccionario con values():", valores)

    elementos = list(estudiante.items())
    print("Elementos (clave, valor) con items():", elementos)

    estudiante.setdefault("promedio", 9.0)
    print("Se estableció valor por defecto con setdefault():", estudiante)

    # FUNCIONES CON DICCIONARIOS
    print("\nIterando clave y valor:")
    for clave, valor in estudiante.items():
        print(f"{clave}: {valor}")

    # DICCIONARIO DE ESTUDIANTES
    estudiantes = {
        "Ana": 8.5,
        "Luis": 6.9,
        "Pedro": 9.2,
        "Carla": 7.3,
        "Marta": 5.8
    }

    print("\nDiccionario de estudiantes:", estudiantes)

    # Filtrar estudiantes aprobados (nota >= 7.0)
    aprobados = dict(filter(lambda item: item[1] >= 7.0, estudiantes.items()))
    print("Estudiantes aprobados (nota >= 7.0):", aprobados)

    # Convertir los promedios a texto
    promedios_texto = dict(map(lambda item: (item[0], str(item[1])), estudiantes.items()))
    print("Promedios convertidos a texto:", promedios_texto)


# Punto de entrada del programa
if __name__ == "__main__":
    main()
