# 🐍  Python: Conjuntos (sets, estructuras no ordenadas y sin duplicados)

Un **conjunto** (`set`) es una estructura de datos que permite **almacenar elementos únicos** y **no ordenados**. Es ideal cuando necesitas eliminar duplicados o realizar operaciones de conjuntos como uniones, intersecciones, diferencias, etc.

📌 **Sintaxis básica:**
```python
mi_conjunto = set()
mi_conjunto = {1, 2, 3, "hola"}
```

> ⚠️ Para crear un conjunto vacío, **se usa `set()`**, ya que `{}` crea un **diccionario**.

---

## 🔹 Características de los sets:

- 🚫 No permiten elementos duplicados
- 🔀 No están ordenados (no se garantiza el orden de los elementos)
- ⚡️ Permiten operaciones matemáticas de conjuntos
- 🧹 Muy útiles para limpiar datos repetidos

---

## 🔹 Métodos comunes de los conjuntos:

| Método                  | Descripción breve                                          | Ejemplo                            |
|-------------------------|-------------------------------------------------------------|-------------------------------------|
| `add(x)`                | Agrega un elemento                                         | `mi_conjunto.add(5)`                |
| `update(iterable)`      | Agrega múltiples elementos de otro iterable                | `mi_conjunto.update([6, 7])`        |
| `remove(x)`             | Elimina `x`, lanza error si no existe                      | `mi_conjunto.remove(3)`             |
| `discard(x)`            | Elimina `x` si existe, sin error si no está                | `mi_conjunto.discard(3)`            |
| `pop()`                 | Elimina y retorna un elemento aleatorio                    | `mi_conjunto.pop()`                 |
| `clear()`               | Elimina todos los elementos del conjunto                   | `mi_conjunto.clear()`               |
| `copy()`                | Crea una copia superficial                                 | `nuevo = mi_conjunto.copy()`        |

---

## 🔹 Operaciones de conjuntos:

| Operación                     | Símbolo / Método               | Ejemplo                                 |
|-------------------------------|-------------------------------|------------------------------------------|
| Unión                         | `\|`, `union()`                | `a \| b` ó `a.union(b)`                   |
| Intersección                  | `&`, `intersection()`         | `a & b` ó `a.intersection(b)`            |
| Diferencia                    | `-`, `difference()`           | `a - b` ó `a.difference(b)`              |
| Diferencia simétrica          | `^`, `symmetric_difference()` | `a ^ b` ó `a.symmetric_difference(b)`    |
| Subconjunto                   | `<=`, `issubset()`            | `a <= b` ó `a.issubset(b)`               |
| Superconjunto                 | `>=`, `issuperset()`          | `a >= b` ó `a.issuperset(b)`             |
| ¿Son disjuntos?               | `isdisjoint()`                | `a.isdisjoint(b)`                        |

---

## 🔹 Funciones útiles aplicables a conjuntos:

| Función             | Descripción breve                                         | Ejemplo                              |
|---------------------|------------------------------------------------------------|---------------------------------------|
| `len(set)`          | Devuelve el número de elementos                          | `len(mi_conjunto)`                    |
| `set(iterable)`     | Convierte un iterable a conjunto (elimina duplicados)     | `set([1, 2, 2, 3])`                   |
| `sorted(set)`       | Devuelve una lista ordenada con los elementos             | `sorted(mi_conjunto)`                |
| `enumerate(set)`    | Itera con índices (orden no garantizado)                  | `for i, val in enumerate(mi_conjunto)`|

---

## Ejemplo rápido:
```python
a = {1, 2, 3, 4}
b = {3, 4, 5, 6}

print(a | b)   # Unión: {1, 2, 3, 4, 5, 6}
print(a & b)   # Intersección: {3, 4}
print(a - b)   # Diferencia: {1, 2}
print(a ^ b)   # Diferencia simétrica: {1, 2, 5, 6}

a.add(10)
a.remove(2)
print(a)
```

---