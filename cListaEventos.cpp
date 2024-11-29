#include "cListaEventos.hpp"
#include <iostream>

// Constructor
cListaEventos::cListaEventos(int capacidad_inicial) {
    capacidad_eventos = capacidad_inicial;
    cantidad_eventos = 0;
    eventos = new cEvento[capacidad_eventos];  // Reservamos espacio para eventos
}

// Destructor
cListaEventos::~cListaEventos() {
    delete[] eventos;  // Liberamos la memoria
}

// Método para agregar un evento
void cListaEventos::agregarEvento() {
    // Verificar si se necesita aumentar la capacidad
    if (cantidad_eventos >= capacidad_eventos) {
        aumentarCapacidad();
    }

    // Crear un nuevo evento y almacenarlo
    eventos[cantidad_eventos].crear_evento();  // Usamos el método de cEvento
    cantidad_eventos++;  // Aumentamos el contador de eventos
}

// Método para mostrar todos los eventos
void cListaEventos::mostrarEventos() const {
    if (cantidad_eventos == 0) {
        std::cout << "No hay eventos registrados.\n";
        return;
    }

    for (int i = 0; i < cantidad_eventos; ++i) {
        std::cout << "\nEvento " << i + 1 << ":\n";
        eventos[i].mostrar_evento();  // Llamamos al método de cEvento para mostrar los eventos
        std::cout << "------------------\n";
    }
}

// Método para aumentar la capacidad de la lista de eventos
void cListaEventos::aumentarCapacidad() {
    // Doblamos la capacidad del arreglo
    capacidad_eventos *= 2;
    cEvento* nuevos_eventos = new cEvento[capacidad_eventos];  // Reservamos nueva memoria

    // Copiar los eventos existentes a la nueva ubicación de memoria
    for (int i = 0; i < cantidad_eventos; ++i) {
        nuevos_eventos[i] = eventos[i];
    }

    // Liberar la memoria antigua
    delete[] eventos;

    // Apuntar al nuevo arreglo de eventos
    eventos = nuevos_eventos;
}
