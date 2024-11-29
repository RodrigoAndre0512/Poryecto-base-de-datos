#include "Inventario.hpp"
#include <iostream>
Inventario::Inventario() {
    num_mesas = new int(200);
    num_mantel = new int(200);
    num_tenedor = new int(500);
    num_cuchillos = new int(500);
    num_platos = new int(250);
    vino = new int(20);
    whisky = new int(20);
    num_copas = new int(200);
    num_servilletas = new int(20);
    num_arreglos = new int(100);
    mesa_principal = new int(5);
    personal_dis = new int(150);
    maes_cere = new int(5);
    Djs = new int(5);
}
Inventario::Inventario(int num_mesas_in, int num_mantel_in, int num_tenedor_in, int num_cuchillos_in, int num_platos_in, int vino_in, int whisky_in, 
                       int num_copas_in, int num_servilletas_in, int num_arreglos_in, int mesa_principal_in, int personal_dis_in, int maes_cere_in, int Djs_in) {
    num_mesas = new int(num_mesas_in);
    num_mantel = new int(num_mantel_in);
    num_tenedor = new int(num_tenedor_in);
    num_cuchillos = new int(num_cuchillos_in);
    num_platos = new int(num_platos_in);
    vino = new int(vino_in);
    whisky = new int(whisky_in);
    num_copas = new int(num_copas_in);
    num_servilletas = new int(num_servilletas_in);
    num_arreglos = new int(num_arreglos_in);
    mesa_principal = new int(mesa_principal_in);
    personal_dis = new int(personal_dis_in);
    maes_cere = new int(maes_cere_in);
    Djs = new int(Djs_in);
}
Inventario::~Inventario() {
    delete num_mesas;
    delete num_mantel;
    delete num_tenedor;
    delete num_cuchillos;
    delete num_platos;
    delete vino;
    delete whisky;
    delete num_copas;
    delete num_servilletas;
    delete num_arreglos;
    delete mesa_principal;
    delete personal_dis;
    delete maes_cere;
    delete Djs;
}
bool Inventario::destinar(int opcion, int cantidad) {
    if (cantidad < 0) {
        std::cout << "La cantidad no puede ser negativa.\n";
        return false;
    }

    switch (opcion) {
        case 1:
            if (*num_mesas >= cantidad) {
                *num_mesas -= cantidad;
                int numero= getNumMesas();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 2:
            if (*num_mantel >= cantidad) {
                *num_mantel -= cantidad;
                int numero= getNumMantel();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 3:
            if (*num_tenedor >= cantidad) {
                *num_tenedor -= cantidad;
                int numero= getNumTenedor();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 4:
            if (*num_cuchillos >= cantidad) {
                *num_cuchillos -= cantidad;
                int numero= getNumCuchillos();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 5:
            if (*num_platos >= cantidad) {
                *num_platos -= cantidad;
                int numero= getNumPlatos();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 6:
            if (*vino >= cantidad) {
                *vino -= cantidad;
                int numero= getVino();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 7:
            if (*whisky >= cantidad) {
                *whisky -= cantidad;
                int numero= getWhisky();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 8:
            if (*num_copas >= cantidad) {
                *num_copas -= cantidad;
                int numero= getNumCopas();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 9:
            if (*num_servilletas >= cantidad) {
                *num_servilletas -= cantidad;
                int numero= getNumServilletas();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 10:
            if (*num_arreglos >= cantidad) {
                *num_arreglos -= cantidad;
                int numero= getNumArreglos();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 11:
            if (*personal_dis >= cantidad) {
                *personal_dis -= cantidad;
                int numero= getPersonalDisponible();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 12:
            if (*mesa_principal >= cantidad) {
                *mesa_principal -= cantidad;
                int numero= getMesaPrincipal();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 13:
            if (*maes_cere >= cantidad) {
                *maes_cere -= cantidad;
                int numero= getMaestrosCeremonia();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        case 14:
            if (*Djs >= cantidad) {
                *Djs -= cantidad;
                int numero= getDjs();
                std::cout<<"El numero de mesas disponibles ahora son:"<<numero<<std::endl;
                return true;
            }
            break;
        default:
            std::cout << "Opción no válida.\n";
            return false;
    }

    std::cout << "Cantidad insuficiente del recurso seleccionado.\n";
    return false;
}
void Inventario::mostrarInventario() {
    std::cout << "Inventario actual:\n";
    std::cout << "Mesas: " << *num_mesas << "\n";
    std::cout << "Manteles: " << *num_mantel << "\n";
    std::cout << "Tenedores: " << *num_tenedor << "\n";
    std::cout << "Cuchillos: " << *num_cuchillos << "\n";
    std::cout << "Platos: " << *num_platos << "\n";
    std::cout << "Vino: " << *vino << "\n";
    std::cout << "Whisky: " << *whisky << "\n";
    std::cout << "Copas en total: " << *num_copas << "\n";
    std::cout << "Servilletas: " << *num_servilletas << "\n";
    std::cout << "Arreglos: " << *num_arreglos << "\n";
    std::cout << "Personal disponible: " << *personal_dis << "\n";
    std::cout << "Mesas principales: " << *mesa_principal << "\n";
    std::cout << "Maestros de ceremonia: " << *maes_cere << "\n";
    std::cout << "DJs: " << *Djs << "\n";
}
void Inventario::setNumMesas(int mesas){
	if (mesas>0 ||mesas==0){
		*num_mesas=mesas;
	}
	else{
		std::cout<<"El numero de mesas no puede ser negativo\n";
	};
}
void Inventario::setNumMantel(int manteles){
	if(manteles>0 ||manteles==0)*num_mantel=manteles;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumTenedor(int tenedores){
	if(tenedores>0||tenedores==0)*num_tenedor=tenedores;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumCuchillos(int cuchillos){
	if(cuchillos>0||cuchillos==0)*num_cuchillos=cuchillos;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumPlatos(int platos){
	if(platos>0||platos==0)*num_platos=platos;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setVino(int vinos){
	if(vinos>0||vinos==0) *vino=vinos;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setWhisky(int whiskys){
	if(whiskys>0||whiskys==0) *whisky=whiskys;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumCopas(int copas){
	if(copas>0||copas==0) *num_copas=copas;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumServilletas(int servilletas){
	if(servilletas>0||servilletas==0) *num_servilletas=servilletas;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setNumArreglos(int arreglos){
	if(arreglos>0||arreglos==0) *num_arreglos=arreglos;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setMesaPrincipal(int mesasprincipales){
	if(mesasprincipales>0|| mesasprincipales==0) *mesa_principal=mesasprincipales;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setPersonalDisponible(int personaldisponible){
	if(personaldisponible>0||personaldisponible==0)*personal_dis=personaldisponible;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::setMaestrosCeremonia(int maestrosceremonias){
	if(maestrosceremonias>0||maestrosceremonias==0)*maes_cere=maestrosceremonias;
	else std::cout<<"El numero de mesas no puede ser negativo\n"; 
}
void Inventario::setDjs(int nDjs){
	if(nDjs>0||nDjs==0)*Djs=nDjs;
	else std::cout<<"El numero de mesas no puede ser negativo\n";
}
void Inventario::modificarInventario(){
	int mesas,manteles,tenedores,cuchillos,platos,vinos,whiskys,copas,servilletas,arreglos,
	mesasprincipales,personaldisponible,maestrosceremonias,nDjs;
	std::cout<<"\nIngrese el numero de mesas: ";
	std::cin>>mesas;
	std::cout<<"\nIngrese el numero de manteles: ";
	std::cin>>manteles;
	std::cout<<"\nIngrese el numero de tenedores: ";
	std::cin>>tenedores;
	std::cout<<"\nIngrese el numero de cuchillos: ";
	std::cin>>cuchillos;
	std::cout<<"\nIngrese el numero de platos: ";
	std::cin>>platos;
	std::cout<<"\nIngrese el numero de vinos: ";
	std::cin>>vinos;
	std::cout<<"\nIngrese el numero de whiskys: ";
	std::cin>>whiskys;
	std::cout<<"\nIngrese el numero de copas: ";
	std::cin>>copas;
	std::cout<<"\nIngrese el numero de servilletas: ";
	std::cin>>servilletas;
	std::cout<<"\nIngrese el numero de arreglos: ";
	std::cin>>arreglos;
	std::cout<<"\nIngrese el numero de mesas principales: ";
	std::cin>>mesasprincipales;
	std::cout<<"\nIngrese el numero de personal disponible: ";
	std::cin>>personaldisponible;
	std::cout<<"\nIngrese el numero de maestros de ceremonia: ";
	std::cin>>maestrosceremonias;
	std::cout<<"\nIngrese el numero de Djs: ";
	std::cin>>nDjs;
	setNumMesas(mesas);
	setNumMantel( manteles);
	setNumTenedor(tenedores);
	setNumCuchillos( cuchillos);
	setNumPlatos( platos);
	setVino( vinos);
	setWhisky( whiskys);
	setNumCopas( copas);
	setNumServilletas( servilletas);
	setNumArreglos(arreglos);
	setMesaPrincipal(mesasprincipales);
	setPersonalDisponible(personaldisponible);
	setMaestrosCeremonia(maestrosceremonias);
	setDjs(nDjs);
	std::cout<<"INVENTARIO MODIFICADO: \n";
	std::cout<<"MESAS: "<<getNumMesas();
	std::cout<<"\nMANTELES: "<<getNumMantel();
	std::cout<<"\nTENEDORES: "<<getNumTenedor();
	std::cout<<"\nCUCHILLOS: "<<getNumCuchillos();
	std::cout<<"\nPLATOS: "<<getNumPlatos();
	std::cout<<"\nBOTELLAS DE VINO: "<<getVino();
	std::cout<<"\nWHISKY: "<<getWhisky();
	std::cout<<"\nCOPAS: "<<getNumCopas();
	std::cout<<"\nSERVILLETAS: "<<getNumServilletas();
	std::cout<<"\nARREGLOS: "<<getNumArreglos();
	std::cout<<"\nMESAS PRINCIPALES: "<<getMesaPrincipal();
	std::cout<<"\nPERSONAL DISPONIBLE: "<<getPersonalDisponible();
	std::cout<<"\nMAESTROS DE CEREMONIA: "<<getMaestrosCeremonia();
	std::cout<<"\nDJS: "<<getDjs();
}