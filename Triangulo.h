//
// Created by ALONSO on 23/08/2019.
//

#ifndef TAREA_FIGURAS_TRIANGULO_H
#define TAREA_FIGURAS_TRIANGULO_H

#include "Librerias.cpp"

class Triangulo : public Figura {
public:
    Triangulo(float base, float altura, int x, int y);

    float CalcularArea() override;
    /*float CalcularCentroGravedad_X() override;
    float CalcularCentroGravedad_Y() override;*/
};


#endif //TAREA_FIGURAS_TRIANGULO_H
