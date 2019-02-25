#include "Canvas.h"

Canvas::Canvas(int rows, int cols, char fillCh):
	rows{rows},
	cols{cols}
{
	clear(fillCh);
}

std::vector<char>& Canvas::operator[](int r)
{
	return cells[r];
}

const std::vector<char>& Canvas::operator[](int r) const
{
	return cells[r];
}

void Canvas::put(int r, int c, char ch)
{
	if (inBounds(r,c))
		cells[r][c] = ch;
}

int Canvas::getHeight() const
{
	return rows;
}

int Canvas::getWidth() const
{
	return cols;
}

bool Canvas::inBounds(int r, int c) const
{
	return ((r >= 0 && r < rows) && (c >= 0 && c < cols));
}

void Canvas::clear(char fillCh)
{
	//create a new vector representing the row and fill with fillCh
	std::vector<char> new_row;
	new_row.assign(cols, fillCh);
	//fill all the rows with this new row vector
	cells.assign(rows, new_row);
}

std::ostream & operator<<(std::ostream & out, const Canvas & canvas)
{
	for (int r = 0; r < canvas.rows; ++r) {
		for (int c = 0; c < canvas.cols; ++c) {
			out << canvas[r][c];
		}
		out << std::endl;
	}
	return out;
}
