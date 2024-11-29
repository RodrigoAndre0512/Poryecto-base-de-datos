#include "cEvento.hpp"
#include <iostream>

// Constructor
cEvento::cEvento() {
    tipo_evento = nullptr;
    fecha = nullptr;
    lugar = nullptr;
    num_invitados = 0;
    presupuesto = 0.0;
}

// Destructor
cEvento::~cEvento() {
    delete[] tipo_evento;
    delete[] fecha;
    delete[] lugar;
}

// Función auxiliar para copiar cadenas
void cEvento::copiarCadena(const char* origen, char* destino) {
    // Contar el tamaño de la cadena
    int i = 0;
    while (origen[i] != '\0') {
        i++;
    }

    // Crear el espacio necesario para la cadena
    destino = new char[i + 1];

    // Copiar la cadena
    for (int j = 0; j <= i; ++j) {
        destino[j] = origen[j];
    }
}

// Método para crear un evento
void cEvento::crear_evento() {
    char temporal[50];
    
    std::cout << "\tIngrese el tipo de evento: ";
    std::cin.ignore();
    std::cin.getline(temporal, 50);
    setTipoEvent(temporal);

    std::cout << "\tIngrese la fecha del evento: ";
    std::cin.getline(temporal, 50);
    setFecha(temporal);

    std::cout << "\tIngrese el lugar del evento: ";
    std::cin.getline(temporal, 50);
    setLugar(temporal);

    std::cout << "\tIngrese la cantidad de invitados: ";
    std::cin >> num_invitados;

    std::cout << "\tIngrese el presupuesto: ";
    std::cin >> presupuesto;
}

// Método para mostrar los datos del evento
void cEvento::mostrar_evento() const {
    std::cout << "\t------------------ \n";
    std::cout << "\tDatos del evento\n";
    std::cout << "\tTipo de evento: " << getTipoEvent() << "\n";
    std::cout << "\tFecha: " << getFecha() << "\n";
    std::cout << "\tLugar: " << getLugar() << "\n";
    std::cout << "\tNúmero de invitados: " << getNumInvi() << "\n";
    std::cout << "\tPresupuesto: " << getPresupuesto() << "\n";
    std::cout << "\t------------------ \n";
}
