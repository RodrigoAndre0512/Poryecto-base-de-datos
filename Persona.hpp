#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
protected:
    char* ID;                // ID de cliente (10 caracteres + '\0')
    char* contrasena;        // Contraseña (8 caracteres + '\0')
    char* nombre;            // Nombre (máx 49 caracteres + '\0')
    char* apellidos;         // Apellidos (máx 49 caracteres + '\0')
    char* dni;               // DNI (8 caracteres + '\0')
    char* telefono;          // Teléfono (máx 14 caracteres + '\0')
    char* correoElectronico; // Correo electrónico (máx 49 caracteres + '\0')
    char* domicilio;         // Domicilio (máx 99 caracteres + '\0')

    // Función auxiliar para copiar caracteres sin usar strncpy
    void copiarCaracteres(char* destino, const char* origen, int cantidad) {
        for (int i = 0; i < cantidad; ++i) {
            destino[i] = origen[i];
        }
        destino[cantidad] = '\0'; // Aseguramos el terminador nulo
    }
public:
    // Constructor y Destructor
    Persona();
    virtual ~Persona();

    // Métodos para gestionar datos del cliente
    virtual void crearPersona();
    virtual void mostrarInfo() const;
    virtual void crearID(const char* dni, const char* nombre, const char* apellido);
    virtual void crearContrasena();

    // Setters
    virtual void setID(const char* nuevoID) { copiarCaracteres(ID, nuevoID, 10); }
    virtual void setContrasena(const char* nuevaContrasena) { copiarCaracteres(contrasena, nuevaContrasena, 8); }
    virtual void setNombre(const char* nuevoNombre) { copiarCaracteres(nombre, nuevoNombre, 49); }
    virtual void setApellidos(const char* nuevosApellidos) { copiarCaracteres(apellidos, nuevosApellidos, 49); }
    virtual void setDNI(const char* nuevoDNI) { copiarCaracteres(dni, nuevoDNI, 8); }
    virtual void setTelefono(const char* nuevoTelefono) { copiarCaracteres(telefono, nuevoTelefono, 14); }
    virtual void setCorreoElectronico(const char* nuevoCorreo) { copiarCaracteres(correoElectronico, nuevoCorreo, 49); }

    // Getters
    virtual const char* getID() const { return ID; }
    virtual const char* getContrasena() const { return contrasena; }
    virtual const char* getNombre() const { return nombre; }
    virtual const char* getApellidos() const { return apellidos; }
    virtual const char* getDNI() const { return dni; }
    virtual const char* getTelefono() const { return telefono; }
    virtual const char* getCorreoElectronico() const { return correoElectronico; }

    // Funciones de autenticación y archivo
    virtual bool iniciarSesion(const char* inputID, const char* inputContrasena) const;
};

#endif
