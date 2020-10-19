#ifndef FILA_H
#define FILA_H

#include "Elemento.h"
#include <stdbool.h>
#include <exception>
#include <new>

class fila_vazia_exception : public std::exception
{
	virtual const char* what() const throw()
  	{
    	return "Fila vazia";
  	}
} ;


typedef struct
{
	Elemento* _primeiro;
	Elemento* _ultimo;
	int _quantidade;
} Fila;

Fila* iniciaFila(); //DONE
void destroiFila(Fila* umaFila); //DONE
bool filaVazia(Fila* umaFila); //DONE
bool contem(Fila* umaFila, void* umDado);
int posicao(Fila* umaFila, void* umDado);
void enqueue(Fila* umaFila, void* umDado); //DONE
void* dequeue(Fila* umaFila); // DONE


#endif /* FILA_H */
