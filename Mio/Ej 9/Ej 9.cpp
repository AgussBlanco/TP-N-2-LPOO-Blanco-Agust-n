/*9. Realizar un programa en el cual el usuario primero ingrese una oración

la cual puede estar en mayúscula o minúscula o de manera alternada
y luego pueda seleccionar que realice las siguientes acciones
a) Mostrar la oración toda en mayúscula
b) Mostrar la oración todo en minúsculas
c) Mostrar la oración alternando una mayúscula y una minúscula
D) Mostrar la oración comenzando todas las palabras con mayúscula*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char oracion[100],oracionOpc[100];
int op;
bool flag=true;
printf("Ingrese una oracion: ");
fgets(oracion, sizeof(oracion), stdin);
oracion[strcspn(oracion, "\n")] = 0; 




int longitud = strlen(oracion);


do{

printf("Ingrese la opcion que desea realizar: \n");
printf("a) Mostrar la oracion toda en mayuscula\n");   
printf("b) Mostrar la oracion toda en minuscula\n");
printf("c) Mostrar la oracion alternando una mayuscula y una minuscula\n");
printf("d) Mostrar la oracion comenzando todas las palabras con mayuscula\n");
printf("e) Salir\n");
scanf(" %c", &op);

switch(op){
    case 'a':
        for(int i = 0; i < longitud; i++){
            oracionOpc[i] = toupper(oracion[i]);
        }
            printf("La oracion en mayuscula es: %s\n", oracionOpc);
             flag=true;
        break;
    
	case 'b':
        for(int i = 0; i < longitud; i++){
            oracionOpc[i] = tolower(oracion[i]);
        }
        printf("La oracion en minuscula es: %s\n", oracionOpc);
         flag=true;
        break;
    
	case 'c':
    		for(int i = 0, toggle = 1; i < longitud; i++){
        		if(oracion[i] != ' '){
            		if(toggle % 2 == 0){
                		oracionOpc[i] = toupper(oracion[i]);
            		} else {
                		oracionOpc[i] = tolower(oracion[i]);
            		}
            		toggle++;
        		} else {
            			oracionOpc[i] = oracion[i]; // copiar espacios u otros caracteres
        		}
    		}
    	oracionOpc[longitud] = '\0'; // asegurarse de terminar la cadena
    	printf("La oracion alternando mayusculas y minusculas es: %s\n", oracionOpc);
    	flag = true;
    	break;
        
	case 'd':
        for(int i=0;i<longitud;i++){
            if(i==0||oracion[i-1]== ' '){
                oracionOpc[i]=toupper(oracion[i]);
            }
            else{
            	oracionOpc[i]=tolower(oracion[i]);
			}
        }
        printf("La oracion comenzando todas las palabras con mayuscula es: %s\n", oracionOpc);
         flag=true;
        break;
    case 'e':
		printf("Saliendo...");
		 flag=false;
		break;    
    
	default:
        printf("Ingrese una opcion correcta");
        flag=true;
		break;
}
}
while(flag==true);
}    
