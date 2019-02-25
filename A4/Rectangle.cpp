#include "Rectangle.h"

Rectangle::Rectangle(int w, int h, const std::string & desp, const std::string & name) :
	Shape(desp, name),
	w{ w },
	h{ h } 
{	//user input validation
	if (w < 1 || h < 1)
		throw std::invalid_argument("The height/width of rectangle should be larger than 2.");
}

double Rectangle::geoArea() const
{
	return h*w;
}

int Rectangle::boxH() const
{
	return h;
}

int Rectangle::boxW() const
{
	return w;
}

double Rectangle::geoPerimeter() const
{
	return 2*(h+w);
}

int Rectangle::sArea() const
{
	return h*w;
}

int Rectangle::sPerimeter() const
{
	return 2 * (h + w) - 4;
}

void Rectangle::draw(Canvas & canvas, int row, int col, char foreChar, char backChar) const
{
	for (int r = 0; r < h; ++r) {
		for (int c = 0; c < w; ++c) {
			canvas.put(row + r, col + c, foreChar);
		}
	}
}
