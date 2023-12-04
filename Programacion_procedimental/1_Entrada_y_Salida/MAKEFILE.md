Si deseas que tu ejecutable tenga el mismo nombre que tu archivo fuente, pero sin la extensión `.c`, puedes modificar el Makefile de la siguiente manera:

```make
CC = gcc
CFLAGS = -Wall
SOURCES = $(wildcard *.c)
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

# $@ toma el valo del archivo objeto .o
# $< toma el valo del archivo fuente .c
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
```

En este Makefile:

- `SOURCES` es la lista de archivos fuente `.c`.
- `EXECUTABLES` se crea a partir de `SOURCES` usando la regla `$(SOURCES:.c=)`, que quita la extensión `.c` de cada archivo fuente.
- La regla `%: %.c` especifica cómo construir cada ejecutable. Usa el mismo nombre que el archivo fuente, pero sin la extensión `.c`.
- `all: $(EXECUTABLES)` construye todos los ejecutables especificados en `EXECUTABLES` cuando ejecutas `make all`.

Entonces, si tienes archivos fuente como `file1.c` y `file2.c`, después de ejecutar `make`, tendrás ejecutables llamados `file1` y `file2`.


***

En el contexto de un Makefile:

- El símbolo `@` se utiliza para suprimir la impresión del comando en la salida estándar. Cuando se coloca antes de un comando en una regla, el comando se ejecuta, pero no se muestra en la salida del terminal. Esto puede hacer que la salida sea más limpia y fácil de leer.

  Por ejemplo:

  ```make
  clean:
  	@rm -f archivo1 archivo2
  ```

  Aquí, al ejecutar `make clean`, la salida mostrará solo `rm -f archivo1 archivo2`, pero no mostrará la ejecución real del comando `rm`.

- El símbolo `<` se utiliza en el contexto de un comando en un Makefile y representa la primera dependencia de la regla. En otras palabras, `$<` se expandirá al nombre del primer archivo de la lista de dependencias.

  Por ejemplo:

  ```make
  programa: programa.c funciones.c
  	$(CC) $(CFLAGS) -o $@ $<
  ```

  Aquí, `$@` se expandirá a `programa` (el objetivo), y `$<` se expandirá a `programa.c` (la primera dependencia).

Entonces, en el contexto de la regla `%: %.c` que proporcionaste anteriormente:

```make
%: %.c
	$(CC) $(CFLAGS) -o $@ $<
```

- `$@` se expande al nombre del objetivo (en este caso, el nombre del ejecutable).
- `$<` se expande al nombre del primer archivo de dependencia (en este caso, el archivo fuente `.c`).

En resumen, en esta regla específica, `$@` se utiliza para representar el nombre del ejecutable y `$<` se utiliza para representar el archivo fuente correspondiente.