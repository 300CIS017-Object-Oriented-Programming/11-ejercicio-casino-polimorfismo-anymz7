#ifndef CASINO_SLOTS_H
#define CASINO_SLOTS_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class Slots : public Juego {

private:
    int slot1, slot2, slot3;
protected:
    float calcularResultado(float gonzosApostar) override;

public:
    ~Slots() override = default; // Los destructores deben override el constructor padre, si no tiene nada muy especial se puede poner default;
    float jugar(float gonzosApostar) override;

    void mostrarReglas() const override;


};


#endif //CASINO_SLOTS_H
