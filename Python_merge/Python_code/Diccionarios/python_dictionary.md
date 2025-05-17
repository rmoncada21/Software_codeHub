# 🐍 Python: Diccionarios (estructuras clave-valor)

Un **diccionario** es una estructura de datos que permite **almacenar pares de clave y valor**. Es **mutable** y **no ordenado hasta Python 3.7+** (donde se respeta el orden de inserción).

📌 **Sintaxis básica:**
```python
# Formas de inicializar diccionarios
mi_diccionario = dict()
mi_diccionario = {}
mi_diccionario = {"nombre": "Ana", "edad": 25, "ciudad": "Madrid"}
```

---

## 🔹 Métodos comunes de los diccionarios:

| Método               | Descripción breve                                               | Ejemplo                                   |
|----------------------|------------------------------------------------------------------|--------------------------------------------|
| `get(clave)`         | Retorna el valor asociado a la clave (o `None` si no existe)   | `mi_diccionario.get("edad")`              |
| `keys()`             | Devuelve una vista de todas las claves                         | `mi_diccionario.keys()`                   |
| `values()`           | Devuelve una vista de todos los valores                        | `mi_diccionario.values()`                 |
| `items()`            | Devuelve una vista de pares `(clave, valor)`                   | `mi_diccionario.items()`                  |
| `update(otro_dict)`  | Actualiza el diccionario con otro diccionario                  | `mi_diccionario.update({"edad": 30})`     |
| `pop(clave)`         | Elimina la clave y retorna su valor                            | `mi_diccionario.pop("ciudad")`            |
| `popitem()`          | Elimina y retorna el último par agregado (clave, valor)        | `mi_diccionario.popitem()`               |
| `clear()`            | Elimina todos los elementos del diccionario                    | `mi_diccionario.clear()`                  |
| `copy()`             | Crea una copia superficial del diccionario                     | `nuevo_dict = mi_diccionario.copy()`      |
| `setdefault(clave, valor)` | Retorna valor si existe, si no, lo agrega con ese valor   | `mi_diccionario.setdefault("pais", "ES")` |

---

## 🔹 Funciones útiles aplicables a diccionarios:

| Función               | Descripción breve                                           | Ejemplo                                       |
|------------------------|--------------------------------------------------------------|------------------------------------------------|
| `len(diccionario)`     | Devuelve el número de pares clave-valor                    | `len(mi_diccionario)`                         |
| `dict()`               | Crea un diccionario desde tuplas o pares clave-valor       | `dict([("a", 1), ("b", 2)])`                  |
| `in`                   | Verifica si una clave está en el diccionario               | `"nombre" in mi_diccionario`                 |
| `for k, v in dict.items()` | Iterar claves y valores                         | `for k, v in mi_diccionario.items():`        |
| `del diccionario[clave]` | Elimina una clave específica                         | `del mi_diccionario["edad"]`                 |

---

## Ejemplo rápido:
```python
persona = {"nombre": "Luis", "edad": 30}
persona["ciudad"] = "Barcelona"   # Agrega nueva clave
persona["edad"] = 31              # Modifica valor
print(persona.get("nombre"))      # "Luis"
persona.pop("ciudad")             # Elimina clave "ciudad"
print("edad" in persona)          # True
```

---