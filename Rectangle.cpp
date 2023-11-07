#include "Rectangle.h"

void Rectangle::size(){

	area_ = width_ * height_;

}

void Rectangle::draw(){

	printf("矩形の面積は%f\n", area_);

}