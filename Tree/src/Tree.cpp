#include <iostream>
#include "../include/Tree.h"

using namespace std;

Tree::Tree()
{
    topo = new No;
    profundidade = 0;
    qnt = 0;
}

void Tree::inserir(int valor)
{
    No * no = new No;
    if(qnt == 0) {
        no->dado = valor;
        no->fDir = NULL;
        no->fEsq = NULL;
        no->pai  = NULL;
        topo = no;
        qnt++;
    } else {
        No * tmp = new No;
        tmp = topo;
        while(1) {
            if(valor == tmp->dado) {
                cout << "\n esse valor j� existe na arvore! \n";
                break;
            } else {
                if(valor < tmp->dado && tmp->fEsq == NULL) {
                    tmp->fEsq = no;
                    no->dado = valor;
                    no->fDir = NULL;
                    no->fEsq = NULL;
                    no->pai  = tmp;
                    qnt++;
                    break;
                } else if(valor > tmp->dado && tmp->fDir == NULL) {
                    tmp->fDir = no;
                    no->dado = valor;
                    no->fDir = NULL;
                    no->fEsq = NULL;
                    no->pai  = tmp;
                    qnt++;
                    break;
                }
                else if(valor < tmp->dado) {
                    tmp = tmp->fEsq;
                } else if(valor > tmp->dado) {
                    tmp = tmp->fDir;
                }
            }
        }
    }
}

void Tree::remover(int valor)
{
    // busca do n� a ser removido
    No *tmp = new No;
    tmp = topo;
    bool direcao;   // 0 � esquerda
                    // 1 � direita;
    while(1) {
        if(valor < tmp->dado) {
            if(tmp->fEsq != NULL) {
                tmp = tmp->fEsq;
                direcao = 0;
            } else {
                cout << "\n valor nao encontrado. ";
                break;
            }

        } else if(valor > tmp->dado) {
            if(tmp = tmp->fDir != NULL) {
                tmp = tmp->fDir;
                direcao = 1;
            } else {
                cout << "\n valor nao encontrado. ";
                break;
            }
        } else if(valor == tmp->dado) {
            // tmp � o n� a ser removido
            break;
        }

    }
    //No * aRemover = new No;
    //aRemover = tmp;

    // o n� � uma folha e nao tem filhos
    if(tmp->fDir == NULL && tmp->fEsq == NULL){
        if(tmp->pai == NULL) {  // remover o topo
            delete tmp;
            qnt--;
        }else {
            if(direcao == 0) {
                (tmp->pai)->fEsq == NULL;
                delete tmp;
                qnt--;
            }else{
                (tmp->pai)->fDir == NULL;
                delete tmp;
                qnt--;
            }
        }

    }

    // o n� tem um filho apenas
    else if(){

    }

    // o n� tem dois filhos
    else if(){

    }
}

void Tree::apresentar()
{

}

int  Tree::lerProfundidade()
{
}

