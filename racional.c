#include <stdlib.h>
#include <exception>
#include <new>
#include <stdio.h>
#include "racional.h"

#define MIN(a,b)      (a < b ? a : b)
#define BUF_SIZE      32


int GCD(int a, int b)
{
   register int i;

   /* if any is zero, return 1 */
   if(!a || !b) return 1;

   for(i = MIN(a,b); i >= 1; i--) 
      if(!(a % i) && !(b % i)) break;

   return i;
}

//Matriz* mat = (Matriz*) malloc(sizeof(Matriz));

Racional *racionalSimples(Racional *r){
   int m = GCD(r->numerador, r->denominador);

   r->numerador /= m;
   r->denominador /= m;

   
   return r;
}

Racional* init(int numerador, int denominador){
    
   Racional* r = (Racional*) malloc(sizeof(Racional));
        if (r == NULL){
            printf("memoria insulficiente!");
            exit(1);
        }
   r->numerador = numerador;
   r->denominador = denominador;
   
   return r;
}



Racional* add(Racional* r1, Racional* r2){
 
    Racional* r = (Racional*) malloc(sizeof(Racional));
    r->numerador = (r1->numerador * r2->denominador) + (r2->numerador * r1->denominador);
    r->denominador = r1->denominador * r2->denominador;
    
    return racionalSimples(r);
}

Racional* subtract(Racional* r1, Racional* r2){
    Racional* r = (Racional*) malloc(sizeof(Racional));
    
    r->numerador = (r1->numerador * r2->denominador) - (r2->numerador * r1->denominador);
    r->denominador = (r1->denominador * r2->denominador);
    
    return r;
}

Racional* multiply(Racional* r1, Racional* r2){
    Racional* r = (Racional*) malloc(sizeof(Racional));
    
    r->numerador = r1->numerador * r2->numerador;
    r->denominador = r1->denominador * r2->denominador;
    
    return racionalSimples(r);
    }


Racional* divide(Racional* r1, Racional* r2){
    Racional* r = (Racional*) malloc(sizeof(Racional));
    
    r->numerador = r1->numerador * r2->denominador;
    r->denominador = r1->denominador * r2->numerador;
    
    return racionalSimples(r);
}

void destroy(Racional *p){
    free(p);
}