/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : Nahuel Villaverde Guzman
 Version     : Ejercicio 3-5
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int resta(int, int);
int resta2(void);
void resta3(int, int);
void Sumar4(void);

int main()
{

    int numero1;
    int numero2;
    int resultado;

    numero1=4;
    numero2=8;

    resultado = resta(numero1, numero2);
    printf("1. El resultado es: %d\n", resultado);


    resultado = resta2();
    printf("2. El resultado es %d\n", resultado);

    resta3(numero1, numero2);

    Sumar4();
}


int resta(int numero1, int numero2)//
{
    int resultado;

    resultado = numero1 - numero2;
    return resultado;
}

int resta2(void)
{
    int numero1=1;
    int numero2=2;
    int resultado;

    numero1=3;
    numero2=6;

    resultado = numero1-numero2;

    return resultado;

}


void resta3(int numero1, int numero2)
{
    int resultado;

    resultado= numero1 - numero2;

    printf("3. El resultado es: %d \n", resultado);
}


void Sumar4(void)
{
    int numero1;
    int numero2;
    int resultado;

    numero1=9;
    numero2=2;

    resultado = numero1 - numero2;
    printf("4. El resultado es: %d\n", resultado);
}













