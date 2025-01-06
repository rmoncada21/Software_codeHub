# Enunciados Búcles
Link: https://www.w3resource.com/c-programming-exercises/while-loop/index.php

# 1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops. 

# 2. Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

# 7. Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long).

# 8. Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

# 10. Write a C program to find and print the first 10 Fibonacci numbers using a while loop
~~~
Aunque se haya incluido `#include <math.h>` en tu código, **es necesario agregar la opción `-lm` en la línea de compilación**. Esto se debe a que la directiva `#include <math.h>` solo le dice al compilador dónde encontrar las declaraciones (prototipos) de las funciones matemáticas, pero no le indica al enlazador (linker) que debe incluir la implementación de esas funciones, la cual está en la biblioteca matemática estándar (`libm`).

La opción `-lm` es específica para enlazar esa biblioteca, y sin ella, el enlazador no podrá resolver referencias a funciones como `pow`, `sqrt`, etc.

En resumen:
- **`#include <math.h>`**: Permite usar las declaraciones de funciones matemáticas en tu código.
- **`-lm`**: Enlaza la biblioteca matemática que contiene las implementaciones de esas funciones.

Ambos son necesarios para que funcione correctamente.
~~~