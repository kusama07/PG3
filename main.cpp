#include "Circle.h"
#include "Rectangle.h"

int main(){

	Ishape* circle = new Circle();
	Ishape* rectangle = new Rectangle();

	circle->size();
	rectangle->size();

	circle->draw();
	rectangle->draw();

	delete circle;
	delete rectangle;

	return 0;
}