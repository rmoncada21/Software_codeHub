# Ejemplos de uso de bibliotecas (OpenSSL)

## Modularización de código fuente en archivos



## Archivos fuente (.c) y encabezado (.h)
No conviene que el todo el código fuente este en un mismo arcchivo

>**echo a b** lo manda a la salida standar
**echo a b | bin/ejecutable** : otra forma de mandar parametros al programa

>**.h** código comun reutilizable entre ambos .c


## El compilador de C. El enlazador (linker)

Las librerias del sistema están en la dirección: **ls usr/include**

Se ponen las librería de tercero primero y luego las propias

Un punto **.c** nunca deben incluir **.c**, solo puntos **.h**


## Unidades de traducción. Enlazado de múltiples archivos fuente


## Arquitectura del compilador. El preprocesador de C
https://jeisson.ecci.ucr.ac.cr/progra2/2022a/lecciones/0422-libraries/compiler_architecture-c_preprocessor.mp4

Los archivos **.c** y **.h** pasan por el preprocesador, compilador, linker respectivamente

- El preprocesador: trabaja solo texto
- Los **#** son instrucciones para el proprocesador.
- Se le puede pasar el instrucción de **-E** al comando de compilación para decirle que se detenga.
- El tipo de archivo que entrega en preprocesador es de tipo **.ii**

> cc -E -g -Wall -Wextra src/main.c -o bin/main.ii


## El compilador de C. El enlazador (linker)
- Compilador:
Las instrucciones para agregar al comando de compilacion son **-c y -s**
Tipo de **archivo archivo.o** y **archivo.asm**

>cc -E -g -Wall -Wextra src/main.c -o bin/main.ii

la opción -g entrega

- Linkers:
Es una herramiento del sistema operativo que entrega archivos **archivo.exe**, **archivo.so**, **archivo.dll**, **archivo.**, **archivo.lib** dependiendo del sistema operativo


## Unidades de traducción. Enlazado de múltiples archivos fuente
Los archivos **.c** son independientes enre si

>cc -E -g -Wall -Wextra src/main.c src/archivo.c -o bin/main.ii


## Evitar la múltiple inclusión

Compilacion condicional´con el comando dentro de **.h**

~~~
 #ifndef PERMUTATIONS_H   //compilación condicional
 #define PERMUTATIONS_H

 #endif
~~~


## Reutilizar código compartido entre encabezados
Hacer un diagrama ayuda a entender mejor el código


## Compilar todos los fuentes en un solo comando (no recomendable)
>src/*.c


## Bibliotecas estáticas vs dinámicas
Estáticas stalib.a .lib
Dinamicas dylib.so .dll



#### *Dynamic library*
>gcc -c -fPIC -Wall -Wextra -std=c11 lib_file1.c -o lib_file1.o
gcc -c -fPIC -Wall -Wextra -std=c11 lib_fileN.c -o lib_fileN.o
gcc -shared lib_file1.o lib_fileN.o -o libmylib.so


#### Dynamic linking
>gcc -c -Wall -Wextra -std=c11 main.c -o main.o
gcc    -Wall -Wextra -std=c11 main.o libmylib.so -o myapp # or
gcc    -Wall -Wextra -std=c11 main.o -lmylib     -o myapp


En la carpeta build van los archivos **.o**

## Crear un ejecutable que usa la biblioteca dinámic
