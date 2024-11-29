#ifndef cEvento_HPP
#define cEvento_HPP

class cEvento {
private:
    char* tipo_evento;
    char* fecha;
    char* lugar;
    int num_invitados;
    double presupuesto;

    // Funciones auxiliares para manejar cadenas
    void copiarCadena(const char* origen, char* destino);

public:
    // Métodos getters
    const char* getTipoEvent() const { return tipo_evento; }
    const char* getFecha() const { return fecha; }
    const char* getLugar() const { return lugar; }
    int getNumInvi() const { return num_invitados; }
    double getPresupuesto() const { return presupuesto; }

    // Métodos setters
    void setTipoEvent(const char* tipo) { copiarCadena(tipo, tipo_evento); }
    void setFecha(const char* f) { copiarCadena(f, fecha); }
    void setLugar(const char* l) { copiarCadena(l, lugar); }
    void setNumInvi(int num) { num_invitados = num; }
    void setPresupuesto(double p) { presupuesto = p; }

    // Métodos para crear y mostrar el evento
    void crear_evento();
    void mostrar_evento() const;

    // Constructor y destructor
    cEvento();
    ~cEvento();
};

#endif
