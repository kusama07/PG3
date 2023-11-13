#pragma once
#include "Ishape.h"
#include <stdio.h>

class Circle : public IShape{

public:
	void size() override;

	void draw() override;
private:
	float radius_ = 3.0f;

	float area_ = 0.0f;

};
