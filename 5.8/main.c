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

    int a,b,c,d;
    
printf("Introduzca 4 numeeros\n");
scanf("%d %d %d %d", &a, &b, &c, &d);

   if(d>5){
     d=0;
     c++;
   }
   if(c>5){
      c=0;
      b++;
    }
      d=0;
      c=0;
      a=a*1000;
      b=b*100;
      a=a+b;
printf("%d\n", a);
    
    return (EXIT_SUCCESS);
}

