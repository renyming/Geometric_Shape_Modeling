#include "Oblique.h"
#include <cmath>

using namespace std;

Oblique::Oblique(const int b, const std::string & desp, const std::string & name) :
	IsoscelesTriangle(b % 2 == 0 ? b + 1 : b, ((b % 2 == 0 ? b+1 : b ) + 1) / 2, desp, name)
{	//user input validation
	if (b<3)
		throw std::invalid_argument("The base of a oblique triangle should be larger than 3.");
}

double Oblique::geoPerimeter() const
{
	return b + 2 * sqrt(0.25*pow(b, 2) + pow(h, 2));
}

int Oblique::sArea() const
{
	return static_cast<int>(pow(h, 2));
}

int Oblique::sPerimeter() const
{
	return 4 * (h - 1);
}

void Oblique::draw(Canvas & canvas, int row, int col, char foreChar, char backChar) const
{
	//begin position of foreground of each row
	int beginIdx = b / 2; // d/2: the center position to put the first foreChar in first row
	//end position of foreground of each row
	int endIdx = beginIdx;

	for (int r = 0; r < boxH(); ++r) {
		for (int c = 0; c < boxW(); ++c) {
			//col is within the foreground range of each row
			if (c >= beginIdx && c <= endIdx)
				canvas.put(row + r, col + c, foreChar);
			else
				canvas.put(row + r, col + c, backChar);
		}
		//decrease begin position and increase end position each row
		--beginIdx;
		++endIdx;
	}
}
