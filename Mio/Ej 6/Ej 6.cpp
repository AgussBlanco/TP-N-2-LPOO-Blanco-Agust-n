/*6. Crea un programa que invierta el orden de las palabras en una cadena (por
ejemplo, "Hola mundo" se convierte en "mundo Hola"*/

#include<stdio.h>
#include<string.h>

int main(){
char cadena[100];
char *final[100];
int longitud;
int i=0,j;


printf("Ingrese la frase que desee:\n");
fgets(cadena, sizeof(cadena), stdin);
cadena[strcspn(cadena, "\n")] = '\0';
longitud=strlen(cadena); 

char *palabra = strtok(cadena, " ");

while(palabra!=NULL){

final[i]=palabra;
i++;
palabra=strtok(NULL, " ");
}

printf("La frase invertida es:\n");
for(j=i-1;j>=0;j--){

printf("%s ",final[j]);
}

}