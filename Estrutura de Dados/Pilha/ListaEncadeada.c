#include "ListaEncadeada.h"

ListaEncadeada* iniciaListaEncadeada(){

    ListaEncadeada * head = NULL;
    head = (ListaEncadeada*)malloc(sizeof(ListaEncadeada));
    if (head == NULL){
        return
    }

    head->_quantidade = 1
    head->_proximo = NULL

}

void adicionaNoInicio(ListaEncadeada* umaLista, void* umDado){
    ListaEncadeada * novo;
    novo = (ListaEncadeada*)malloc(sizeof(ListaEncadeada));

    novo->_quantidade = umDado;
    novo->_primeiro = *umaLista;
    *umaLista = novo;

}

void printLista(ListaEncadeada * umaLista){
    ListaEncadeada * atual = umaLista;

    while(atual != NULL){
        printf("%d\n", atual->_quantidade);
        atual = atual->_primeiro;
    }
}

void adicionaNoFim(ListaEncadeada* umaLista, void* umDado){
    ListaEncadeada * atual = umaLista;
    while(atual->_primeiro!=NULL){
        atual = atual->_primeiro;
    }

    atual->_primeiro = (ListaEncadeada*)malloc(sizeof(atual));
    atual->_primeiro->_dado = umDado;
    atual->_primeiro->_proximo = NULL;
}

void* retiraDoInicio(ListaEncadeada* umaLista){
    int i = -1;
    ListaEncadeada * novo = NULL;

    if (*umLista == NULL){
        return;
    }

    novo = novo->_primeiro->_proximo;
    i = novo->_quantidade;
    free(novo);
    umaLista = novo;

    return i;
}

void* retiraDaPosicao(ListaEncadeada* umaLista, int umaPosicao){
    int i = 0;
    int retval = -1;
    ListaEncadeada * atual = umaLista->_primeiro;
    ListaEncadeada * temp = NULL;

    if (umaPosicao == 0){
        return retiraDoInicio(umaLista);
    }

    for (i = 0; i < n-1; i++){
        if(atual->_primeiro->_proximo == NULL){
            return;
        }
        atual = atual->_primeiro->_proximo;
    }

    temp = atual->_primeiro->_proximo;
    retval = temp->_primeiro->_dado;
    atual->_primeiro->_proximo = temp->_primeiro->_proximo;
    free(temp);

    return retval;
}





