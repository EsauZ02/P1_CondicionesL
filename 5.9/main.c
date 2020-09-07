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

int anio, mes, dia;
int anio1, mes1, dia1, edad;
printf("Ingrese su fecha de nacimiento \n");
scanf("%d %d %d", &dia, &mes, &anio);
printf("Ingrese la fechanactual\n");
scanf("%d %d %d", &dia1, &mes1, &anio1);
edad=anio1-anio-1;
mes=mes-mes1;
dia=dia-dia1;
if(mes<=0){
if(mes<0)
edad++;
if(mes==0){
if(dia<=0)
edad++;
}
}
printf("Tienes %d años", edad);
    
    return (EXIT_SUCCESS);
}

