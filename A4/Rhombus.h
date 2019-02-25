#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "Shape.h"
/**
 * Concrete class of rectangle
 */
class Rhombus :public Shape {
public:
	/**
	 * Ctor
	 * @param d Longest row(mid row) of rhombus
	 * @param desp Description of rhombus
	 * @param name Name of rhombus
	 */
	Rhombus(int d, const std::string& desp = "Class Rhombus", const std::string& name = "Rhombus");
	/**
	 * Computes the object's geometric area
	 * @return The object's geometric area
	 */
	virtual double geoArea() const override;
	/**
	 * Computes the height of bonding box
	 * @return The height of bonding box
	 */
	virtual int boxH() const override;
	/**
	 * Computes the width of bonding box
	 * @return The width of bonding box
	 */
	virtual int boxW() const override;
	/**
	 * Computes the object's geometric perimeter
	 * @return The object's geometric perimeter
	 */
	virtual double geoPerimeter() const override;
	/**
	 * Computes the object's screen area
	 * @return The object's screen area
	 */
	virtual int sArea() const override;
	/**
	 * Computes the object's screen perimeter
	 * @return The object's screen perimeter
	 */
	virtual int sPerimeter() const override;
	/**
	 * Draw a textual image for the object on a given drawing surface
	 * @param canvas Canvas object
	 * @param row Row of starting position
	 * @param col Column of starting position
	 * @param foreChar Foreground character
	 * @param backChar Background character
	 */
	virtual void draw(Canvas & canvas, int row, int col, char foreChar = '*', char backChar = ' ') const override;
private:
	int d;
};

#endif // !RHOMBUS_H
