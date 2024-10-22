https://www.tutorialesprogramacionya.com/cmasmasya/detalleconcepto.php?codigo=179&punto=48&inicio=45
template <class T> // función privada
Nodo<T> *Abb<T>::buscaClave (T &ele, Nodo<T> *p){
if (!p)
return 0;
else if (ele < p->dato)
return buscaClave (ele, p->izq);
else if (ele > p-> dato)
return buscaClave (ele, p->der);
else return p;
}
