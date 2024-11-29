#include "cArchivoEventos.hpp"
#include <iostream>

// Constructor
cArchivoEventos::cArchivoEventos(const char* nombreArchivo)
    : nombreArchivo(nombreArchivo), listaEventos(nullptr), numEventos(0), capacidad(1) {
    listaEventos = new cEvento[capacidad]; // Inicializar el arreglo con capacidad 1
}

// Destructor
cArchivoEventos::~cArchivoEventos() {
    delete[] listaEventos;  // Liberar la memoria del arreglo dinámico
}

// Método para expandir la capacidad del arreglo dinámico
void cArchivoEventos::expandirCapacidad() {
    capacidad *= 2;
    cEvento* nuevoArreglo = new cEvento[capacidad];  // Crear un nuevo arreglo con mayor tamaño
    for (int i = 0; i < numEventos; ++i) {
        nuevoArreglo[i] = listaEventos[i];  // Copiar los eventos existentes
    }
    delete[] listaEventos;  // Liberar el arreglo anterior
    listaEventos = nuevoArreglo;  // Reemplazar por el nuevo arreglo
}

// Método para agregar un evento
void cArchivoEventos::agregarEvento(const cEvento* evento) {
    if (numEventos == capacidad) {
        expandirCapacidad();  // Expandir el arreglo si está lleno
    }
    listaEventos[numEventos++] = evento;  // Agregar el evento
}

// Método para guardar los eventos en un archivo
void cArchivoEventos::guardarEventos() const {
    std::ofstream archivo(nombreArchivo);
    if (!archivo) {
        std::cout << "Error al abrir el archivo para guardar.\n";
        return;
    }

    for (int i = 0; i < numEventos; ++i) {
        archivo << listaEventos[i].getTipoEvent() << "\n"
                << listaEventos[i].getFecha() << "\n"
                << listaEventos[i].getLugar() << "\n"
                << listaEventos[i].getNumInvi() << "\n"
                << listaEventos[i].getPresupuesto() << "\n";
    }

    archivo.close();
}

// Método para cargar eventos desde un archivo
void cArchivoEventos::cargarEventos() {
    std::ifstream archivo(nombreArchivo);
    if (!archivo) {
        std::cout << "Error al abrir el archivo para cargar.\n";
        return;
    }

    cEvento evento;
    char temporal[50];
    int num_invitados;
    double presupuesto;

    while (archivo.getline(temporal, 50)) {  // Leer tipo de evento
        evento.setTipoEvent(temporal);

        archivo.getline(temporal, 50);  // Leer fecha
        evento.setFecha(temporal);

        archivo.getline(temporal, 50);  // Leer lugar
        evento.setLugar(temporal);

        archivo >> num_invitados;  // Leer número de invitados
        archivo.ignore();  // Ignorar salto de línea
        archivo >> presupuesto;   // Leer presupuesto
        archivo.ignore();  // Ignorar salto de línea

        evento.setNumInvi(num_invitados);
        evento.setPresupuesto(presupuesto);

        agregarEvento(evento);  // Agregar el evento al arreglo
    }

    archivo.close();
}

// Método para mostrar todos los eventos
void cArchivoEventos::mostrarEventos() const {
    for (int i = 0; i < numEventos; ++i) {
        listaEventos[i].mostrar_evento();  // Mostrar cada evento
    }
}
