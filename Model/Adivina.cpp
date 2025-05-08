//
// Created by PC on 7/05/2025.
//

#include "Adivina.h"
#include "Juego.h"

#include <iostream>
using namespace std;

void Adivina::mostrarReglas() const {
    cout << "Reglas del juego Adivina:" << endl;
    cout << "1. El sistema genera un numero aleatorio entre 1 y 10." << endl;
    cout << "2. El jugador debe intentar adivinar ese numero." << endl;
    cout << "3. Si acierta, gana 3 gonzo." << endl;
    cout << "4. Si se equivoca, pierde 5 gonzo." << endl;
}

float Adivina::jugar(float gonzosApostar) {

    srand(time(nullptr));
    numeroCasino = rand() % 10;
    cout << "Adivina el numero del casino (entre 1 y 10): ";
    cin >> numeroJugador;
    return calcularResultado(gonzosApostar);
}

float Adivina::calcularResultado(float gonzosApostar) {
    if (numeroJugador == numeroCasino) {
        cout << "¡Correcto! Ganaste 3 gonzo." << endl;
        return gonzosApostar + 3;
    } else {
        cout << "Incorrecto. El numero era: " << numeroCasino << ". Perdiste 5 gonzo." << endl;
        return gonzosApostar - 5;
    }
}