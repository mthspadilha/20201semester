#include "Fila.h"

Fila* iniciaFila(){
    Fila* f = (Fila*)malloc(sizeof(Fila));
    f->_primeiro = f->_ultimo = NULL;
    return q;
}

bool filaVazia(Fila* umaFila){
   if ((umaFila->_primeiro == NULL && (umaFila->_ultimo == NULL){
        return false;
        }
}

void enqueue(Fila* umaFila, void* umDado){

    Elemento* tmp = (Elemento*)malloc(sizeof(Elemento));

    if (umaFila->_ultimo == NULL){
        umaFila->_primeiro = umaFila->_ultimo = tmp;
        return;
    }

    umaFila->_ultimo->_proximo = tmp;
    umaFila->_ultimo = tmp;
} // enQUEUE

void* dequeue(Fila* umaFila){
    if (umaFila->_primeiro == NULL){
        return;
    }

    Elemento* tmp = umaFila->_primeiro->_proximo;

    if (umaFila->_primeiro == NULL){
        umaFila->_ultimo == NULL;
    }

    free(tmp);
} //deQUEUE

void destroiFila(Fila* umaFila){ // DONE
    Elemento* tmp = _primeiro;
    while(tmp){
        _primeiro = tmp->_proximo;
        delete(tmp);
        tmp = _primeiro;
    } // WHILE
}   // DESTROY
