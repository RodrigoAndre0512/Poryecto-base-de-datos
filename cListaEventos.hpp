#ifndef cListaEventos_HPP
#define cListaEventos_HPP

#include "cEvento.hpp"

class cListaEventos {
private:
    cEvento* eventos;        // Puntero a un arreglo de eventos
    int cantidad_eventos;     // Cantidad actual de eventos almacenados
    int capacidad_eventos;    // Capacidad máxima de la lista de eventos

public:
    // Constructor
    cListaEventos(int capacidad_inicial = 5);  // Tamaño inicial por defecto

    // Destructor
    ~cListaEventos();

    // Método para agregar un evento
    void agregarEvento();

    // Método para mostrar todos los eventos
    void mostrarEventos() const;

    // Método para aumentar la capacidad de la lista de eventos
    void aumentarCapacidad();
};

#endif
