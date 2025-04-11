/*4. Realiza un programa que reemplace todas las apariciones de un caracter
en una cadena de caracteres ingresada por el usuario por otro caracter
tambian ingresado por el usuario.*/
#include <stdio.h>
#include <string.h>

int main() {
int i;
char frase[100];
char fraseDos[100];
char remplazar;
char remplazo;

printf("Ingrese una frase:\n");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = '\0';
printf("Ingrese la letra que desea remplazar:\n");
scanf(" %c", &remplazar);

printf("Que desea poner en el lugar de la letra %c:\n", remplazar);
scanf(" %c", &remplazo);

for (i=0;i<strlen(frase);i++) {
    if (frase[i]==remplazar) {
        fraseDos[i]=remplazo;
    } else {
        fraseDos[i]=frase[i];
    }
}
fraseDos[i] = '\0';
printf("La frase final es:\n%s\n", fraseDos);

}
