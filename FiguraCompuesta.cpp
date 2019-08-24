//
// Created by ALONSO on 23/08/2019.
//

#include "FiguraCompuesta.h"

FiguraCompuesta::FiguraCompuesta(vector<Figura *> *figuras){
    figuras = new vector<Figura*>();
}

void FiguraCompuesta::componerArea() {
    string option;
    float b, h;
    int pos_x, pos_y;

    cout << "Ingrese la figuras:\n" << "\t[A] Triangulo\n" << "\t[B] Rectangulo\n" << "\t[C] Elipse\n" << "\t[D] Ninguno";
    cout << "Luego indique su:\n" << "\t* Base.\n" << "\t* Altura.\n" << "\t* Centro de gravedad X.\n" << "\t* Centro de gravedad Y.\n";

    cin >> option;

    while(option != "D"){
        cin >> b;
        cin >> h;
        cin >> pos_x;
        cin >> pos_y;

        if (option == "A")
            figuras->push_back(new Triangulo(b, h, pos_x, pos_y));

        else if (option == "B")
            figuras->push_back(new Rectangulo(b, h, pos_x, pos_y));

        else if (option == "C")
            figuras->push_back(new Elipse(b, h, pos_x, pos_y));

        else
            break;
    }
}
