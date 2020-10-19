#include "Pilha.h"

// typedef ListaEncadeada Pilha;

Pilha* iniciaPilha(){

    Pilha* umaPilha = (Pilha*)malloc(sizeof(Pilha));
    umaPilha->_primeiro = NULL;

}

void push(Pilha* umaPilha, void* umDado){

    Pilha* tmp = (Pilha*)malloc(sizeof(Pilha));
    if (tmp == NULL){
        return;
     }
    tmp->_primeiro->_dado = umDado;
    tmp->_primeiro->_proximo = umaPilha;
    umaPilha = tmp;

    return umaPilha;
}

void* pop(Pilha* umaPilha){
    pilhaVazia(&umaPilha);

    Pilha* temp = *umaPilha->_primeiro;
    *umaPilha->_primeiro = (*umaPilha)->_proximo;
    int popped = temp->_primeiro->_dado;
    free(temp);

    return popped;



}

bool pilhaVazia(Pilha* umaPilha){
    if (umaPilha->_primeiro == NULL){
        return false;
    }
    else {
        return true;
    }
}
