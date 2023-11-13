#include "Circle.h"
#include "Rectangle.h"

int main(){

	IShape* circle = new Circle();
	IShape* rectangle = new Rectangle();

	circle->size();
	rectangle->size();

	circle->draw();
	rectangle->draw();

	delete circle;
	delete rectangle;

	return 0;
}