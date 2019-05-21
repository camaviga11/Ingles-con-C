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
  }
  return 0;
}
