#include "Persona.hpp" 
#include <iostream>
#include <fstream>

int contarCaracteres(const char* cadena) {
    int contador = 0;
    while (cadena[contador] != '\0') {
        ++contador;
    }
    return contador;
}

// Función auxiliar para comparar cadenas 
bool compararCadenas(const char* cadena1, const char* cadena2) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
        ++i;
    }
    return cadena1[i] == '\0' && cadena2[i] == '\0';
}
// Auxiliar: Copiar caracteres
void Persona::copiarCaracteres(char* destino, const char* origen, int cantidad) {
    if (destino && origen) {
        for (int i = 0; i < cantidad; ++i) {
            destino[i] = origen[i];
        }
        destino[cantidad] = '\0';  // Aseguramos terminador nulo
    }
}

// Constructor por defecto
Persona::Persona() {
    ID = new char[11]();
    contrasena = new char[9]();
    nombre = new char[50]();
    apellidos = new char[50]();
    dni = new char[9]();
    telefono = new char[15]();
    correoElectronico = new char[50]();
    domicilio = new char[100]();
}

// Constructor por copia
Persona::Persona(const Persona& otro) 
{
    ID = new char[11];
    copiarCaracteres(ID, otro.ID, 10);

    contrasena = new char[9];
    copiarCaracteres(contrasena, otro.contrasena, 8);

    nombre = new char[50];
    copiarCaracteres(nombre, otro.nombre, 49);

    apellidos = new char[50];
    copiarCaracteres(apellidos, otro.apellidos, 49);

    dni = new char[9];
    copiarCaracteres(dni, otro.dni, 8);

    telefono = new char[15];
    copiarCaracteres(telefono, otro.telefono, 14);

    correoElectronico = new char[50];
    copiarCaracteres(correoElectronico, otro.correoElectronico, 49);

    domicilio = new char[100];
    copiarCaracteres(domicilio, otro.domicilio, 99);
}

// Operador de asignación
Persona& Persona::operator=(const Persona& otro) {
    if (this != &otro) {
        // Libera memoria antes de copiar
        delete[] ID;
        ID = new char[11];
        copiarCaracteres(ID, otro.ID, 10);

        delete[] contrasena;
        contrasena = new char[9];
        copiarCaracteres(contrasena, otro.contrasena, 8);

        delete[] nombre;
        nombre = new char[50];
        copiarCaracteres(nombre, otro.nombre, 49);

        delete[] apellidos;
        apellidos = new char[50];
        copiarCaracteres(apellidos, otro.apellidos, 49);

        delete[] dni;
        dni = new char[9];
        copiarCaracteres(dni, otro.dni, 8);

        delete[] telefono;
        telefono = new char[15];
        copiarCaracteres(telefono, otro.telefono, 14);

        delete[] correoElectronico;
        correoElectronico = new char[50];
        copiarCaracteres(correoElectronico, otro.correoElectronico, 49);

        delete[] domicilio;
        domicilio = new char[100];
        copiarCaracteres(domicilio, otro.domicilio, 99);
    }
    return *this;
}
// Destructor
Persona::~Persona() {
    delete[] ID;
    delete[] contrasena;
    delete[] nombre;
    delete[] apellidos;
    delete[] dni;
    delete[] telefono;
    delete[] correoElectronico;
    delete[] domicilio;
}
void Persona::crearPersona() {
    std::cout << "Ingrese el nombre del cliente: "; 
    std::cin.getline(nombre, 49);

    std::cout << "Ingrese el apellido del cliente: ";
    std::cin.getline(apellidos, 49);

    do {
        std::cout << "Ingrese el DNI del cliente (8 dígitos): ";
        std::cin >> dni;
    } while (contarCaracteres(dni) != 8);

    std::cout << "Ingrese el teléfono del cliente: ";
    std::cin >> telefono;

    std::cin.ignore();
    std::cout << "Ingrese el correo electrónico del cliente: ";
    std::cin.getline(correoElectronico, 49);

    std::cout << "Ingrese el domicilio del cliente: ";
    std::cin.getline(domicilio, 99);
}

void Persona::mostrarInfo() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Apellidos: " << apellidos << std::endl;
    std::cout << "DNI: " << dni << std::endl;
    std::cout << "Teléfono: " << telefono << std::endl;
    std::cout << "Correo Electrónico: " << correoElectronico << std::endl;
    std::cout << "Domicilio: " << domicilio << std::endl;
}

void Persona::crearID(const char* dni, const char* nombre, const char* apellido) {
    ID[0] = nombre[0];
    ID[1] = apellido[0];
    copiarCaracteres(ID + 2, dni, 8);
    ID[10] = '\0';
    std::cout << "Tu ID de inicio de sesión es: " << ID << std::endl;
}

void Persona::crearContrasena() {
    do {
        std::cout << "Ingresa la contraseña que quieres tener (8 caracteres): ";
        std::cin >> contrasena;
    } while (contarCaracteres(contrasena) != 8);
    std::cout << "Contraseña guardada.\n";
}

bool Persona::iniciarSesion(const char* inputID, const char* inputContrasena) const {
    if (compararCadenas(inputID, ID) && compararCadenas(inputContrasena, contrasena)) {
        std::cout << "Inicio de sesión exitoso.\n";
        return true;
    } else {
        std::cout << "ID o contraseña incorrectos.\n";
        return false;
    }
}	

