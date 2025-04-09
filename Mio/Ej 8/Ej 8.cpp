/*8. Realizar un programa que ingrese 5 palabras y devuelta la cadena de
caracteres repetidos más larga entre ellas (si ingreso metro, metralleta Y
metido debe devolver la cadena “met”)*/

#include <stdio.h>
#include <string.h>



bool estaEnTodas(char subcadena[], char palabras[5][100]) {
    for (int i=0;i<5;i++) {
        if (strstr(palabras[i], subcadena) == NULL) {
            return false;
        }
    }
    return true;
}

int main() {
char palabras[5][100];
char subcadena[100];
char resultado[100];	int i;
	
for (i=0;i<5;i++) {
    printf("Ingrese la palabra %d: ", i + 1);
    scanf("%s", palabras[i]);
}

int longitudBase = strlen(palabras[0]);

 
for (int len=longitudBase;len>0;len--) { 
    for (int inicio=0;inicio<=longitudBase-len;inicio++) { 
        strncpy(subcadena,palabras[0]+inicio,len);
        subcadena[len] = '\0';

        if (estaEnTodas(subcadena, palabras)) {
            strcpy(resultado, subcadena);
            printf("\nLa cadena de caracteres repetida mas larga es: '%s'\n", resultado);
            return 0;
        }
    }
}

printf("\nNo hay una subcadena comun en todas las palabras.\n");
    return 0;
}