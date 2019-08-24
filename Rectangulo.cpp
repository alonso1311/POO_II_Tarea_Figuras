//
// Created by ALONSO on 23/08/2019.
//

#include "Rectangulo.h"

float Rectangulo::CalcularArea() {
    return base*altura;
}

Rectangulo::Rectangulo(float base, float altura, int x, int y) : Figura(base, altura, x, y) {}
