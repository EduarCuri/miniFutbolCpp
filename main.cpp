#include "miniwin.h"
using namespace miniwin;

int main() {
//	dimension de la pantalla
	vredimensiona(600, 400);
	
//	campo de futbol
	color_rgb(23,192,34);
	rectangulo_lleno(0, 0, 600, 400);
	
//	esquinas
	color(BLANCO);
	circulo(10, 10, 20);
	circulo(590, 10, 20);
	circulo(10, 390, 20);
	circulo(590, 390, 20);
	
//	campo de juego
	color_rgb(23,192,34);
	rectangulo_lleno(0, 0, 600, 10);
	rectangulo_lleno(0, 0, 10, 400);
	rectangulo_lleno(0, 390, 600, 400);
	rectangulo_lleno(590, 0, 600, 400);
	color(BLANCO);
	rectangulo(10, 10, 590, 390);
	
//	primera porteria
	circulo(110, 200, 50);
	color_rgb(23,192,34);
	rectangulo_lleno(10, 100, 110, 300);
	color(BLANCO);
	rectangulo(10, 100, 110, 300);
	rectangulo(10, 160, 50,  240);
	circulo_lleno(80, 200, 6);
	rectangulo(0, 180, 10, 220);
	
//	segunda porteria
	circulo(490, 200, 50);
	color_rgb(23,192,34);
	rectangulo_lleno(490, 100, 590, 300);
	color(BLANCO);
	rectangulo(490, 100, 590, 300);
	rectangulo(550, 160, 590, 240);
	circulo_lleno(520, 200, 6);
	rectangulo(590, 180, 600, 220);

//	medio campo
	circulo(300, 200, 30);
	circulo_lleno(300, 200, 10);
	linea(300, 10, 300, 390);
	
	
	refresca();
	return 0;
}
