
#ifndef AVL_H
#define AVL_H

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
public:
    AVL<T>();
    AVL<T>(const AVL<T> &origen);
    int inserta(Nodo<T>* &c, T &dato);
    void rotDecha(Nodo<T>* &p);
    void rotIzqda(Nodo<T>* &p);
};

template<class T>
AVL<T>::AVL() {
};

template<class T>
AVL<T>::AVL(const AVL<T> &origen) {
    raiz(origen.raiz);
};


#endif //AVL_H
