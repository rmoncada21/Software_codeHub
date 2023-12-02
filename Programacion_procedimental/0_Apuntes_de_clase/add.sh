#!/bin/bash


# git status -s | grep -F ' M' | awk '{print $2}' > archivos_modificados.txt
# git status -s | grep -F '??' | awk '{print $2}' > archivos_nuevos.txt

# Obtener la salida del git status -s
status_input=$(git status -s)

# para separar los archivos modificados
filtered_lines_modified=$(echo "$status_input" | grep -F ' M' | awk '{print $2}')

# agregar los archivos modificados
git_add_modified="git add $filtered_lines_modified"

echo "Archivos modificados"
echo "$git_add_modified"


# para separar los archivos eliminados
filtered_lines_delete=$(echo "$status_input" | grep -F '??' | awk '{print $2}')

# agregar los archivos eliminados
git_add_delete="git add $filtered_lines_delete"

echo "Archivos elminados"
echo "$git_add_delete"