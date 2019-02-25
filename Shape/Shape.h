#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <ostream>
#include "Canvas.h"
/**
 * An abstract class has common methods and data members of shape name and shape description
 */
class Shape {
	/***
	 * Output operator overloading
	 * @param out Output stream
	 * @param shape Shape object
	 * @return Reference to output stream
	 */
	friend std::ostream& operator<< (std::ostream& out, const Shape& shape);
public:
	/***
	 * Ctor
	 * @param desp Description of shape
	 * @param name Name of shape
	 */
	Shape(const std::string& desp, const std::string& name);
	/***
	 * @return ID of shape
	 */
	int getID() const;
	/***
	 * @return Name of shape
	 */
	std::string getName() const;
	/***
	 * @return Description of shape
	 */
	std::string getDesp() const;
	/**
	 * Setter to set the name
	 * @param name Name of shape
	 */
	void setName(const std::string& name);
	/**
	 * Setter to set the description
	 * @param desp Description of shape
	 */
	void setDesp(const std::string& desp);
	/**
	 * Generates a string representation for the shape object
	 * @return Generates and returns a string representations for the shape object
	 */
	std::string toString() const;
	/**
	 * Virtual function computes the object's geometric area
	 * @return The object's geometric area
	 */
	virtual double geoArea() const = 0;
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
	 * Virtual function computes the height of bonding box
	 * @return The height of bonding box
	 */
	virtual int boxH() const = 0;
	/**
	 * Virtual function computes the width of bonding box
	 * @return The width of bonding box
	 */
	virtual int boxW() const = 0;
	/**
	 * Draw a textual image for the object on a given drawing surface
	 * @param canvas Canvas object
	 * @param row Row of starting position
	 * @param col Column of starting position
	 * @param foreChar Foreground character
	 * @param backChar Background character
	 */
	virtual void draw(Canvas & canvas, int row, int col, char foreChar = '*', char backChar = ' ') const = 0;

private:
	static int globalIdx;
	int idx;
	std::string name;
	std::string desp;
};

#endif // !SHAPE_H


