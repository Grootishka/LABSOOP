#include "Rhombus.h"
#include <string>
#include <iostream>

using namespace std;

string Rhombus::getRhombusName()
{
	return rhobmusName_;
}

void Rhombus::setRhombusName(string rhombusName)
{
	rhobmusName_ = rhombusName;
	if (!checkRhombusName())
	{
		exit(1);
	}
}

double Rhombus::getRhombusX()
{
	return rhombusX_;
}

void Rhombus::setRhombusX(double rhombusX)
{
	rhombusX_ = rhombusX;
}

double Rhombus::getRhombusY()
{
	return rhombusY_;
}

void Rhombus::setRhombusY(double rhombusY)
{
	rhombusY_ = rhombusY;
}

double Rhombus::getRhombusHeight()
{
	return rhombusHeight_;
}

void Rhombus::setRhombusHeight(double rhombusHeight)
{
	rhombusHeight_ = rhombusHeight;
	if (!checkRhombusHeight())
	{
		exit(1);
	}
}

double Rhombus::getRhombusLenghtFirst()
{
	return lengthFirst_;
}

void Rhombus::setRhombusLenghtFirst(double lengthFirst)
{
	lengthFirst_ = lengthFirst;
	if (!checkRhombusSide())
	{
		exit(1);
	}
}

double Rhombus::getRhombusLenghtSecond()
{
	return lengthSecond_;
}

void Rhombus::setRhombusLenghtSecond(double lengthFirst)
{
	lengthSecond_ = lengthFirst;
}

double Rhombus::getRhombusLenghtThird()
{
	return lengthThird_;
}

void Rhombus::setRhombusLenghtThird(double lengthFirst)
{
	lengthThird_ = lengthFirst;
}

double Rhombus::getRhombusLenghtFourth()
{
	return lengthFourth_;
}

void Rhombus::setRhombusLenghtFourth(double lengthFirst)
{
	lengthFourth_ = lengthFirst;
}

double Rhombus::getRhombusSquare()
{
	return rhombusSquare_;
}

bool Rhombus::checkRhombusName()
{
	if (rhobmusName_.length() < 1) {
		cout << "\nWrong parameter. Should not be empty.\n";
		return false;
	}
	return true;
}

bool Rhombus::checkRhombusHeight()
{
	if (rhombusHeight_ <= 0)
	{
		cout << "\nWrong parameter. Should not be negetive or equal to zero.\n";
		return false;
	}
	return true;
}

bool Rhombus::checkRhombusSide()
{
	if (lengthFirst_ <= 0)
	{
		cout << "\nWrong parameter. Should not be negetive or equal to zero.\n";
		return false;
	}
	return true;
}

bool Rhombus::checkRhombusSquare()
{
	if (rhombusSquare_ < 0)
	{
		cout << "\nWrong parameter. Should not be negetive.\n";
		return false;
	}
	return true;
}



