#include "Rhombus.h"
#include <cmath>

Rhombus::Rhombus(int d, const std::string & desp, const std::string & name) :
	Shape(desp, name),
	d{ (d % 2 == 0 ? d + 1 : d) }
{
	//user input validation
	if (d < 3)
		throw std::invalid_argument("The d of rhombus should be larger than 3");
}

double Rhombus::geoArea() const
{
	return pow(d, 2) / 2.0;
}

int Rhombus::boxH() const
{
	return d;
}

int Rhombus::boxW() const
{
	return d;
}

double Rhombus::geoPerimeter() const
{
	return 2 * sqrt(2)*d;
}

int Rhombus::sArea() const
{
	double n = floor(d / 2.0);
	return static_cast<int>(2 * n*(n + 1) + 1);
}

int Rhombus::sPerimeter() const
{
	return 2 * (d - 1);
}

void Rhombus::draw(Canvas & canvas, int row, int col, char foreChar, char backChar) const
{
	//begin position of foreground of each row
	int beginIdx = d / 2; // d/2: the center position to put the first foreChar in first row
	//end position of foreground of each row
	int endIdx = beginIdx;

	for (int r = 0; r < boxH(); ++r) {
		for (int c = 0; c < boxW(); ++c) {
			//col is within the foreground range of each row
			if (c>=beginIdx && c<=endIdx)
				canvas.put(row + r, col + c, foreChar);
			else
				canvas.put(row + r, col + c, backChar);
		}

		//decrease begin position and increase end position each row for the upper half of rhombus
		if (r+1 <= (d / 2)) {
			--beginIdx;
			++endIdx;
		}
		//narrow down the lower half of rhombus
		else {
			++beginIdx;
			--endIdx;
		}
	}
}
