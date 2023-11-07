#include "Circle.h"

void Circle::size(){

	area_ = radius_ * radius_ * 3.14f;

}

void Circle::draw(){

	printf("円の面積は%f\n", area_);

}