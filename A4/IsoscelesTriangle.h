#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Shape.h"

/**
 * Abstract isosceles triangle class with common functions and data members of oblique triangel and right triangle
 */

class IsoscelesTriangle :public Shape {
public:
	/**
	 * Ctor
	 * @param b Base of triangle
	 * @param h Height of triangle
	 * @param desp Description
	 * @param name Name
	 */
	IsoscelesTriangle(int b, int h, const std::string& desp, const std::string& name);
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
	 * Virtual function computes the object's geometric perimeter
	 * @return The object's geometric perimeter
	 */
	virtual double geoPerimeter() const = 0;
	/**
	 * Virtual function computes the object's screen area
	 * @return The object's screen area
	 */
	virtual int sArea() const = 0;
	/**
	 * Virtual function computes the object's screen perimeter
	 * @return The screen perimeter
	 */
	virtual int sPerimeter() const = 0;
	/**
	 * Draw a textual image for the object on a given drawing surface
	 * @param canvas Canvas object
	 * @param row Row of starting position
	 * @param col Column of starting position
	 * @param foreChar Foreground character
	 * @param backChar Background character
	 */
	virtual void draw(Canvas & canvas, int row, int col, char foreChar = '*', char backChar = ' ') const = 0;
protected:
	int b;
	int h;
};


#endif