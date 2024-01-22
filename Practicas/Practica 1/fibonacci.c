/*
Autor: Bocanegra Heziquio Yestlanezi
Version: Atom (windows 10) enero 2021
Compilacion: gcc fibonacci.c -o (nombre que desea ponerle al ejecutable)

            |***********|
            |Ejercicio 2|
            |***********|
Implemente el modelo recursivo que obtiene el termino n de la serie Fibonacci (n>=1)

        Fibonacci(n)={Fibonacci(n-1)+Fibonacci(n-2)   x>2}
                     {1,    x<=2}
Es una sucesion infitina de numeros naturales donde cada numero se calcula sumando
los dos anteriores a el
*/

#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int numero);
int main (void){
  int numero;
  printf("\t\t\n|------------------|");
  printf("\t\t\n|Serie de Fibonacci|");
  printf("\t\t\n|------------------|\n");
  printf("Introduzca un numero:");
  scanf("%d", &numero);
  for(int i=0; i<=numero; i++){
    printf("La serie Fibonacci en la posicion [%d] es: %d\n", i, Fibonacci(i));
  }

  return 0;
}

int Fibonacci(int numero){
    if(numero==0)
    return 0;
    else if (numero==1)
    return 1;

    else
      return Fibonacci(numero-1)+Fibonacci(numero-2);

}
