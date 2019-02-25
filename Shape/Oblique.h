#ifndef OBLIQUETRIANGLE_H
#define OBLIQUETRIANGLE_H

#include "IsoscelesTriangle.h"
/**
 * Concrete class of oblique triangle
 */
class Oblique :public IsoscelesTriangle {
public:
	/**
	 * Ctor
	 * @param b Base of triangle
	 * @param desp Description
	 * @param name Name
	 */
	Oblique(const int b, const std::string& desp = "Class Oblique", const std::string& name = "Oblique");
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
};

#endif // !OBLIQUETRIANGLE_H
