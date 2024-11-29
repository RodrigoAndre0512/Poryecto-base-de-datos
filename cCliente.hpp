#ifndef cCLIENTE_HPP
#define cCLIENTE_HPP
#include "Persona.hpp"

class cCliente : public Persona {
public:
    // Constructor y Destructor
    cCliente();
    ~cCliente();

    // Métodos para gestionar datos del cliente
    void crearID(const char* dni, const char* nombre, const char* apellido) const override; 
    void crearContrasena() const override;

    // Setters sobrescritos
    void setID(const char* nuevoID) override { copiarCaracteres(ID, nuevoID, 10); }
    void setContrasena(const char* nuevaContrasena) override { copiarCaracteres(contrasena, nuevaContrasena, 8); }
    void setNombre(const char* nuevoNombre) override { copiarCaracteres(nombre, nuevoNombre, 49); }
    void setApellidos(const char* nuevosApellidos) override { copiarCaracteres(apellidos, nuevosApellidos, 49); }
    void setDNI(const char* nuevoDNI) override { copiarCaracteres(dni, nuevoDNI, 8); }
    void setTelefono(const char* nuevoTelefono) override { copiarCaracteres(telefono, nuevoTelefono, 14); }
    void setCorreoElectronico(const char* nuevoCorreo) override { copiarCaracteres(correoElectronico, nuevoCorreo, 49); }

    // Getters sobrescritos
    const char* getID() const override { return ID; }
    const char* getContrasena() const override { return contrasena; }
    const char* getNombre() const override { return nombre; }
    const char* getApellidos() const override { return apellidos; }
    const char* getDNI() const override { return dni; }
    const char* getTelefono() const override { return telefono; }
    const char* getCorreoElectronico() const override { return correoElectronico; }

    // Funciones de autenticación y archivo
    bool iniciarSesion(const char* inputID, const char* inputContrasena) const override;
    void guardarInfoEnArchivo(const char* nombreArchivo) const;
};

#endif
