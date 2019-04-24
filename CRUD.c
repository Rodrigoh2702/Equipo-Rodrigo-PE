//
//  main.c
//  CarritoC
//
//  Created by Rodrigo Hernández on 4/23/19.
//  Copyright © 2019 Rodrigo Hernández. All rights reserved.
//

#include <stdio.h>

int main() {
    int opcion=0, posCarrito=0, cambio=0;
    char elemento, carrito[100] ;
    printf("Bienvenido a su carrito de compras\n");
    printf("Seleccione una opcion:\n");
    printf("1: Añadir al carrito\n");
    printf("2: Modificar un elemento del carrito\n");
    printf("3: Eliminar un elemento del carrito\n");
    scanf("%d", &opcion);
    if (opcion==1) {
        printf("Introduzca el elemento que desea añadir\n");
        scanf("%c", &elemento);
        carrito[posCarrito]=elemento;
        posCarrito++;
    }
    else if (opcion==2) {
        printf("Su carrito actual es :\n");
        for (int i=0; i<posCarrito; i++) {
            printf("%d: %c\n", (i+1), carrito[i]);
        }
        printf("Introduzca el numero de elemento que desea modificar \n");
        scanf("%d", &cambio);
        printf("Introduzca el nuevo elemento\n");
        scanf("%c", &elemento);
        carrito[cambio-1]=elemento;
    }
    return 0;
}
