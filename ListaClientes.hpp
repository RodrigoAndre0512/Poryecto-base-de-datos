#ifndef LISTA_CLIENTES_HPP
#define LISTA_CLIENTES_HPP

#include <iostream>
#include "cCliente.hpp"
#include "ArchivoClientes.hpp"

class ListaClientes {
private:
    cCliente* clientes;
    int cantidad_clientes;
    int capacidad_clientes;
    ArchivoClientes archivo;  // Cambiaremos a const char*

public:
    // Constructor
    ListaClientes(int capacidad_inicial = 5, const char* archivo = "clientes.txt");

    // Destructor
    ~ListaClientes();

    void agregarCliente();
    void mostrarClientes() const;
    void aumentarCapacidad();

    // Nuevo método para guardar clientes en el archivo
    void guardarEnArchivo() const;
};

#endif
