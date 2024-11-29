#ifndef cArchivoEventos_HPP
#define cArchivoEventos_HPP

#include <fstream>
#include "cEvento.hpp"

class cArchivoEventos {
private:
    char* nombreArchivo;
    cEvento* listaEventos;  // Arreglo dinámico de eventos
    int numEventos;  // Número actual de eventos
    int capacidad;   // Capacidad actual del arreglo

    // Método para expandir la capacidad del arreglo dinámico
    void expandirCapacidad();

public:
    // Constructor y destructor
    cArchivoEventos(const char* nombreArchivo);
    ~cArchivoEventos();

    // Métodos para agregar eventos, guardar y cargar desde un archivo
    void agregarEvento(const cEvento* evento);
    void guardarEventos() const;
    void cargarEventos();
    void mostrarEventos() const;
};

#endif
