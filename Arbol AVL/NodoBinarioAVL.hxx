/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#include "NodoBinarioAVL.h"

using namespace std;

// Constructor: Inicializa los hijos como nulos
template <class T>
NodoBinarioAVL<T>::NodoBinarioAVL() {
    this->hijoIzq = NULL;
    this->hijoDer = NULL;
}

// Destructor (no se requiere liberar memoria manualmente en este caso)
template <class T>
NodoBinarioAVL<T>::~NodoBinarioAVL() {
}

// Devuelve el dato almacenado en el nodo
template <class T>
T& NodoBinarioAVL<T>::getDato() {
    return this->dato;
}

// Asigna un valor al nodo
template <class T>
void NodoBinarioAVL<T>::setDato(T& val) {
    this->dato = val;
}

// Devuelve el puntero al hijo izquierdo
template <class T>
NodoBinarioAVL<T>* NodoBinarioAVL<T>::getHijoIzq() {
    return this->hijoIzq;
}

// Devuelve el puntero al hijo derecho
template <class T>
NodoBinarioAVL<T>* NodoBinarioAVL<T>::getHijoDer() {
    return this->hijoDer;
}

// Asigna un nodo como hijo izquierdo
template <class T>
void NodoBinarioAVL<T>::setHijoIzq(NodoBinarioAVL<T>* izq) {
    this->hijoIzq = izq;
}

// Asigna un nodo como hijo derecho
template <class T>
void NodoBinarioAVL<T>::setHijoDer(NodoBinarioAVL<T>* der) {
    this->hijoDer = der;
}
