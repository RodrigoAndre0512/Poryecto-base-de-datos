#include "Administrador.hpp"
#include <iostream>
#include <fstream>

// Constructor
Administrador::Administrador()
{
    ID = new char[13]();
}
// Destructor
Administrador::~Administrador()
{
    delete[] ID;
}

// Método para crear ID
void Administrador::crearID(const char* dni, const char* nombre, const char* apellido) {
    ID[0] = 'A';
    ID[1] = 'D';
    ID[2] = nombre[0];
    ID[3] = apellido[0];
    // Copiamos los primeros 8 caracteres del DNI al ID
    copiarCaracteres(ID + 4, dni, 8);
    ID[13] = '\0';

    std::cout << "Tu ID de inicio de sesión es: " << ID << std::endl;
}
