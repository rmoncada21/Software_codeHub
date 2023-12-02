#!/bin/bash

# Verificar si se proporcionó un parámetro
if [ $# -eq 0 ]; then
  echo "Uso: $0 [m|d|a] (m para modificar, d para eliminar, a para agregar nuevos)"
  exit 1
fi

# Obtener la salida del git status -s
status_input=$(git status -s)

# Función para manejar diferentes acciones según el parámetro
function manejar_accion() {
  local tipo=$1
  local filtro=$2
  local mensaje=$3

  filtered_lines=$(echo "$status_input" | grep -F "$filtro" | awk '{printf "%s ", $2}')
  git_add_command="git add $filtered_lines"

  echo "Archivos $mensaje"
  echo "$git_add_command"

  # Descomentar la siguiente línea para ejecutar el comando git add
  # eval "$git_add_command"
}

# Verificar el valor del parámetro
if [ "$1" == "m" ]; then
  manejar_accion 'M' ' M' 'modificados'
elif [ "$1" == "d" ]; then
  manejar_accion 'D' '??' 'eliminados'
elif [ "$1" == "a" ]; then
  manejar_accion 'A' '??' 'nuevos'
else
  echo "Uso: $0 [m|d|a] (m para modificar, d para eliminar, a para agregar nuevos)"
  exit 1
fi
