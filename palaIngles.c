/*Este ptograma ayuda a aprender palablas en ingles,
guardando y evaluando con opciones multiples*/

#include <stdio.h>

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
        break;
      case 2:
        printf("SELECT 2\n");
        break;
      case 3:
        printf("SELECT 3\n");
        break;
      case 4:
        printf("SELECT 4\n");
        break;
     default:
        printf("INVALID OPTION\n");
    }
  }
  return 0;
}
