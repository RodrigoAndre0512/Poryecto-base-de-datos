#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

#include <iostream>

class Inventario {
private:
    int* num_mesas;        // número de mesas
    int* num_mantel;       // número de manteles
    int* num_tenedor;      // número de tenedores
    int* num_cuchillos;    // número de cuchillos
    int* num_platos;       // número de platos
    int* vino;             // número de botellas de vino
    int* whisky;           // número de botellas de whisky
    int* num_copas;        // número de copas
    int* num_servilletas;  // número de servilletas
    int* num_arreglos;     // número de arreglos
    int* mesa_principal;   // número de mesas principales
    int* personal_dis;     // personal disponible
    int* maes_cere;        // maestros de ceremonia
    int* Djs;              // DJs

public:
    bool destinar(int opcion, int cantidad);
    void mostrarInventario();
    //Métodos get
    int getNumMesas() const { return *num_mesas; }
    int getNumMantel() const { return *num_mantel; }
    int getNumTenedor() const { return *num_tenedor; }
    int getNumCuchillos() const { return *num_cuchillos; }
    int getNumPlatos() const { return *num_platos; }
    int getVino() const { return *vino; }
    int getWhisky() const { return *whisky; }
    int getNumCopas() const { return *num_copas; }
    int getNumServilletas() const { return *num_servilletas; }
    int getNumArreglos() const { return *num_arreglos; }
    int getMesaPrincipal() const { return *mesa_principal; }
    int getPersonalDisponible() const { return *personal_dis; }
    int getMaestrosCeremonia() const { return *maes_cere; }
    int getDjs() const { return *Djs; }
	//Métodos set
    void setNumMesas(int mesas);
    void setNumMantel(int manteles);
    void setNumTenedor(int tenedores); 
    void setNumCuchillos(int cuchillos);
    void setNumPlatos(int platos);
    void setVino(int vinos);
    void setWhisky(int whiskys);
    void setNumCopas(int copas);
    void setNumServilletas(int servilletas);
    void setNumArreglos(int arreglos);
    void setMesaPrincipal(int mesasprincipales);
    void setPersonalDisponible(int personaldisponible);
    void setMaestrosCeremonia(int maestrosceremonias);
    void setDjs(int nDjs);
	//Función para modificar inventario
    void modificarInventario();
    // Constructores
    Inventario();
    Inventario(int num_mesas, int num_mantel, int num_tenedor, int num_cuchillos, int num_platos, int vino, int whisky, int num_copas, int num_servilletas, int num_arreglos, int mesa_principal, int personal_dis, int maes_cere, int Djs);
    
    // Destructor
    ~Inventario();
};

#endif

