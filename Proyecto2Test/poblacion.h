#ifndef POBLACION_H
#define POBLACION_H
#include "gladiador.h"
#include "lista.h"
#include "nodo.h"
#include <iostream>
#include "QDebug"
using namespace std;

class Poblacion
{
private:
    int estadistica;
    int poblacion;
    int generacion;
    int fitness;
    Gladiador* seleccionado;
    Lista* Gladiadores = new Lista();
    Gladiador* mejores[2];
    int datos[9][8];
    string grafico = "";

public:
    ///
    /// \brief Poblacion
    ///
    Poblacion();
    ///
    /// \brief crea la poblacion inicial con datos basicos
    /// \param cantidad
    ///
    bool poblacionInicial(int cantidad);
    ///
    /// \brief de los mejores gladiadores escoge datos necesarios para crear los nuevos individuos
    ///
    bool cruces();
    ///
    /// \brief escoge los dos mejores gladiadores egun su fitness
    ///
    bool seleccion();
    ///
    /// \brief luego de crear gladiadores se insertan a la poblacion existente
    /// \param nuevoGladiador
    ///
    void insercion(Gladiador* nuevoGladiador);
    ///
    /// \brief con los mejores gladiadores se escoge alguno de ambos para crear nuevos
    ///
    bool mutacion();
    ///
    /// \brief crea los nuevos gladiadores a base de los mejores de las generaciones aneriores
    /// \param cantidad
    ///
    bool creacion(int cantidad);
    Gladiador* mejor();
    int* dectobin(int num);
    int bintodec(int bin[8]);
    bool inversion();
    void Grafico();
    string getGrafico();
};

#endif // POBLACION_H
