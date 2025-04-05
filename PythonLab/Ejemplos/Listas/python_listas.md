# Python: Listas

Una **lista** es una estructura de datos que permite **almacenar una colección ordenada y modificable** de elementos. Los elementos pueden ser de **cualquier tipo** (números, cadenas, otras listas, etc.).

📌 **Sintaxis básica:**
```python
mi_lista = [1, "hola", 3.14, True]
```

---

## 🔹 Métodos comunes de las listas:

| Método              | Descripción breve                                          | Ejemplo                            |
|---------------------|-------------------------------------------------------------|-------------------------------------|
| `append(x)`         | Agrega un elemento al final                                | `mi_lista.append(5)`                |
| `insert(i, x)`      | Inserta un elemento en la posición `i`                     | `mi_lista.insert(1, "nuevo")`       |
| `extend(iterable)`  | Agrega todos los elementos de otra lista o iterable        | `mi_lista.extend([6, 7])`           |
| `remove(x)`         | Elimina la primera aparición del valor `x`                 | `mi_lista.remove("hola")`           |
| `pop(i=-1)`         | Elimina y retorna el elemento en la posición `i`           | `mi_lista.pop()`                    |
| `clear()`           | Elimina todos los elementos de la lista                    | `mi_lista.clear()`                  |
| `index(x)`          | Retorna el índice de la primera aparición de `x`           | `mi_lista.index(3.14)`              |
| `count(x)`          | Cuenta cuántas veces aparece el valor `x`                  | `mi_lista.count(1)`                 |
| `sort()`            | Ordena los elementos (solo si son del mismo tipo)          | `mi_lista.sort()`                   |
| `reverse()`         | Invierte el orden de la lista                              | `mi_lista.reverse()`                |
| `copy()`            | Crea una copia superficial de la lista                     | `nueva_lista = mi_lista.copy()`     |

---

## 🔹 Funciones útiles aplicables a listas:

| Función             | Descripción breve                                         | Ejemplo                             |
|---------------------|------------------------------------------------------------|--------------------------------------|
| `len(lista)`        | Devuelve el número de elementos                          | `len(mi_lista)`                      |
| `sum(lista)`        | Suma todos los elementos numéricos                       | `sum([1, 2, 3])`                     |
| `min(lista)`        | Devuelve el valor mínimo                                 | `min([5, 3, 8])`                     |
| `max(lista)`        | Devuelve el valor máximo                                 | `max([5, 3, 8])`                     |
| `sorted(lista)`     | Retorna una nueva lista ordenada                         | `sorted(mi_lista)`                  |
| `enumerate(lista)`  | Devuelve índices y elementos al iterar                   | `for i, x in enumerate(mi_lista)`   |
| `zip(l1, l2)`       | Une elementos por posición de varias listas              | `list(zip(l1, l2))`                 |
| `list(iterable)`    | Convierte un iterable (como una tupla) en lista          | `list((1, 2, 3))`                   |
| `map(func, lista)`  | Aplica una función a cada elemento                       | `list(map(str.upper, nombres))`     |
| `filter(func, lista)`| Filtra elementos que cumplen una condición              | `list(filter(lambda x: x>0, nums))` |

---

## Ejemplo rápido:
```python
numeros = [4, 2, 7, 1]
numeros.append(10)       # [4, 2, 7, 1, 10]
numeros.sort()           # [1, 2, 4, 7, 10]
numeros.remove(4)        # [1, 2, 7, 10]
print(numeros[2])        # 7
```

---
