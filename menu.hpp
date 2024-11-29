#ifndef MENU_HPP
#define MENU_HPP
#include"Inventario.hpp"
#include"Cliente.hpp"
#include"cEvento.hpp"

class Menu{
	private:
	Inventario inventario;
	cEvento evento;
	cCliente cliente;
	public:
	void imprimirpalabramenu();
	void imprimirpersonita();
	void imprimir_opciones();
	void imprimirtodolist();
	void imprimirfoco();
	void imprimircheck();
};
#endif