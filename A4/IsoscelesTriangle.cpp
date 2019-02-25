#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int b, int h, const std::string& desp, const std::string& name) :
	Shape(desp, name),
	b{ b },
	h{ h } {}

double IsoscelesTriangle::geoArea() const {
	return h * b / 2.0;
}

int IsoscelesTriangle::boxH() const { return h; }

int IsoscelesTriangle::boxW() const { return b; }