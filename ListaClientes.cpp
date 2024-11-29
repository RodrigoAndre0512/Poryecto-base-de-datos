#include "ListaClientes.hpp"
#include <iostream>

// Constructor
ListaClientes::ListaClientes(int capacidad_inicial, const char* archivo)
    : capacidad_clientes(capacidad_inicial), cantidad_clientes(0), archivo(archivo) {
    clientes = new cCliente[capacidad_clientes];
}

// Destructor
ListaClientes::~ListaClientes() {
    delete[] clientes;  // Liberamos la memoria
}

// Método para agregar un evento
void ListaClientes::agregarCliente() {
    // Verificar si se necesita aumentar la capacidad
    if (cantidad_clientes >= capacidad_clientes) {
        aumentarCapacidad();
    }

    // Crear un nuevo cliente y almacenarlo
    clientes[cantidad_clientes].crearCliente();  // Usamos el método de cEvento
    cantidad_clientes++;  // Aumentamos el contador de eventos
}

// Método para mostrar todos los eventos
void ListaClientes::mostrarClientes() const {
    if (cantidad_clientes == 0) {
        std::cout << "No hay eventos registrados.\n";
        return;
    }

    for (int i = 0; i < cantidad_clientes; ++i) {
        std::cout << "\nClientes " << i + 1 << ":\n";
        clientes[i].mostrarClientes();  // Llamamos al método de cEvento para mostrar los eventos
        std::cout << "------------------\n";
    }
}

// Método para aumentar la capacidad de la lista de eventos
void ListaClientes::aumentarCapacidad() {
    // Doblamos la capacidad del arreglo
    capacidad_clientes *= 2;
    Cliente* nuevos_clientes = new cCliente[capacidad_clientes];  // Reservamos nueva memoria

    // Copiar los eventos existentes a la nueva ubicación de memoria
    for (int i = 0; i < cantidad_clientes; ++i) {
        nuevos_clientes[i] = clientes[i];
    }

    // Liberar la memoria antigua
    delete[] clientes;

    // Apuntar al nuevo arreglo de eventos
    clientes = nuevos_clientes;
}
void ListaClientes::guardarEnArchivo() const {
    archivo.guardarTodos(clientes, cantidad_clientes);
}
