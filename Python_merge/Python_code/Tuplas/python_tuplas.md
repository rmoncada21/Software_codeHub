# 🐍  Python: Tuplas (estructuras inmutables)

Una **tupla** es una estructura de datos que permite **almacenar una colección ordenada pero inmutable** de elementos. Al igual que las listas, pueden contener **elementos de cualquier tipo**, pero **no se pueden modificar** después de su creación (no se pueden agregar, eliminar ni cambiar elementos).

📌 **Sintaxis básica:**
```python
mi_tupla = tuple()
mi_tupla = ()
mi_tupla = (1, "hola", 3.14, True)
mi_tupla = 1, 2, 3  # también válido (sin paréntesis)
```

> ⚠️ Si se quiere crear una tupla de un solo elemento, **se necesita una coma al final**:
```python
tupla_uno = (5,)  # Correcto
no_tupla = (5)    # Esto es solo un entero
```

---

## 🔹 Características de las tuplas:

- 📦 Ordenadas (acceso por índice)
- 🚫 Inmutables (no se pueden modificar después de ser creadas)
- ✅ Pueden contener elementos duplicados
- ⚡️ Más rápidas y ligeras que las listas
- 🛡️ Útiles para datos constantes o como claves en diccionarios

---

## 🔹 Métodos disponibles para tuplas:

| Método         | Descripción breve                                     | Ejemplo                     |
|----------------|--------------------------------------------------------|------------------------------|
| `count(x)`     | Cuenta cuántas veces aparece el valor `x`             | `mi_tupla.count(1)`          |
| `index(x)`     | Retorna el índice de la primera aparición de `x`      | `mi_tupla.index("hola")`     |

> ✅ Como las tuplas son **inmutables**, no tienen métodos como `append`, `remove` o `sort`.

---

## 🔹 Funciones útiles aplicables a tuplas:

| Función              | Descripción breve                                         | Ejemplo                             |
|----------------------|------------------------------------------------------------|--------------------------------------|
| `len(tupla)`         | Devuelve el número de elementos                          | `len(mi_tupla)`                      |
| `sum(tupla)`         | Suma los elementos numéricos                             | `sum((1, 2, 3))`                     |
| `min(tupla)`         | Devuelve el valor mínimo                                 | `min((5, 3, 8))`                     |
| `max(tupla)`         | Devuelve el valor máximo                                 | `max((5, 3, 8))`                     |
| `sorted(tupla)`      | Devuelve una **lista ordenada** de los elementos         | `sorted(mi_tupla)`                  |
| `enumerate(tupla)`   | Devuelve índices y elementos al iterar                   | `for i, x in enumerate(mi_tupla)`   |
| `zip(t1, t2)`        | Une elementos por posición de varias tuplas              | `list(zip(t1, t2))`                 |
| `tuple(iterable)`    | Convierte un iterable (como una lista) en tupla          | `tuple([1, 2, 3])`                  |
| `map(func, tupla)`   | Aplica una función a cada elemento                       | `tuple(map(str.upper, nombres))`    |
| `filter(func, tupla)`| Filtra elementos que cumplen una condición               | `tuple(filter(lambda x: x > 0, nums))` |

---

## Ejemplo rápido:
```python
mi_tupla = (4, 2, 7, 1)
print(mi_tupla[2])          # 7
print(len(mi_tupla))        # 4
nueva = sorted(mi_tupla)    # [1, 2, 4, 7] → es una lista, no una tupla
print(nueva)
print(mi_tupla.count(2))    # 1
```

---