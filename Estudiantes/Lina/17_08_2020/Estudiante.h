#include <iostream> // entrada y salida de datos
#include <conio.h>	//para la funci?n getch() para que no se cierren
#include <stdlib.h> // system("pause")
#include <string.h>	//cadenas de caracteres
#include <fstream> // file stream



using namespace std;// estandar de c++ std::cout



void DatosEstudiante(string _codigo){
	char txtEstudiante[]="Estudiantes.txt";
	Leer(txtEstudiante,_codigo);
}
