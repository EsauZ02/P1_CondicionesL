/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 09:46 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * convierte el formato de 24hrs a 12hrs
 */
int main(int argc, char** argv) {

    int h, m, hr;
    
    printf("introduce una hora en notación 24hrs\n");
    printf("ingresa 5 carcateres. ejemplo 09:00\n");
    scanf("%d:%d", &h, &m);
    
    if( h > 12){
        hr = h - 12;
        printf("la hora es %d:%d\n", hr, m);
    }else{
        printf("la hora es %d:%d\n", h, m);
    }
    
    return (EXIT_SUCCESS);
}

