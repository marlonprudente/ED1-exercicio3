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
    Tree tree;
    tree.inserir(6);
    return 0;
}
