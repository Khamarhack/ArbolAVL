/*******************************************
Fecha: 26 marzo 2025
Autor: Santiago Camargo
Tema: Taller Arboles
Estructuras de datos
******************************************/
#ifndef ARBOLBINARIOAVL_H
#define ARBOLBINARIOAVL_H

#include "NodoBinarioAVL.h"

// Clase que representa un Árbol Binario AVL genérico
template <class T>
class ArbolBinarioAVL {
protected:
    NodoBinarioAVL<T> *raiz; // Puntero a la raíz del árbol

public:
    // Constructor y destructor
    ArbolBinarioAVL();
    ~ArbolBinarioAVL();
    
    // Métodos para manejar la raíz
    void setRaiz(NodoBinarioAVL<T>* raiz);
    NodoBinarioAVL<T>* getRaiz();
    
    // Métodos para verificar el estado del árbol
    bool esVacio();
    T& datoRaiz();
    
    // Métodos auxiliares
    int altura(NodoBinarioAVL<T> *inicio); // Calcula la altura del árbol
    int tamano(NodoBinarioAVL<T> *inicio); // Calcula el tamaño del árbol
    
    // Rotaciones para mantener el balance del árbol
    NodoBinarioAVL<T>* giroDerecha(NodoBinarioAVL<T>*& inicio);
    NodoBinarioAVL<T>* giroIzquierdaDerecha(NodoBinarioAVL<T>* &padre);
    NodoBinarioAVL<T>* giroIzquierda(NodoBinarioAVL<T>*& inicio);
    NodoBinarioAVL<T>* giroDerechaIzquierda(NodoBinarioAVL<T>* &padre);
    
    // Operaciones sobre el árbol
    bool insertar(T& val); // Inserta un valor en el árbol
    bool eliminar(T& val); // Elimina un valor del árbol
    bool buscar(T& val);   // Busca un valor en el árbol
    
    // Recorridos del árbol
    void preOrden(NodoBinarioAVL<T> *inicio); // Recorrido en preorden
    void inOrden(NodoBinarioAVL<T> *inicio);  // Recorrido en inorden
    void posOrden(NodoBinarioAVL<T> *inicio); // Recorrido en posorden
    void nivelOrden(NodoBinarioAVL<T> *inicio); // Recorrido por niveles
};

#include "ArbolBinarioAVL.hxx"

#endif // ARBOLBINARIOAVL_H
