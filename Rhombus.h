#ifndef Rhombus_H
#define Rhombu_H
#include <string>

using namespace std;


class Rhombus
{

private:
	string rhobmusName_;
	double rhombusX_;
	double rhombusY_;
	double rhombusHeight_;
	double lengthFirst_;
	double lengthSecond_;
	double lengthThird_;
	double lengthFourth_;
    double rhombusSquare_;

public:
	string getRhombusName();
	double getRhombusX();
	double getRhombusY();
	double getRhombusHeight();
	double getRhombusLenghtFirst();
	double getRhombusLenghtSecond();
	double getRhombusLenghtThird();
	double getRhombusLenghtFourth();
	double getRhombusSquare();

	void setRhombusName(string rhombusName);
	void setRhombusX(double rhombusX);
	void setRhombusY(double rhombusY);
	void setRhombusHeight(double rhombusHeight);
	void setRhombusLenghtFirst(double lengthFirst);
	void setRhombusLenghtSecond(double lengthSecond);
	void setRhombusLenghtThird(double lengthFirst);
	void setRhombusLenghtFourth(double lengthSecond);

private:
	bool checkRhombusName();
	bool checkRhombusHeight();
	bool checkRhombusSide();
	bool checkRhombusSquare();
};

#endif

