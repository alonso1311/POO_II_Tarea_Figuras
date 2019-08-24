//
// Created by ALONSO on 23/08/2019.
//

#ifndef TAREA_FIGURAS_FIGURA_H
#define TAREA_FIGURAS_FIGURA_H

#include "Librerias.cpp"

class Figura {
protected:
    float base, altura;
    int x, y;

public:
    Figura(float base, float altura, int x, int y);

    virtual float CalcularArea() = 0;
    /*virtual float CalcularCentroGravedad_X() = 0;
    virtual float CalcularCentroGravedad_Y() = 0;*/
};


#endif //TAREA_FIGURAS_FIGURA_H
