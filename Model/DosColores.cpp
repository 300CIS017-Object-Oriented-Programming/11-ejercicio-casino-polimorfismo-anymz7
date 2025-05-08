//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;

    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1

    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}
void DosColores::mostrarReglas() const {
    cout << "Reglas del juego Dos Colores:" << endl;
    cout << "1. El usuario tira un dado (de 6 caras) y escoge entre 2 colores: Blanco o Negro." << endl;
    cout << "2. El objetivo es coincidir tanto con el valor del dado como con el color que luego saldrá para el casino." << endl;
    cout << "3. El sistema le pedirá al usuario el color elegido y el valor a apostar." << endl;
    cout << "4. Luego se generará aleatoriamente un número y un color para el casino." << endl;
    cout << "5. Si el resultado coincide tanto el número como el color, gana 4 veces lo apostado." << endl;
    cout << "6. Si el resultado solo coincide el número, gana 0.5 veces lo apostado." << endl;
    cout << "7. Si el resultado solo coincide el color, no gana ni pierde." << endl;
    cout << "8. Si el resultado no coincide en nada, pierde todo lo apostado." << endl;
}

/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/