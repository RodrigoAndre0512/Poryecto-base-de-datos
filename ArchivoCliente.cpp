#include "ArchivoCliente.hpp"
#include <iostream>
#include <fstream>

// Constructor
ArchivoClientes::ArchivoClientes(const char* archivo) : nombreArchivo(archivo) {}

// Guardar un cliente individual en el archivo
void ArchivoClientes::guardarCliente(const cCliente* cliente) {
    if (cliente == nullptr) {  // Verificar que el cliente no sea nullptr
        std::cerr << "Error: Cliente es nullptr.\n";
        return;
    }

    std::ofstream archivo(nombreArchivo, std::ios::app);  // Abrir en modo anexar
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo " << nombreArchivo << ".\n";
        return;
    }

    archivo << "ID: " << cliente->getID() << "\n";
    archivo << "Nombre: " << (cliente->getNombre() ? cliente->getNombre() : "N/A") << "\n";
    archivo << "Apellidos: " << (cliente->getApellidos() ? cliente->getApellidos() : "N/A") << "\n";
    archivo << "DNI: " << cliente->getDNI() << "\n";
    archivo << "Teléfono: " << (cliente->getTelefono() ? cliente->getTelefono() : "N/A") << "\n";
    archivo << "Correo: " << (cliente->getCorreoElectronico() ? cliente->getCorreoElectronico() : "N/A") << "\n";
    archivo << "Domicilio: " << (cliente->getDomicilio() ? cliente->getDomicilio() : "N/A") << "\n";
    archivo << "--------------------------\n";
}

// Guardar todos los clientes en el archivo
void ArchivoClientes::guardarTodos(const cCliente* clientes, int cantidad) const {
    if (clientes == nullptr || cantidad <= 0) {  // Verificar puntero y cantidad
        std::cerr << "Error: Clientes es nullptr o la cantidad es inválida.\n";
        return;
    }

    std::ofstream archivo(nombreArchivo);  // Abrir en modo truncar
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo " << nombreArchivo << ".\n";
        return;
    }

    for (int i = 0; i < cantidad; ++i) {
        std::cerr << "Cliente: N°" << i << std::endlM
        archivo << "ID: " << clientes[i].getID() << "\n";
        archivo << "Nombre: " << (clientes[i].getNombre() ? clientes[i].getNombre() : "N/A") << "\n";
        archivo << "Apellidos: " << (clientes[i].getApellidos() ? clientes[i].getApellidos() : "N/A") << "\n";
        archivo << "DNI: " << clientes[i].getDNI() << "\n";
        archivo << "Teléfono: " << (clientes[i].getTelefono() ? clientes[i].getTelefono() : "N/A") << "\n";
        archivo << "Correo: " << (clientes[i].getCorreoElectronico() ? clientes[i].getCorreoElectronico() : "N/A") << "\n";
        archivo << "Domicilio: " << (clientes[i].getDomicilio() ? clientes[i].getDomicilio() : "N/A") << "\n";
        archivo << "--------------------------\n";
    }
}

// Mostrar el contenido del archivo
void ArchivoClientes::mostrarArchivo() const {
    std::ifstream archivo(nombreArchivo);
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo " << nombreArchivo << ".\n";
        return;
    }

    std::string linea;
    while (std::getline(archivo, linea)) {
        std::cout << linea << "\n";
    }
}