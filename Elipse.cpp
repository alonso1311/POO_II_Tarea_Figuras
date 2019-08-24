//
// Created by ALONSO on 23/08/2019.
//

#include "Elipse.h"

float Elipse::CalcularArea() {
    return (base*altura/4)*PI;
}

Elipse::Elipse(float base, float altura, int x, int y) : Figura(base, altura, x, y) {}
