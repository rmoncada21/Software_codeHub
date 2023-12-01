#!/bin/bash

# Obtener la salida de git status
status_input=$(git status)

# Filtrar las líneas que contienen nombres de archivos modificados y nuevos
# modified_files=$(echo "$status_input" | awk '/modified:/ || /new file:/ {print $NF}')

filtered_lines=$(echo "$status_input" | grep -oP '^\t\K.*')


# Construir el comando git add con los archivos modificados y nuevos
git_add_command="git add $filtered_lines"

# Imprimir el comando resultante
#echo "$git_add_command"

status_output=$($git_add_command)
