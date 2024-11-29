#ifndef ARCHIVO_CLIENTES_HPP
#define ARCHIVO_CLIENTES_HPP

#include <iostream>
#include <fstream>
#include "Cliente.hpp"

class ArchivoClientes {
private:
    const char* nombreArchivo;  // Cambiamos de std::string a const char*

public:
    // Constructor
    ArchivoClientes(const char* archivo);

    // Método para guardar un cliente en el archivo
    void guardarCliente(const Cliente& cliente);

    // Método para guardar todos los clientes en el archivo
    void guardarTodos(const Cliente* clientes, int cantidad);

    // Método para mostrar el contenido del archivo
    void mostrarArchivo() const;
};

#endif
