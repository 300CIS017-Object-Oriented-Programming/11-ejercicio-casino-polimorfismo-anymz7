//
// Created by PC on 7/05/2025.
//

#ifndef ADIVINA_H
#define ADIVINA_H

#include "Juego.h"
#include <cstdlib>
#include <ctime>

class Adivina : public Juego {
protected:
    float calcularResultado(float gonzosApostar) override;

public:
    Adivina() = default;
    ~Adivina() override = default;

    float jugar(float gonzosApostar) override;
    void mostrarReglas() const override;
};

#endif //ADIVINA_H
