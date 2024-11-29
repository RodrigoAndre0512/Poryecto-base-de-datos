#include <iostream>
#include "menu.hpp"
#include"Inventario.hpp"
#include"cEvento.hpp"
#include"Cliente.hpp"

#ifdef _WIN32
    #include <windows.h> 
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif
int main(){
	char tipo_evento[] = "Fiesta";
    char fecha[] = "2024-10-31";
    char lugar[] = "Casa de Fabiola";
    int invitados = 20;
	int presupuesto= 1000;
    Menu men;
	men.imprimirpalabramenu();
	men.imprimir_opciones();
	return 0;
}