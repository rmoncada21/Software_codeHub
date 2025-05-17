# DIferencia entre usar creación de objetos directa y con new()

La diferencia entre los dos fragmentos de código que has mostrado está en cómo se **crea** el objeto de la clase `Persona` y cómo se maneja la **memoria** para ese objeto. Aquí te explico las diferencias en detalle:

### **Primer Fragmento de Código:**

```cpp
int main() {
    Persona p1 = {"Juan", 25};  // Objeto normal
    Persona* ptr = &p1;         // Puntero a Persona

    // Accediendo a los miembros usando el puntero
    std::cout << ptr->nombre << std::endl; // Equivalente a (*ptr).nombre
    ptr->mostrar();  // Equivalente a (*ptr).mostrar()

    return 0;
}
```

#### **Características:**
1. **Creación del objeto:**
   - Aquí **`p1`** es un **objeto local** de tipo `Persona`, creado en el **stack**.
   - La inicialización de `p1` se realiza usando una lista de inicialización: `{"Juan", 25}`.

2. **Puntero a objeto:**
   - Se declara un puntero `ptr` que apunta al objeto `p1` utilizando `&p1`.
   - El puntero `ptr` se usa para acceder a los miembros del objeto `p1` a través del operador `->`.

3. **Acceso y uso de miembros:**
   - Se usa `ptr->nombre` para acceder al miembro `nombre` del objeto `p1` al que apunta el puntero `ptr`.
   - Se llama a `ptr->mostrar()` para ejecutar la función miembro `mostrar()` del objeto apuntado por `ptr`.

4. **Memoria:**
   - **No se requiere liberar memoria explícitamente** porque el objeto `p1` está en el **stack** y se destruye automáticamente al salir del ámbito de la función `main`.

---

### **Segundo Fragmento de Código:**

```cpp
int main() {
    Persona* p = new Persona("Ana", 30); // Creación dinámica

    p->mostrar(); // Acceso con flecha (->)

    delete p; // Liberar memoria
    return 0;
}
```

#### **Características:**
1. **Creación del objeto (dinámica):**
   - En este caso, el objeto `Persona` se **crea dinámicamente** en el **heap** usando `new`.
   - El constructor `Persona("Ana", 30)` se llama para crear el objeto, y el puntero `p` almacena la dirección de memoria de este objeto en el heap.

2. **Acceso a miembros:**
   - Se utiliza el operador `->` para acceder al miembro `mostrar()` del objeto creado dinámicamente, al igual que en el primer fragmento.

3. **Memoria:**
   - **El objeto está en el heap** y **debe liberarse explícitamente** utilizando `delete p;` para evitar una fuga de memoria (memory leak).
   - Si no se hace esto, la memoria reservada por `new` no se liberaría, lo que podría causar problemas en programas más grandes o con una ejecución prolongada.

---

### **Diferencias Clave:**

| **Característica**                | **Primer Fragmento (Objeto en Stack)**                 | **Segundo Fragmento (Objeto en Heap)**            |
|-----------------------------------|---------------------------------------------------------|---------------------------------------------------|
| **Creación del objeto**           | `Persona p1 = {"Juan", 25};` (en el stack)              | `Persona* p = new Persona("Ana", 30);` (en el heap) |
| **Ubicación en memoria**          | El objeto está en la **memoria stack**.                  | El objeto está en la **memoria heap**.             |
| **Acceso a los miembros**         | Acceso normal a través de `p1.nombre` o `ptr->nombre`.  | Acceso a través de `p->nombre` usando `->`.         |
| **Liberación de memoria**         | No se necesita liberar memoria, ya que es un objeto en el stack. | Se necesita liberar memoria con `delete` para evitar **fugas de memoria**. |
| **Tiempo de vida del objeto**     | El objeto `p1` es destruido automáticamente al final de la función `main`. | El objeto creado con `new` persiste hasta que se llame a `delete`. |
| **Seguridad de memoria**          | No hay necesidad de preocuparse por la memoria, ya que es administrada automáticamente. | Debes gestionar la memoria manualmente con `new` y `delete`. |

### **Resumen:**

- En el **primer fragmento**, el objeto `p1` se crea en el **stack**, lo que significa que se maneja automáticamente: cuando la función termina, se destruye sin necesidad de intervención explícita. El puntero `ptr` simplemente apunta al objeto en memoria.
  
- En el **segundo fragmento**, el objeto `Persona` se crea **dinámicamente en el heap** con `new`, y necesitas liberar la memoria con `delete` para evitar fugas de memoria. Esto te da más flexibilidad, pero también implica una mayor responsabilidad en cuanto a la gestión de la memoria.

---