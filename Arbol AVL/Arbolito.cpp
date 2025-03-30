/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#include <iostream>
#include "ArbolAVL.h"
#include "NodoAVL.h"

using namespace std;

int main(int argc, char* argv[]) {
    ArbolAVL<int> arbolito;  // Se crea un árbol AVL de enteros

    while (true) {
        int dato;
        char op;
        cin >> op >> dato;  // Se lee la operación y el dato

        // Se realizan operaciones en el árbol según la entrada del usuario
        if (op == 'A')  
            arbolito.insertar(dato);  // Agregar un elemento
        else if (op == 'E')  
            arbolito.eliminar(dato);  // Eliminar un elemento
        else  
            break;  // Finalizar el ciclo si la entrada no es válida
    }

    // Imprimir los recorridos del árbol
    cout << endl << "Inorden: " << endl;
    arbolito.inOrden(arbolito.getRaiz());

    cout << endl << "Preorden: " << endl;
    arbolito.preOrden(arbolito.getRaiz());

    cout << endl << "Posorden: " << endl;
    arbolito.posOrden(arbolito.getRaiz());

    return 0;  // Fin del programa
}
