/*
10. Desarrolla un programa que busque la primera aparición de una
subcadena dentro de una cadena más larga. Mencionar si dicha subcadena
se encuentra y en qué posición se empieza.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(){
    char cadena[100], buscar[100];    

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0'; 
    
    printf("Ingrese la cadena a buscar dentro de la cadena: ");
    fgets(buscar, sizeof(buscar), stdin);
    buscar[strcspn(buscar, "\n")] = '\0';
    
    char *pos = strstr(cadena, buscar); 
    if (pos != NULL) {
        int index =pos-cadena; 
        printf("La subcadena se encuentra en la posicion: %d\n", index+1);
    } else {
        printf("La subcadena no se encuentra en la cadena.\n");
    }    
       
}