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
    cout << "Slots es un juego en el que una maquina escoge aleatoriamente 3 simbolos (en algunosmodelos son 5)" << endl;
    cout << "Reglas de Slots:" << endl;
    cout << "1. Si caen los 3 simbolos iguales o alguna combinacion especial el jugador ganara cierta cantidad, de lo contrario perdera lo apostado." << endl;
    cout << "2. En esta version de Slots se generaran 3 numeros entre 1 y 7" << endl;
    cout << "3. Si caen los 3 numeros iguales el jugador ganara el doble de lo apostado" << endl;
    cout << "4. si consigue una escalera (numeros sucesivos sea ascendente o descendente) ganara la mitad de lo apostado" << endl;
    cout << "5. Si llega a conseguir el triple 7 ganara 7 veces lo apostado" << endl;
    cout << "6. Si no consigue ninguna perdera lo apostado." << endl;

}