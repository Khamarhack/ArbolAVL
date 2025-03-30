/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#include "ArbolBinarioAVL.h"
#include <queue>

using namespace std;

// Constructor: Inicializa el árbol con una raíz nula.
template <class T>
ArbolBinarioAVL<T>::ArbolBinarioAVL() {
    this->raiz = NULL;
}

// Destructor
template <class T>
ArbolBinarioAVL<T>::~ArbolBinarioAVL() {
}

// Establece la raíz del árbol
template <class T>
void ArbolBinarioAVL<T>::setRaiz(NodoBinarioAVL<T>* raiz) {
    this->raiz = raiz;
}

// Retorna la raíz del árbol
template <class T>
NodoBinarioAVL<T>* ArbolBinarioAVL<T>::getRaiz() {
    return this->raiz;
}

// Verifica si el árbol está vacío
template <class T>
bool ArbolBinarioAVL<T>::esVacio() {
    return this->raiz == NULL;
}

// Retorna el dato de la raíz
template <class T>
T& ArbolBinarioAVL<T>::datoRaiz() {
    return this->raiz->getDato();
}

// Calcula la altura de un subárbol
template <class T>
int ArbolBinarioAVL<T>::altura(NodoBinarioAVL<T> *inicio) {
    if (inicio == NULL) return -1;
    return max(altura(inicio->getHijoIzq()), altura(inicio->getHijoDer())) + 1;
}

// Calcula el tamaño del árbol (cantidad de nodos)
template <class T>
int ArbolBinarioAVL<T>::tamano(NodoBinarioAVL<T> *inicio) {
    if (inicio == NULL) return 0;
    return 1 + tamano(inicio->getHijoIzq()) + tamano(inicio->getHijoDer());
}

// Rotación simple a la derecha
template <class T>
NodoBinarioAVL<T>* ArbolBinarioAVL<T>::giroDerecha(NodoBinarioAVL<T>* &padre) {
    NodoBinarioAVL<T> *n_padre = padre->getHijoIzq();
    padre->setHijoIzq(n_padre->getHijoDer());
    n_padre->setHijoDer(padre);
    return n_padre;
}

// Rotación simple a la izquierda
template <class T>
NodoBinarioAVL<T>* ArbolBinarioAVL<T>::giroIzquierda(NodoBinarioAVL<T>* &padre) {
    NodoBinarioAVL<T> *n_padre = padre->getHijoDer();
    padre->setHijoDer(n_padre->getHijoIzq());
    n_padre->setHijoIzq(padre);
    return n_padre;
}

// Rotación izquierda-derecha
template <class T>
NodoBinarioAVL<T>* ArbolBinarioAVL<T>::giroIzquierdaDerecha(NodoBinarioAVL<T>* &padre) {
    padre->setHijoIzq(giroIzquierda(padre->getHijoIzq()));
    return giroDerecha(padre);
}

// Rotación derecha-izquierda
template <class T>
NodoBinarioAVL<T>* ArbolBinarioAVL<T>::giroDerechaIzquierda(NodoBinarioAVL<T>* &padre) {
    padre->setHijoDer(giroDerecha(padre->getHijoDer()));
    return giroIzquierda(padre);
}

// Inserta un valor en el árbol AVL
template <class T>
bool ArbolBinarioAVL<T>::insertar(T& val) {
    // Implementación del método de inserción con balanceo
}

// Elimina un valor del árbol AVL
template <class T>
bool ArbolBinarioAVL<T>::eliminar(T& val) {
    // Implementación del método de eliminación con balanceo
}

// Busca un valor en el árbol AVL
template <class T>
bool ArbolBinarioAVL<T>::buscar(T& val) {
    // Implementación del método de búsqueda
}

// Recorre el árbol en preorden
template <class T>
void ArbolBinarioAVL<T>::preOrden(NodoBinarioAVL<T> *inicio) {
    // Implementación del recorrido en preorden
}

// Recorre el árbol en inorden
template <class T>
void ArbolBinarioAVL<T>::inOrden(NodoBinarioAVL<T> *inicio) {
    // Implementación del recorrido en inorden
}

// Recorre el árbol en postorden
template <class T>
void ArbolBinarioAVL<T>::posOrden(NodoBinarioAVL<T> *inicio) {
    // Implementación del recorrido en postorden
}

// Recorre el árbol por niveles
template <class T>
void ArbolBinarioAVL<T>::nivelOrden(NodoBinarioAVL<T> *inicio) {
    // Implementación del recorrido por niveles
}
