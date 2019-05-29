/*Este ptograma ayuda a aprender palablas en ingles,
guardando y evaluando con opciones multiples*/

#include <stdio.h>
#include "definiciones.h"
int main(){
   char opcion='0';
   while(opcion!='4'){
    printf("Bienvenido, este programa te ayudara a aprender palabras en ingles.\n");
    printf("1 ingles a español\n");
    printf("2 español a ingles\n");
    printf("3 mixto\n");
    printf("4 salir\n");
    scanf("%c",&opcion);
    while(getchar()!='\n');

    switch((int)opcion-48){
      case 1:
        printf("SELECT 1\n");
        ingEsp();
        break;
      case 2:
        printf("SELECT 2\n");
        espIng();
        break;
      case 3:
        printf("SELECT 3\n");
        mixto();
        break;
      case 4:
        printf("Hasta pronto :)\n");
        break;
     default:
        printf("INVALID OPTION\n");
    }
  }
  return 0;
}

void ingEsp(void){
  printf("Ingles a español\n");
  leerTexto();
}
void espIng(void){
  printf("Español a ingles\n");
  leerTexto();
}
void mixto(void){
  printf("Aprendizaje mixto\n");
}
void leerTexto(void){
  int cont1=0;
  int cont2=0;
  FILE *lista_ing;
  FILE *lista_esp;
  char caracter;
  //para leer la lista de palabras en ingles
  lista_ing=fopen("ingles_lista.txt","r");
  if(lista_ing==NULL){
    printf("Error de apertura del archivo\n");
  }else{
    printf("El contenido del archivo es \n");
    while((caracter=fgetc(lista_ing))!=EOF){
      printf("%c",caracter);
      if(caracter=='\n'){
        cont1++;
      }
    }
  }
  //Para leer la lista de palabras en español
  lista_esp=fopen("espanol_lista.txt","r");
  if(lista_esp==NULL){
    printf("Error de apertura del archivo\n");
  }else{
    printf("El contenido del archivo es \n");
    while((caracter=fgetc(lista_esp))!=EOF){
      printf("%c",caracter);
      if(caracter=='\n'){
        cont2++;
      }
    }
  }
  printf("\n<<Ingles: %d>>\n",cont1);
  printf("\n<<Español: %d>>\n",cont2);
  fclose(lista_ing);
  fclose(lista_esp);
}
