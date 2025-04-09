#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
char palabra[100], palabraLimpia[100], palabraFinal[100], letra;
int longitud;
int i, j = 0;

printf("Ingrese una cadena de caracteres:\n");
fgets(palabra, sizeof(palabra), stdin); 
palabra[strcspn(palabra, "\n")] = '\0';

for (i=0;palabra[i]!='\0';i++) {
    if (palabra[i]!=' ') {
        palabraLimpia[j++]=tolower(palabra[i]);
    }
}
palabraLimpia[j] ='\0';

longitud=strlen(palabraLimpia);

for (i=0;i<longitud;i++) {
    letra=palabraLimpia[longitud-i-1]; 
    palabraFinal[i]=letra;
}
palabraFinal[longitud] = '\0'; 

if (strcmp(palabraLimpia,palabraFinal)==0) {
    printf("La cadena %s es un palindromo\n", palabra);
} else {
    printf("La cadena %s no es un palindromo\n", palabra);
}

}
