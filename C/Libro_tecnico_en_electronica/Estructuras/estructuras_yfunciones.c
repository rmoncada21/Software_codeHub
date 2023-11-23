#include <stdio.h>
#include <string.h>

struct cliente{
    
    char razon_social[20];
    char direccion[20];
    long telefono;
    char locaclidad[20];
    char contacto[20];
    char email[20];

};

int verificar_cliente(struct cliente, struct cliente);
int verificar_cliente_punteros(struct cliente*, struct cliente*);

int verificar_cliente(struct cliente registrado, struct cliente miembro){
    
    if(strcmp(registrado.razon_social, miembro.razon_social)==0)
        return 1;
    else 
        return 0;

}

// usando punteros
int verificar_cliente_punteros(struct cliente* registrado, struct cliente* miembro){
    
    if(strcmp((*registrado).razon_social, (*miembro).razon_social)==0)
        return 1;
    else 
        return 0;

}


int main() {
    // Crear dos instancias de la estructura cliente
    struct cliente cliente_registrado = {"EmpresaX", "Calle A", 123456789, "CiudadA", "Persona1", "correo1@example.com"};
    struct cliente cliente_miembro = {"EmpresaX", "Calle B", 987654321, "CiudadB", "Persona2", "correo2@example.com"};

    // Verificar utilizando la función con la estructura directa
    if (verificar_cliente(cliente_registrado, cliente_miembro)) {
        printf("Los clientes son iguales (estructura directa).\n");
    } else {
        printf("Los clientes son diferentes (estructura directa).\n");
    }

    // Verificar utilizando la función con punteros
    if (verificar_cliente_punteros(&cliente_registrado, &cliente_miembro)) {
        printf("Los clientes son iguales (punteros).\n");
    } else {
        printf("Los clientes son diferentes (punteros).\n");
    }

    return 0;
}