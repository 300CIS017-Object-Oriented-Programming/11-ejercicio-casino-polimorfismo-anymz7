#include "Slots.h"

float Slots::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;

    cout << "Calculará tres numeros aleatorios del 1 al 6: \n";
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    slot1 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot2 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot3 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Slots::calcularResultado(float gonzosApostar) {
    float maxResult = 2;
    float lowestResult = 1.5;
    float intermediateResult = 7;

    if (slot1 == slot2 && slot2 == slot3) {
        return intermediateResult * gonzosApostar;
    } else if (slot1 == slot2 + 1 && slot2 == slot3 + 1) {
        return lowestResult * gonzosApostar;
    } else if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
        return maxResult * gonzosApostar;
    } else {
        return 0;
    }
}
void Slots::mostrarReglas() const {
    cout << "Reglas de Mayor13:" << endl;
    cout << "El sistema genera un número aleatorio para el usuario entre 1 y 13. Ahí el usuario debe tener 2 opciones para continuar, la primera: darse por perdido antes de que se genere el número que le corresponde a casino (en este caso perderá la mitad del dinero apostado). La segunda: jugar, es decir, que se genere el número aleatorio del casino." << endl;
}