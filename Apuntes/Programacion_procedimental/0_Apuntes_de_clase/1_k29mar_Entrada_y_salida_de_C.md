# Funciones (subrutinas) libres en C. Comentarios TODO 

- Crear código reutilizable
- Evitar la redundancia de código
- Subrutina es la palabra genérica para llamar a una función o procedimiento
- Apegarse a la convecnió de google (linter, cpplint)
- Hacer comentarios TODO en el código

## 1. Biblioteca estándar de C. Leer un carácter con scanf()
- stdio.h es en encabezado en C
- < cstdio> es un encabezado en C++
- scanf va y localiza el valor digitado desde la consola
  *  buscar la documentación de scanf en la pag de cpp (ver marcador de chrome)"
     https://cplusplus.com/reference/cstdio/scanf/

- int scanf (const char* format)
- printf(): Funcion para imprimir
  - char caracter devuelve un valor tipo entero, por tanto para printf pueda imprimirlo se debe enviar la dirección de memoria de la variable mediante: **&character**



- stdio.h es un encabezado en C, se añade de la siguiente manera:
  - ~~~
    #include <> es un encabezado en C++
    ~~~


int scanf (const char* format)

printf(): Funcion para imprimir
char caracter devuelve un valor tipo entero, por tanto para printf pueda imprimirlo se debe enviar la dirección de memoria de la variable mediante: **&character**



![Imagen 1](img/1_k29.png)

## 2. Archivos. Entrada estándar. Cursores

## 3. Concepto de archivo. Final de archivo (EOF, end-of-file)
- Scanf se detiene cuando se encuentra con el EOF. EOF devuelve un valor númerico. 

## 4. Valor de retorno de scanf(). Chequeo de errores en C
> (scanf("En algún d%c la mancha", &character) != EOF)
// Cambiar el EOF dependiendo de la cantidad de %c que  haya en el scanf 

## 5. Inicializar todas las variables.
- Es una buena práctica de progrmación inicializar las variables una vez declaradas.
- Buscar el valor de inicilización de sus debidas tipos de variables 

## 6. Leer varios valores con scanf(). Imprimir en el erro estándar
- Tiene 3 archivos abiertos por defecto, la entrada, la salida, error estandar -> fprintf
fprintf(stderr, %d, number)

- Importante dejar un espacio blanco en el scanf ejemplo:
> (scanf("%c%d , &character" , &number) == 2)
