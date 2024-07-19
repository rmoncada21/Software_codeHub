#ifndef STRUCT_H
#define STRUCT_H

typedef struct{
    int n1;
    float n2;
    char st[10];
}type_Data;

struct Data{
    int n1;
    float n2;
    char st[10];
};

// De esta forma d1 ya estaría lista para usar
struct Data1{
    int n1;
    float n2;
    char st[10];
}d1;

struct coordenadas{
    float x;
    float y;
    float z;
};

struct mapa{
    char nombre_mapa[20];
    struct coordenadas puntos;
};

struct mapa2{
    char nombre_mapa[20];
    struct coordenadas *puntos;
};

#endif // STRUCT_H