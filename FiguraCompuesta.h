//
// Created by ALONSO on 23/08/2019.
//

#ifndef TAREA_FIGURAS_FIGURACOMPUESTA_H
#define TAREA_FIGURAS_FIGURACOMPUESTA_H

#include "Figura.h"
#include "Librerias.cpp"

class FiguraCompuesta {
private:
    vector<Figura*> * figuras;
public:
    FiguraCompuesta(vector<Figura *> *figuras);

    void componerArea();

};


#endif //TAREA_FIGURAS_FIGURACOMPUESTA_H
