/*
Elaborar um programa que apresente o seguinte menu:
1) Inser��o em �rvore bin�ria
2) Remo��o em �rvore bin�ria
3) Apresenta��o da �rvore
A �rvore deve ser apresentada da seguinte forma:
Raiz: 25 FE: 20 FD: 30
N� 20: FE: 10 FD: 23
N� 30: FE: 28 FD: 40
N� 10: FE: 5 FD: 15
N� 23: FE: -1 FD: -1
N� 28: FE: -1 FD: -1
N� 40: FE: -1 FD: -1
N� 5: FE: -1 FD:-1
N� 15: FE: -1 FD: -1

*/

#include <iostream>
#include "include/Tree.h"

using namespace std;

int main()
{
    /*  // teste
    Tree tree;
    tree.inserir(15);
    tree.inserir(4);
    tree.inserir(20);
    tree.inserir(1);
    tree.inserir(16);
    tree.inserir(25);
    tree.apresentar();
    */

    int op;
    int valor;
    Tree * tree = new Tree;

    cout << " -- Arvore binaria --\n";
    while(1) {
        cout << "\n   _Menu_\n";
        cout << " 1) Insercao em arvore binaria\n";
        cout << " 2) Remocao em arvore binaria \n";
        cout << " 3) Apresentacao da arvore\n";
        cin >> op;

        switch(op) {
        case 1:
            cout << "\n digite valor para inserir: ";
            cin >> valor;
            (*tree).inserir(valor);
            break;
        case 2:
            if( (*tree).qnt > 0 ) {
                cout << "\n digite valor para remover: ";
                cin >> valor;
                (*tree).remover(valor);
            } else {
                cout << "\n arvore vazia!\n";
            }
            break;
        case 3:
            //cout << "\n quantidade " << (*tree).qnt << "\n";
            if( (*tree).qnt > 0 ) {
                (*tree).apresentar();
            } else {
                cout << "\n arvore vazia!\n";
            }
            break;
        default:
            cout << "opcao invalida\n";
        }
    }

    return 0;
}
