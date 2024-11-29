#include "cCliente.hpp"
#include <iostream>
#include <fstream>
// Constructor por defecto
cCliente::cCliente();
// Destructor
cCliente::~cCliente();

// Guardar información del cliente en archivo
void cCliente::guardarClienteEnArchivo(const char* nombreArchivo) const {
    std::ofstream archivo(nombreArchivo, std::ios::app);
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }
    archivo << "Nombre: " << nombre << '\n';
    archivo << "Apellidos: " << apellidos << '\n';
    archivo << "DNI: " << dni << '\n';
    archivo << "Teléfono: " << telefono << '\n';
    archivo << "Correo Electrónico: " << correoElectronico << '\n';
    archivo << "Domicilio: " << domicilio << '\n';
    archivo << "--------------------------\n";
    archivo.close();
    std::cout << "Cliente guardado en el archivo: " << nombreArchivo << std::endl;
}
