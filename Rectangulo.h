//
// Created by ALONSO on 23/08/2019.
//

#ifndef TAREA_FIGURAS_RECTANGULO_H
#define TAREA_FIGURAS_RECTANGULO_H


class Rectangulo : public Figura {
public:
    Rectangulo(float base, float altura, int x, int y);

    float CalcularArea() override;

};


#endif //TAREA_FIGURAS_RECTANGULO_H
