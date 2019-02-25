#ifndef CANVAS_H
#define CANVAS_H

#include <vector>
#include <ostream>
/*
 * Models a drawing surface in which the cells each store a character
 */
class Canvas {
	/***
	 * Output operator overload that writes the entire canvas cells
	 * @param out Standard output stream
	 * @param canvas Canvas object
	 * @return Reference to output stream
	 */
	friend std::ostream& operator<<(std::ostream& out, const Canvas& canvas);
public:
	/***
	 * Ctor
	 * @param rows The number of rows of the canvas
	 * @param cols The number of columns of the canvas
	 * @param fillCh The initial filling character for each cell
	 */
	Canvas(int rows, int cols, char fillCh = ' ');

	/***
	 * Subscript operator overloading, non-const version
	 * @param r The row number of canvas
	 * @return The cell vector of row r
	 */
	std::vector<char>& operator[](int r);

	/***
	 * Subscript operator overloading, const version
	 * @param r The row number of canvas
	 * @return The cell vector of row r
	 */
	const std::vector<char>& operator[](int r) const;

	/***
	 * Writes ch in the cell at row r and column c
	 * @param r The row number of cell to write
	 * @param c The column number of cell to write
	 * @param ch The character to write
	 */
	void put(int r, int c, char ch = '*');

	/***
	 * @return The canvas height (rows)
	 */
	int getHeight() const;

	/***
	 * @return The canvas width (columns)
	 */
	int getWidth() const;

	/***
	 * Determines whether the specified row and column positions are inside the bounds of this canvas
	 * @param r Row position
	 * @param c Column position
	 * @return True-inside the canvas; false-outside of the canvas
	 */
	bool inBounds(int r, int c) const;

	/***
	 * Writes the cells with character fillCh
	 * @param fillCh The fill character
	 */
	void clear(char fillCh = ' ');

private:
	std::vector<std::vector<char>> cells;
	int rows;
	int cols;
};

#endif // !CANVAS_H

