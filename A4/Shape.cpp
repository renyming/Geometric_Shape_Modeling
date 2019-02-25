#include "Shape.h"
#include <iomanip>
#include <typeinfo>
#include <sstream>

using namespace std;

int Shape::globalIdx = 0;

Shape::Shape(const std::string& desp, const std::string& name) :
	name{ name },
	desp{ desp },
	idx{ ++globalIdx } {}

int Shape::getID() const {
	return idx;
}

string Shape::getName() const {
	return name;
}

string Shape::getDesp() const {
	return desp;
}

void Shape::setName(const std::string& name) {
	this->name = name;
}

void Shape::setDesp(const std::string& desp) {
	this->desp = desp;
}

std::string Shape::toString() const
{
	//convert stream to string
	stringstream ss;
	ss << (*this);
	return ss.str();
}


std::ostream & operator<<(std::ostream & out, const Shape & shape)
{
	out << "Shape Information" << endl;
	out << "-----------------" << endl;
	out << left << setw(15) << "Static type:" << typeid(&shape).name() << endl;
	out << left << setw(15) << "Dynamic type:" << typeid(shape).name() << endl;
	out << left << setw(15) << "Shape name:" << shape.getName() << endl;
	out << left << setw(15) << "Description:" << shape.getDesp() << endl;
	out << left << setw(15) << "id:" << shape.getID() << endl;
	out << left << setw(15) << "B. box width:" << shape.boxW() << endl;
	out << left << setw(15) << "W. box width:" << shape.boxH() << endl;
	out << left << setw(15) << "Scr area:" << shape.sArea() << endl;
	//set fixed precision for double type
	out << setprecision(2) << fixed;
	out << left << setw(15) << "Geo area:" << shape.geoArea() << endl;
	out << left << setw(15) << "Scr perimeter:" << shape.sPerimeter() << endl;
	out << left << setw(15) << "Geo perimeter:" << shape.geoPerimeter() << endl;

	return out;
}
