#!/bin/bash

# Entrada proporcionada
input="
En la rama main
Tu rama está actualizada con 'origin/main'.

Archivos sin seguimiento:
  (usa \"git add <archivo>...\" para incluirlo a lo que será confirmado)
    Replicador_entrada_std
	git_add.sh
	test.sh
	../7_Estructuras_de_datos/
	../Subrutinas/

no hay nada agregado al commit pero hay archivos sin seguimiento presentes (usa \"git add\" para hacerles seguimiento)
"

# Filtrar las líneas que están después de "    " (cuatro espacios en blanco)
#filtered_lines=$(echo "$input" | grep -oP '^\t\K.*')

filtered_lines=$(echo "$input" | grep -oP '^\t|\)\s*\K.*')

# Construir el comando git add con los archivos filtrados
git_add_command="git add $filtered_lines"

# Imprimir el comando resultante
echo "$git_add_command"