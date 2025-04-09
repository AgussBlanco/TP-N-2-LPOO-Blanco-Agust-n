/* Escribe un programa que cuente el numero de palabras en una cadena ingresada por el usuario.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

char cadena[150],letra;
int longitud=0;
int i=0;
int cantPalabras=1;
printf("Ingrese una cadena de caracteres:\n");
fgets(cadena, sizeof(cadena), stdin);   
cadena[strcspn(cadena, "\n")] = '\0'; 

longitud=strlen(cadena);

for(i=0;i<longitud;i++){
	letra=cadena[i];
	if(isspace(cadena[i])){
		cantPalabras++;
	}
}

printf("La cadena '%s' tiene %d palabras dentro de ella",cadena,cantPalabras);
}
