#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
/**
 * Concrete class of rectangle
 */
class Rectangle :public Shape {
public:
	/**
	 * Ctor
	 * @param w Width of rectangle
	 * @param h Height of rectangle
	 * @param desp Description of rectangle
	 * @param name Name of rectangle
	 */
	Rectangle(int w, int h, const std::string& desp="Class Rectangle", const std::string& name="Rectangle");
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
	int w;
	int h;
};

#endif // !RECTANGLE_H
