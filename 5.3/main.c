/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 09:40 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * determinar el caracter
 */
int main(int argc, char** argv) {

 char a;
    int x;
    printf("Introduzca un numero arriba de 33 y menor a 256\n");
    scanf("%d", &x);
    a = x;
    printf("De acuerdo a su código su caracter es:\n %c",a);
    
    return (EXIT_SUCCESS);
}

