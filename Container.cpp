#include "Container.h"

Container::Container()
{
    dummy = new Nodo();
    dummy->setSiguiente(nullptr);
}


string Container::mostrar()
{
    Nodo* ptr = dummy->getSiguiente();
    stringstream ss;
    if (!ptr) {
        ss << "No hay elementos.\n";
        return ss.str();
    }
    while (ptr) {
        ss << ptr->toString() << endl;
        ptr = ptr->getSiguiente();
    }
    return ss.str();
}

void Container::agregar(Nodo* nodo)
{
    if (dummy->getSiguiente() == nullptr) { 
        dummy->setSiguiente(nodo);  
        return;
    }

    Nodo* ptr = dummy->getSiguiente();  
    while (ptr->getSiguiente() != nullptr)  
        ptr = ptr->getSiguiente();

    ptr->setSiguiente(nodo);  
}




