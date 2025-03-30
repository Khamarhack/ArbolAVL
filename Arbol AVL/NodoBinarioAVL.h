/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#ifndef NODOBINARIOAVL_H
#define NODOBINARIOAVL_H

// Clase genérica para representar un nodo en un árbol AVL
template <class T>
class NodoBinarioAVL {
    public:
        T dato;  // Valor almacenado en el nodo
        NodoBinarioAVL<T> *hijoIzq;  // Puntero al hijo izquierdo
        NodoBinarioAVL<T> *hijoDer;  // Puntero al hijo derecho

    public:
        NodoBinarioAVL();  // Constructor
        ~NodoBinarioAVL();  // Destructor

        T& getDato();  // Obtener el dato del nodo
        void setDato(T& val);  // Asignar un valor al nodo

        NodoBinarioAVL<T>* getHijoIzq();  // Obtener el hijo izquierdo
        NodoBinarioAVL<T>* getHijoDer();  // Obtener el hijo derecho

        void setHijoIzq(NodoBinarioAVL<T>* izq);  // Asignar hijo izquierdo
        void setHijoDer(NodoBinarioAVL<T>* der);  // Asignar hijo derecho
};

// Se incluye la implementación de los métodos en el archivo .hxx
#include "NodoBinarioAVL.hxx"

#endif // NODOBINARIOAVL_H
