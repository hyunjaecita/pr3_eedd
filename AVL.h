
#ifndef AVL_H
#define AVL_H
#include "VDinamico.h"

template <typename T>
class Nodo {
public:
    Nodo<T> *izq, *der;
    T dato;
    char bal; // -1, 0 , 1 para un árbol avl
    Nodo(T &ele): izq(0), der(0), bal(0), dato(ele) {}
};

template <class T>
class AVL {
    Nodo<T> *raiz;
    int inserta(Nodo<T>* &c, T &dato);
    void rotDecha(Nodo<T>* &p);
    void rotIzqda(Nodo<T>* &p);
    void preOrden(Nodo<T>* &p, Nodo<T>* &p2);
    void inOrden(Nodo<T>* &p, VDinamico<T*> &vector);
    void postOrden(Nodo<T>* &p);

public:
    AVL<T>();
    AVL<T>(const AVL<T> &origen);
    T &operator=(AVL<T> &dato);

    T* buscarRec(T &dato);
    VDinamico<T*> recorreInorden();


};

template<class T>
AVL<T>::AVL() {
};

template<class T>
AVL<T>::AVL(const AVL<T> &origen) {
    preOrden(raiz, origen.raiz);
};

//no lo hacemos pq no esta disponible lolololoollololololo
template<class T>
T &AVL<T>::operator=(AVL<T> &dato) {

};

template<class T>
T* AVL<T>::buscarRec(T &dato){
    if (!p)
      return 0;
      else if (ele < p->dato)
        return buscaClave (ele, p->izq);
      else if (ele > p-> dato)
         return buscaClave (ele, p->der);
      else return p;
};

template<class T>
void AVL<T>::preOrden(Nodo<T>* &p, Nodo<T>* &p2){
  if(p2){
    p=new Nodo<T>(*p2);
    preOrden(p->izq, p2->izq);
    preOrden(p->der, p2->der);
   }

};

template<class T>
VDinamico<T*> AVL<T>::recorreInorden(){


};

template<class T>
void AVL<T>::inOrden(Nodo<T>* &p, VDinamico<T*> &vector){
  if(p){
    inOrden(p->izq, vector);
    vector.inserta(&(p->dato));
    inOrden(p->der, vector);
  }
};

template<class T>
void AVL<T>::posOrden(Nodo<T>* &p){
  if(p){
    posOrden(p->izq);
    posOrden(p->der);
  }
};

#endif //AVL_H
