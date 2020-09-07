/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 10:45 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int edad1;
    int edad2;
    int edad3;
    
    printf ("Hola, por favor inserte 3 edades \n");
    scanf ("%d %d %d", &edad1, &edad2, &edad3);
    
    if(edad1> edad2 && edad1> edad3) {
        printf("El mayor es %d", edad1);
    }else {
        if(edad2> edad3){
            printf("El mayor es %d", edad2);
        }else{
            printf("El mayor es %d", edad3);
        }
    }
    
    return (EXIT_SUCCESS);
}

