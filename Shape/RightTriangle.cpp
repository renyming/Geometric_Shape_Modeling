#include "RightTriangle.h"
#include <cmath>

RightTriangle::RightTriangle(const int b, const std::string& desp, const std::string& name) :
	IsoscelesTriangle(b, b, desp, name)
{
	//user input validation
	if (b < 2)
		throw std::invalid_argument("The base of a right triangle should be larger than 2.");
}

double RightTriangle::geoPerimeter() const {
	return (2 + sqrt(2))*h;
}

int RightTriangle::sPerimeter() const {
	return 3 * (h - 1);
}

void RightTriangle::draw(Canvas & canvas, int row, int col, char foreChar, char backChar) const
{

	for (int r = 0; r < boxH(); ++r) {
		for (int c = 0; c < boxW(); ++c) {
			//each row the left most r positions are foreground
			if (c <= r)
				canvas.put(row + r, col + c, foreChar);
			else
				canvas.put(row + r, col + c, backChar);
		}
	}
}

int RightTriangle::sArea() const {
	return h * (h + 1) / 2;
}