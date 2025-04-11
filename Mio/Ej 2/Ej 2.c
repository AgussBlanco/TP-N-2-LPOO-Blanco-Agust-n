#include <stdio.h>
#include <string.h>

int main(){
char palabra[100],letra;
int cantVocal=0;
int i;

printf("Ingrese una cadena de caracteres\n");
fgets(palabra, sizeof(palabra), stdin); 
palabra[strcspn(palabra, "\n")] = '\0';
int longitud=strlen(palabra);


for(i=0;i<longitud;i++){
letra=palabra[i];

if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' ||
            letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' ||
            letra == 'u' || letra == 'U' || letra == 'á' || letra == 'Á' ||
			letra == 'é' || letra == 'É' || letra == 'í' || letra == 'Í' ||
			letra == 'ó' || letra == 'Ó' || letra == 'ú' || letra == 'Ú') {
            cantVocal++;
        }
    }

printf("La cantidad de vocales de la cadena es %d",cantVocal);

}

