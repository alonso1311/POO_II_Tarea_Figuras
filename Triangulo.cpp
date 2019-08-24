//
// Created by ALONSO on 23/08/2019.
//

#include "Triangulo.h"


float Triangulo::CalcularArea() {
    return base*altura/2;
}

Triangulo::Triangulo(float base, float altura, int x, int y) : Figura(base, altura, x, y) {}
