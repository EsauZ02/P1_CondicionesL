/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 3 de septiembre de 2020, 10:42 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int x = 5;
    
    if ( x >= 0){
        x++;
    }else{
        if ( x >= 1);
        x +=2;
    }
    printf("%d\n", x);
    
    x = 5;
    if ( x >=0){
        x++;
        if( x >=1){
            x +=2;
            printf("%d\n", x);
        }
    }
    
    return (EXIT_SUCCESS);
}

