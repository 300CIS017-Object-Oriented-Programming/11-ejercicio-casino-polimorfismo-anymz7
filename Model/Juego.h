//
// Created by lufe0 on 7/05/2021.
//

#ifndef CASINO_JUEGO_H
#define CASINO_JUEGO_H

#include "Jugador.h"

class Juego {
protected:
    int numeroCasino;
    int numeroJugador;

    //AQUÍ SE EVIDENCIA QUE ES UNA CLASE ABSTRACTA
    virtual float calcularResultado(float gonzosApostar) = 0;

public:
    Juego() = default;



    //AQUÍ SE EVIDENCIA QUE ES UNA CLASE ABSTRACTA
    virtual float jugar(float gonzosApostar) = 0;

    virtual void mostrarReglas() const = 0;

    virtual ~Juego() = default;

};

#endif //CASINO_JUEGO_H
