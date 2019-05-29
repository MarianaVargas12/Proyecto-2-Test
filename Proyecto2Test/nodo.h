#ifndef NODO_H
#define NODO_H
#include "gladiador.h"

class Nodo
{
private:
    Nodo* siguiente;
    Nodo* anterior;
    Nodo* abajo;
    Nodo* arriba;
    bool ocupadoObstaculo;
    bool ocupadoGladiador;
    Gladiador* gladiador;

public:
    Nodo();
    void setSiguiente(Nodo* siguiente);
    Nodo* getSiguiente();
    void setAnterior(Nodo* anterior);
    Nodo* getAnterior();
    void setAbajo(Nodo* abajo);
    Nodo* getAbajo();
    void setArriba(Nodo* arriba);
    Nodo* getArriba();
    void setOcupadoObstaculo(bool ocupado);
    bool getOcupadoObstaculo();
    void setOcupadoGladiador(bool ocupado);
    bool getOcupadoGladiador();
    void setGladiador(Gladiador* gladiador);
    Gladiador* getGladiador();
};

#endif // NODO_H
