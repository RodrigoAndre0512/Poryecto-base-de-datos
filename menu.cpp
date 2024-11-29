#include"menu.hpp"
#include"Inventario.hpp"
#include"cEvento.hpp"
#include"Cliente.hpp"
#include"ArchivoCliente.hpp"
#include <iostream>
#ifdef _WIN32
    #include <windows.h> 
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif
void Menu::imprimirpalabramenu(){
	char **palabramenu={nullptr};
	palabramenu=new char*[8];
	for (int i = 0; i < 8; i++) {
		palabramenu[i] = new char[38]; // Cada fila tiene 38 caracteres
	}
	palabramenu[0][0]=219;
	palabramenu[0][1]=255;
	palabramenu[0][2]=255;
	palabramenu[0][3]=255;
	palabramenu[0][4]=255;
	palabramenu[0][5]=255;
	palabramenu[0][6]=255;
	palabramenu[0][7]=219;
	palabramenu[0][8]=255;
	palabramenu[0][9]=255;
	palabramenu[0][10]=219;
	palabramenu[0][11]=219;
	palabramenu[0][12]=219;
	palabramenu[0][13]=219;
	palabramenu[0][14]=219;
	palabramenu[0][15]=219;
	palabramenu[0][16]=219;
	palabramenu[0][17]=219;
	palabramenu[0][18]=255;
	palabramenu[0][19]=255;
	palabramenu[0][20]=219;
	palabramenu[0][21]=219;
	palabramenu[0][22]=255;
	palabramenu[0][23]=255;
	palabramenu[0][24]=255;
	palabramenu[0][25]=255;
	palabramenu[0][26]=219;
	palabramenu[0][27]=219;
	palabramenu[0][28]=255;
	palabramenu[0][29]=255;
	palabramenu[0][30]=219;
	palabramenu[0][31]=219;
	palabramenu[0][32]=255;
	palabramenu[0][33]=255;
	palabramenu[0][34]=255;
	palabramenu[0][35]=255;
	palabramenu[0][36]=219;
	palabramenu[0][37]=219;
	palabramenu[1][0]=219;
	palabramenu[1][1]=219;
	palabramenu[1][2]=255;
	palabramenu[1][3]=255;
	palabramenu[1][4]=255;
	palabramenu[1][5]=255;
	palabramenu[1][6]=219;
	palabramenu[1][7]=219;
	palabramenu[1][8]=255;
	palabramenu[1][9]=255;
	palabramenu[1][10]=219;
	palabramenu[1][11]=219;
	palabramenu[1][12]=219;
	palabramenu[1][13]=219;
	palabramenu[1][14]=219;
	palabramenu[1][15]=219;
	palabramenu[1][16]=219;
	palabramenu[1][17]=219;
	palabramenu[1][18]=255;
	palabramenu[1][19]=255;
	palabramenu[1][20]=219;
	palabramenu[1][21]=219;
	palabramenu[1][22]=219;
	palabramenu[1][23]=219;
	palabramenu[1][24]=255;
	palabramenu[1][25]=255;
	palabramenu[1][26]=219;
	palabramenu[1][27]=219;
	palabramenu[1][28]=255;
	palabramenu[1][29]=255;
	palabramenu[1][30]=219;
	palabramenu[1][31]=219;
	palabramenu[1][32]=255;
	palabramenu[1][33]=255;
	palabramenu[1][34]=255;
	palabramenu[1][35]=255;
	palabramenu[1][36]=219;
	palabramenu[1][37]=219;
	palabramenu[2][0]=219;
	palabramenu[2][1]=219;
	palabramenu[2][2]=219;
	palabramenu[2][3]=255;
	palabramenu[2][4]=255;
	palabramenu[2][5]=219;
	palabramenu[2][6]=219;
	palabramenu[2][7]=219;
	palabramenu[2][8]=255;
	palabramenu[2][9]=255;
	palabramenu[2][10]=219;
	palabramenu[2][11]=255;
	palabramenu[2][12]=255;
	palabramenu[2][13]=255;
	palabramenu[2][14]=255;
	palabramenu[2][15]=255;
	palabramenu[2][16]=255;
	palabramenu[2][17]=255;
	palabramenu[2][18]=255;
	palabramenu[2][19]=255;
	palabramenu[2][20]=219;
	palabramenu[2][21]=219;
	palabramenu[2][22]=219;
	palabramenu[2][23]=219;
	palabramenu[2][24]=255;
	palabramenu[2][25]=255;
	palabramenu[2][26]=219;
	palabramenu[2][27]=219;
	palabramenu[2][28]=255;
	palabramenu[2][29]=255;
	palabramenu[2][30]=219;
	palabramenu[2][31]=219;
	palabramenu[2][32]=255;
	palabramenu[2][33]=255;
	palabramenu[2][34]=255;
	palabramenu[2][35]=255;
	palabramenu[2][36]=219;
	palabramenu[2][37]=219;
	palabramenu[3][0]=219;
	palabramenu[3][1]=219;
	palabramenu[3][2]=255;
	palabramenu[3][3]=219;
	palabramenu[3][4]=219;
	palabramenu[3][5]=255;
	palabramenu[3][6]=219;
	palabramenu[3][7]=219;
	palabramenu[3][8]=255;
	palabramenu[3][9]=255;
	palabramenu[3][10]=219;
	palabramenu[3][11]=219;
	palabramenu[3][12]=219;
	palabramenu[3][13]=219;
	palabramenu[3][14]=219;
	palabramenu[3][15]=255;
	palabramenu[3][16]=255;
	palabramenu[3][17]=255;
	palabramenu[3][18]=255;
	palabramenu[3][19]=255;
	palabramenu[3][20]=219;
	palabramenu[3][21]=219;
	palabramenu[3][22]=255;
	palabramenu[3][23]=219;
	palabramenu[3][24]=219;
	palabramenu[3][25]=255;
	palabramenu[3][26]=219;
	palabramenu[3][27]=219;
	palabramenu[3][28]=255;
	palabramenu[3][29]=255;
	palabramenu[3][30]=219;
	palabramenu[3][31]=219;
	palabramenu[3][32]=255;
	palabramenu[3][33]=255;
	palabramenu[3][34]=255;
	palabramenu[3][35]=255;
	palabramenu[3][36]=219;
	palabramenu[3][37]=219;
	palabramenu[4][0]=219;
	palabramenu[4][1]=219;
	palabramenu[4][2]=255;
	palabramenu[4][3]=255;
	palabramenu[4][4]=255;
	palabramenu[4][5]=255;
	palabramenu[4][6]=219;
	palabramenu[4][7]=219;
	palabramenu[4][8]=255;
	palabramenu[4][9]=255;
	palabramenu[4][10]=219;
	palabramenu[4][11]=219;
	palabramenu[4][12]=219;
	palabramenu[4][13]=219;
	palabramenu[4][14]=219;
	palabramenu[4][15]=255;
	palabramenu[4][16]=255;
	palabramenu[4][17]=255;
	palabramenu[4][18]=255;
	palabramenu[4][19]=255;
	palabramenu[4][20]=219;
	palabramenu[4][21]=219;
	palabramenu[4][22]=255;
	palabramenu[4][23]=255;
	palabramenu[4][24]=219;
	palabramenu[4][25]=219;
	palabramenu[4][26]=219;
	palabramenu[4][27]=219;
	palabramenu[4][28]=255;
	palabramenu[4][29]=255;
	palabramenu[4][30]=219;
	palabramenu[4][31]=219;
	palabramenu[4][32]=255;
	palabramenu[4][33]=255;
	palabramenu[4][34]=255;
	palabramenu[4][35]=255;
	palabramenu[4][36]=219;
	palabramenu[4][37]=219;
	palabramenu[5][0]=219;
	palabramenu[5][1]=219;
	palabramenu[5][2]=255;
	palabramenu[5][3]=255;
	palabramenu[5][4]=255;
	palabramenu[5][5]=255;
	palabramenu[5][6]=219;
	palabramenu[5][7]=219;
	palabramenu[5][8]=255;
	palabramenu[5][9]=255;
	palabramenu[5][10]=219;
	palabramenu[5][11]=255;
	palabramenu[5][12]=255;
	palabramenu[5][13]=255;
	palabramenu[5][14]=255;
	palabramenu[5][15]=255;
	palabramenu[5][16]=255;
	palabramenu[5][17]=255;
	palabramenu[5][18]=255;
	palabramenu[5][19]=255;
	palabramenu[5][20]=219;
	palabramenu[5][21]=219;
	palabramenu[5][22]=255;
	palabramenu[5][23]=255;
	palabramenu[5][24]=255;
	palabramenu[5][25]=219;
	palabramenu[5][26]=219;
	palabramenu[5][27]=219;
	palabramenu[5][28]=255;
	palabramenu[5][29]=255;
	palabramenu[5][30]=219;
	palabramenu[5][31]=219;
	palabramenu[5][32]=255;
	palabramenu[5][33]=255;
	palabramenu[5][34]=255;
	palabramenu[5][35]=255;
	palabramenu[5][36]=219;
	palabramenu[5][37]=219;
	palabramenu[6][0]=219;
	palabramenu[6][1]=219;
	palabramenu[6][2]=255;
	palabramenu[6][3]=255;
	palabramenu[6][4]=255;
	palabramenu[6][5]=255;
	palabramenu[6][6]=219;
	palabramenu[6][7]=219;
	palabramenu[6][8]=255;
	palabramenu[6][9]=255;
	palabramenu[6][10]=219;
	palabramenu[6][11]=219;
	palabramenu[6][12]=219;
	palabramenu[6][13]=219;
	palabramenu[6][14]=219;
	palabramenu[6][15]=219;
	palabramenu[6][16]=219;
	palabramenu[6][17]=219;
	palabramenu[6][18]=255;
	palabramenu[6][19]=255;
	palabramenu[6][20]=219;
	palabramenu[6][21]=219;
	palabramenu[6][22]=255;
	palabramenu[6][23]=255;
	palabramenu[6][24]=255;
	palabramenu[6][25]=219;
	palabramenu[6][26]=219;
	palabramenu[6][27]=219;
	palabramenu[6][28]=255;
	palabramenu[6][29]=255;
	palabramenu[6][30]=219;
	palabramenu[6][31]=219;
	palabramenu[6][32]=219;
	palabramenu[6][33]=219;
	palabramenu[6][34]=219;
	palabramenu[6][35]=219;
	palabramenu[6][36]=219;
	palabramenu[6][37]=219;
	palabramenu[7][0]=219;
	palabramenu[7][1]=219;
	palabramenu[7][2]=255;
	palabramenu[7][3]=255;
	palabramenu[7][4]=255;
	palabramenu[7][5]=255;
	palabramenu[7][6]=219;
	palabramenu[7][7]=219;
	palabramenu[7][8]=255;
	palabramenu[7][9]=255;
	palabramenu[7][10]=219;
	palabramenu[7][11]=219;
	palabramenu[7][12]=219;
	palabramenu[7][13]=219;
	palabramenu[7][14]=219;
	palabramenu[7][15]=219;
	palabramenu[7][16]=219;
	palabramenu[7][17]=219;
	palabramenu[7][18]=255;
	palabramenu[7][19]=255;
	palabramenu[7][20]=219;
	palabramenu[7][21]=219;
	palabramenu[7][22]=255;
	palabramenu[7][23]=255;
	palabramenu[7][24]=255;
	palabramenu[7][25]=255;
	palabramenu[7][26]=219;
	palabramenu[7][27]=219;
	palabramenu[7][28]=255;
	palabramenu[7][29]=255;
	palabramenu[7][30]=219;
	palabramenu[7][31]=219;
	palabramenu[7][32]=219;
	palabramenu[7][33]=219;
	palabramenu[7][34]=219;
	palabramenu[7][35]=219;
	palabramenu[7][36]=219;
	palabramenu[7][37]=219; 
	std::system(CLEAR_COMMAND);
	std::cout << "\x1B[38;5;226m";
	std::cout<<"***********************************************************************************************";
	for(int i=0;i<8;i++){
		for(int j=0;j<38;j++){
			if(i==0&&j==0){
				std::cout<<"\n\n\n\t\t\t"<<palabramenu[i][j];
			}
			else{
				if(j==0&&i!=0){
					std::cout<<"\t\t\t"<<palabramenu[i][j];
				}
				else{
					std::cout<<palabramenu[i][j];
				};
			};
			
		};
		std::cout<<std::endl;
	};
	std::cout<<"\n\n\n\n\n";
	std::cout<<"***********************************************************************************************";
	std::cout << "\x1B[0m\n";
	for (int i = 0; i < 8; i++) {
    delete[] palabramenu[i];
	}
	delete[] palabramenu;
	
}
void Menu::imprimirpersonita(){
	char **personita = nullptr;
    personita = new char*[9];
    for (int i = 0; i < 9; i++) {
        personita[i] = new char[9];
    }

    // Asignar valores (en este caso, representando colores en la matriz)
    personita[0][0] = 255; personita[0][1] = 255; personita[0][2] = 255; personita[0][3] = 219;
    personita[0][4] = 219; personita[0][5] = 219; personita[0][6] = 255; personita[0][7] = 255;
    personita[0][8] = 255;

    personita[1][0] = 255; personita[1][1] = 255; personita[1][2] = 219; personita[1][3] = 219;
    personita[1][4] = 219; personita[1][5] = 219; personita[1][6] = 219; personita[1][7] = 255;
    personita[1][8] = 255;

    personita[2][0] = 255; personita[2][1] = 219; personita[2][2] = 219; personita[2][3] = 219;
    personita[2][4] = 219; personita[2][5] = 219; personita[2][6] = 219; personita[2][7] = 219;
    personita[2][8] = 255;

    personita[3][0] = 255; personita[3][1] = 219; personita[3][2] = 219; personita[3][3] = 219;
    personita[3][4] = 219; personita[3][5] = 219; personita[3][6] = 219; personita[3][7] = 219;
    personita[3][8] = 255;

    personita[4][0] = 255; personita[4][1] = 219; personita[4][2] = 219; personita[4][3] = 219;
    personita[4][4] = 219; personita[4][5] = 219; personita[4][6] = 219; personita[4][7] = 219;
    personita[4][8] = 255;

    personita[5][0] = 255; personita[5][1] = 255; personita[5][2] = 219; personita[5][3] = 219;
    personita[5][4] = 219; personita[5][5] = 219; personita[5][6] = 219; personita[5][7] = 255;
    personita[5][8] = 255;

    personita[6][0] = 219; personita[6][1] = 219; personita[6][2] = 219; personita[6][3] = 219;
    personita[6][4] = 219; personita[6][5] = 219; personita[6][6] = 219; personita[6][7] = 219;
    personita[6][8] = 219;

    personita[7][0] = 219; personita[7][1] = 219; personita[7][2] = 219; personita[7][3] = 219;
    personita[7][4] = 219; personita[7][5] = 219; personita[7][6] = 219; personita[7][7] = 219;
    personita[7][8] = 219;

    personita[8][0] = 219; personita[8][1] = 219; personita[8][2] = 219; personita[8][3] = 219;
    personita[8][4] = 219; personita[8][5] = 219; personita[8][6] = 219; personita[8][7] = 219;
    personita[8][8] = 219;

    std::system(CLEAR_COMMAND);  // Limpiar la pantalla

    // Imprimir la matriz con colores
    for (int i = 0; i < 9; i++) {
        std::cout<<"\t";
		for (int j = 0; j < 9; j++) {
            if ((i == 2 && j == 3) || (i == 2 && j == 5)) {
                std::cout << "\x1B[38;5;160m" << personita[i][j]; 
            }
            else if (i == 5) {
                std::cout << "\x1B[38;5;28m" << personita[i][j];  
            }
            else if (i == 6 || i == 7 || i == 8) {
                std::cout << "\x1B[38;5;48m" << personita[i][j]; 
            }
            else {
                std::cout << "\x1B[38;5;222m" << personita[i][j];  
            }
        }
        std::cout << "\x1B[0m\n";  
    }

    // Liberar la memoria
    for (int i = 0; i < 9; i++) {
        delete[] personita[i];
    }
    delete[] personita;
}
void Menu::imprimirtodolist(){
	char **ToDoList={nullptr};
	ToDoList=new char*[8];
	for (int i=0;i<8;i++){
	   ToDoList[i]=new char[10];
	}
	for(int i=0;i<8;i++){
	   for(int j=0;j<10;j++){
		   ToDoList[i][j]=219;
	   };
	};
	std::system(CLEAR_COMMAND);
	for(int i=0;i<8;i++){
	   std::cout<<"\t";
	   for(int j=0;j<10;j++){
		   if(j==0){
			   std::cout<<"\x1B[38;5;196m"<<ToDoList[i][j];
		   }
		   else if ((i==1&&j==2)||(i==3&&j==2)||(i==5&&j==2)){
			   std::cout << "\x1B[38;5;244m" << ToDoList[i][j]; 
		   }
		   else if ((i==1||i==3||i==5)&&(j==4||j==5||j==6||j==7||j==8)){
			   std::cout << "\x1B[38;5;251m" << ToDoList[i][j];
		   }
		   else{
			   std::cout << "\x1B[38;5;255m" << ToDoList[i][j];
		   };
	   };
	   std::cout << "\x1B[0m\n";
	}
	for (int i = 0; i <8; i++) {
        delete[] ToDoList[i];
    }
	delete[]ToDoList;

}
void Menu::imprimirfoco(){
	char **foco={nullptr};
	foco=new char*[10];
	for (int i=0;i<10;i++){
		foco[i]=new char[7];
	}
	foco[0][0]=255;	foco[1][0]=255;
	foco[0][1]=255;	foco[1][1]=255;
	foco[0][2]=255;	foco[1][2]=219;
	foco[0][3]=219;	foco[1][3]=219;
	foco[0][4]=255;	foco[1][4]=219;
	foco[0][5]=255;	foco[1][5]=255;
	foco[0][6]=255;	foco[1][6]=255;
	
	foco[2][0]=255;	foco[3][0]=219;
	foco[2][1]=219;	foco[3][1]=219;
	foco[2][2]=219;	foco[3][2]=219;
	foco[2][3]=219;	foco[3][3]=219;
	foco[2][4]=219;	foco[3][4]=219;
	foco[2][5]=219;	foco[3][5]=219;
	foco[2][6]=255;	foco[3][6]=219;
	
	foco[4][0]=219;	foco[5][0]=219;
	foco[4][1]=219;	foco[5][1]=219;
	foco[4][2]=219;	foco[5][2]=219;
	foco[4][3]=219;	foco[5][3]=219;
	foco[4][4]=219;	foco[5][4]=219;
	foco[4][5]=219;	foco[5][5]=219;
	foco[4][6]=219;	foco[5][6]=219;
	
	foco[6][0]=255;	foco[7][0]=255;
	foco[6][1]=219;	foco[7][1]=255;
	foco[6][2]=219;	foco[7][2]=219;
	foco[6][3]=219;	foco[7][3]=219;
	foco[6][4]=219;	foco[7][4]=219;
	foco[6][5]=219;	foco[7][5]=255;
	foco[6][6]=255;	foco[7][6]=255;

	foco[8][0]=255;	foco[9][1]=255;
	foco[8][1]=255;	foco[9][0]=255;
	foco[8][2]=219;	foco[9][2]=219;
	foco[8][3]=219;	foco[9][3]=219;
	foco[8][4]=219;	foco[9][4]=219;
	foco[8][5]=255;	foco[9][5]=255;
	foco[8][6]=255;	foco[9][6]=255;
	std::system(CLEAR_COMMAND);
	for(int i=0;i<10;i++){
		std::cout<<"\t";
		for(int j=0;j<7;j++){
			if (i==8||i==9){std::cout<<"\x1B[38;5;245m"<<foco[i][j];}
			else if(i==0){std::cout<<"\x1B[38;5;232m"<<foco[i][j];}
			else{std::cout<<"\x1B[38;5;190m"<<foco[i][j];};
		};
		std::cout << "\x1B[0m\n";
	}
   	for (int i = 0; i < 10; i++) {
        delete[] foco[i];
    }
	delete[]foco;
}
void Menu::imprimircheck(){
	char**check={nullptr};
	check=new char*[6];
	for(int i=0;i<6;i++){
		check[i]=new char[8];
	}
	check[0][0]=255;
	check[0][1]=255;
	check[0][2]=255;
	check[0][3]=255;
	check[0][4]=255;
	check[0][5]=255;
	check[0][6]=255;
	check[0][7]=219;
	check[1][0]=255;
	check[1][1]=255;
	check[1][2]=255;
	check[1][3]=255;
	check[1][4]=255;
	check[1][5]=255;
	check[1][6]=219;
	check[1][7]=255;
	check[2][0]=255;
	check[2][1]=255;
	check[2][2]=255;
	check[2][3]=255;
	check[2][4]=255;
	check[2][5]=219;
	check[2][6]=255;
	check[2][7]=255;
	check[3][0]=219;
	check[3][1]=255;
	check[3][2]=255;
	check[3][3]=255;
	check[3][4]=219;
	check[3][5]=255;
	check[3][6]=255;
	check[3][7]=255;
	check[4][0]=255;
	check[4][1]=219;
	check[4][2]=255;
	check[4][3]=219;
	check[4][4]=255;
	check[4][5]=255;
	check[4][6]=255;
	check[4][7]=255;
	check[5][0]=255;
	check[5][1]=255;
	check[5][2]=219;
	check[5][3]=255;
	check[5][4]=255;
	check[5][5]=255;
	check[5][6]=255;
	check[5][7]=255;
	std::system(CLEAR_COMMAND);
	for (int i=0;i<6;i++){
		std::cout<<"\t";
		for(int j=0;j<8;j++){
			std::cout<<"\x1B[38;5;34m"<<check[i][j];
		}
		std::cout<<"\n";
	}
	std::cout << "\x1B[0m";
	for (int i = 0; i < 6; i++) {
        delete[] check[i];
    }
	delete[]check;
}
void Menu::imprimir_opciones(){
	int opcion;
	do {
		std::cout << "\n\tSELECCIONA UN ITEM:\n";
		std::cout << "\t1. CLIENTE\n";
		std::cout << "\t2. EVENTO\n";
		std::cout << "\t3. INVENTARIO\n";
		std::cout << "\t4. SALIR\n";
		std::cout << "\tITEM ELEGIDO: ";
		std::cin >> opcion;

		switch (opcion) {
			case 1:
				imprimirpersonita();
				std::cout << "\t1. CREAR CLIENTE\n";
				std::cout << "\t2. IMPRIMIR INFORMACION DE CLIENTE\n";
				std::cout << "\tITEM ELEGIDO: ";
				std::cin >> opcion;
				switch (opcion){
					case 1:
						cliente.crearCliente();
						break;
					case 2:
						cliente.mostrarInfoCliente();
						break;
					default: 
					std::cout<<"\tOpcion no válida. Inténtalo de nuevo.\n";
				};
				break;
			case 2:
				imprimirfoco();
				std::cout<<"\t1. CREAR EVENTO\n";
				std::cout<<"\t2. IMPRIMIR INFORMACION DE EVENTO\n";
				std::cout<<"\tITEM ELEGIDO: ";
				std::cin >> opcion;
				switch (opcion){
					case 1:
						evento.crear_evento();
						break;
					case 2:
						evento.mostrar_evento();
						break;
					default: 
					std::cout<<"\tOpcion no válida. Inténtalo de nuevo.\n";
				};
				break;
			case 3:
				imprimirtodolist();
				std::cout << "\t1. MODIFICAR INVENTARIO\n";
				std::cout << "\t2. IMPRIMIR INVENTARIO\n";
				std::cout << "\tITEM ELEGIDO: ";
				std::cin >> opcion;
				switch (opcion){
					case 1:
						inventario.modificarInventario();
						break;
					case 2:
						inventario.mostrarInventario();
						break;
					default: 
					std::cout<<"\tOpcion no valida. Inténtalo de nuevo.\n";
				};
				break;
			case 4:
				std::cout << "\tSaliendo...\n";
				break;
			default:
				std::cout << "\tOpcion no valida. Inténtalo de nuevo.\n";
		}
		std::cout << std::endl;
	} while (opcion != 4);
}