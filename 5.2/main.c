/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 10:47 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Domingo de pascua
 */
int main(int argc, char** argv) {

    int a, b, c, d, e, n;
    int anio;
    
    printf("introduce el año\n");
    scanf("%d", &anio);
    
    a = anio % 19;
    b = anio % 4;
    c = anio % 7;
    d = (19 * a + 24)%30;
    e = (2 * b + 4 * c + 6 * d + 5)%7;
    n = 22 + d + e;
    
    if(n <= 31){
        printf("El dia de pascua es %d de marzo", n);
    }else{
        printf("el dia de pascua es %d de abril", n-31);
    }
    
    return (EXIT_SUCCESS);
}

