/*7. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo "roma" y "amor" */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){

char palabraUno[100],palabraDos[100],limpiaUno[100],limpiaDos[100];	
int i,j=0,resultado;
int longitud;

printf("Ingrese la primer palabra:\n");
fgets(palabraUno,sizeof(palabraUno),stdin);
palabraUno[strcspn(palabraUno,"\n")] = '\0';
    
printf("Ingrese la segunda palabra:\n");
fgets(palabraDos, sizeof(palabraDos), stdin);
palabraDos[strcspn(palabraDos,"\n")] = '\0'; 

longitud=strlen(palabraDos);


for (i = 0; palabraUno[i] != '\0'; i++) {
    if (palabraUno[i] != ' ') {
        limpiaUno[j++] = tolower(palabraUno[i]);
    }
}
limpiaUno[j] = '\0';

for (i = 0; i < j - 1; i++) {
    for (int k = i + 1; k < j; k++) {
        if (limpiaUno[i] > limpiaUno[k]) {
            char temp = limpiaUno[i];
            limpiaUno[i] = limpiaUno[k];
            limpiaUno[k] = temp;
        }
    }

}
j=0;

for (i = 0; palabraDos[i] != '\0'; i++) {
    if (palabraDos[i] != ' ') {
        limpiaDos[j++] = tolower(palabraDos[i]);
 	}
}
limpiaDos[j] = '\0';
 
for (i = 0; i < j - 1; i++) {
    for (int k = i + 1; k < j; k++) {
        if (limpiaDos[i] > limpiaDos[k]) {
            char temp = limpiaDos[i];
            limpiaDos[i] = limpiaDos[k];
            limpiaDos[k] = temp;
        }
    }
}
resultado=strcmp(limpiaUno, limpiaDos);
    
if(resultado==0){
    printf("La palabra %s es un anagrama de %s \n",palabraUno, palabraDos);
}else{
	printf("La palabra %s no es un anagrama de %s \n",palabraUno, palabraDos);
}
}
