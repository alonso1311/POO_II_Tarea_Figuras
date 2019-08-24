//
// Created by ALONSO on 23/08/2019.
//

#ifndef TAREA_FIGURAS_ELIPSE_H
#define TAREA_FIGURAS_ELIPSE_H


class Elipse : public Figura {
public:
    Elipse(float base, float altura, int x, int y);

    float CalcularArea() override;

};


#endif //TAREA_FIGURAS_ELIPSE_H
