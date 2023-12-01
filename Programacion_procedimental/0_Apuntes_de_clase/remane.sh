#!/bin/bash

# Obtener el directorio actual
carpeta=$(pwd)

# Cambiar la extensión de los archivos .c a .md en la carpeta
for archivo in "$carpeta"/*.c; do
  if [ -f "$archivo" ]; then
    nuevo_nombre="${archivo%.c}.md"
    mv "$archivo" "$nuevo_nombre"
    echo "Cambiada la extensión de $archivo a $nuevo_nombre"
  fi
done

echo "Cambio de extensión completado para la carpeta $carpeta."
