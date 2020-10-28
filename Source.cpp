#include "Rhombus.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

void tab(string name, double X, double Y, double height, double lenghtFirst, double lenghtSecond, double lenghtThird, double lenghtFourth, double square , int tmp) 
{
    if (tmp == 1)
    {
        cout << "---------------------------------------------------------------------------------------------------" << endl;
        cout << "¹" << setw(8) << "|" << "Name" << setw(7) << "|" << "Coordinate X" << setw(7) << "|" << "Coordinate Y" << setw(7) << "|" << "Height" << setw(7) << "|" << "Sides" << setw(10) << "|" << "Square" << setw(7) << "|" << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
    }
    cout << setw(9) << "|" << name << setw(7) << "|" << X << setw(16) << "|" << Y << setw(16) << "|" << height << setw(12) << "|" << lenghtFirst << "," << lenghtSecond << "," << lenghtThird << "," << lenghtFourth << setw(4) << "|" << square << setw(10) << "|" << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;
}

int main() {
    string name;
    float X;
    float Y;
    float height;
    float lengthFirst;
    float lengthSecond;
    float lengthThird;
    float lengthFourth;
    float square1;
    float square2;
    float square3;
    int tmp = 0;
    Rhombus rhombus;
    Rhombus rhombus2;
    Rhombus rhombus3;
    while (tmp != 3) {
        cout << "Enter data - 1" << endl;
        cout << "Show data - 2" << endl;
        cout << "Exit - 3" << endl;
        cin >> tmp;
        switch (tmp) {
        case 1:
            cout << "Enter a name of Rhombus \n Name: ";
            cin >> name;
            rhombus.setRhombusName(name);
            cout << "Input a centr of Rhombus. \n X: ";
            cin >> X;
            rhombus.setRhombusX(X);
            cout << "Enter a centr of Rhombus. \n Y: ";
            cin >> Y;
            rhombus.setRhombusY(Y);
            cout << "Enter the first side of the rhombus: ";
            cin >> lengthFirst;
            rhombus.setRhombusLenghtFirst(lengthFirst);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthSecond = lengthFirst;
            rhombus.setRhombusLenghtSecond(lengthSecond);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthThird = lengthFirst;
            rhombus.setRhombusLenghtThird(lengthFirst);
            cout << "Fourth side copied by first side: " << lengthFirst << endl;
            lengthFourth = lengthFirst;
            rhombus.setRhombusLenghtFourth(lengthSecond);
            cout << "Enter the Height of the rhombus. \n Height: ";
            cin >> height;
            rhombus.setRhombusHeight(height);
            square1 = lengthFirst * height;
            cout << "Square =  " << square1 <<endl;


            cout << "Enter a name of Rhombus 2 \n Name: ";
            cin >> name;
            rhombus2.setRhombusName(name);
            cout << "Input a centr of Rhombus 2. \n X: ";
            cin >> X;
            rhombus2.setRhombusX(X);
            cout << "Enter a centr of Rhombus 2. \n Y: ";
            cin >> Y;
            rhombus2.setRhombusY(Y);
            cout << "Enter the first side of the rhombus 2: ";
            cin >> lengthFirst;
            rhombus2.setRhombusLenghtFirst(lengthFirst);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthSecond = lengthFirst;
            rhombus2.setRhombusLenghtSecond(lengthSecond);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthThird = lengthFirst;
            rhombus2.setRhombusLenghtThird(lengthFirst);
            cout << "Fourth side copied by first side: " << lengthFirst << endl;
            lengthFourth = lengthFirst;
            rhombus2.setRhombusLenghtFourth(lengthSecond);
            cout << "Enter the Height of the rhombus 2. \n Height: ";
            cin >> height;
            rhombus2.setRhombusHeight(height);
            square2 = lengthFirst * height;
            cout << "Square 2 =  " << square2 << endl;


            cout << "Enter a name  of Rhombus 3 \n Name: ";
            cin >> name;
            rhombus3.setRhombusName(name);
            cout << "Input a centr of Rhombus 3. \n X: ";
            cin >> X;
            rhombus3.setRhombusX(X);
            cout << "Enter a centr of Rhombus 3. \n Y: ";
            cin >> Y;
            rhombus3.setRhombusY(Y);
            cout << "Enter the first side of the rhombus 3: ";
            cin >> lengthFirst;
            rhombus3.setRhombusLenghtFirst(lengthFirst);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthSecond = lengthFirst;
            rhombus3.setRhombusLenghtSecond(lengthSecond);
            cout << "Third side copied by first side: " << lengthFirst << endl;
            lengthThird = lengthFirst;
            rhombus3.setRhombusLenghtThird(lengthFirst);
            cout << "Fourth side copied by first side: " << lengthFirst << endl;
            lengthFourth = lengthFirst;
            rhombus3.setRhombusLenghtFourth(lengthSecond);
            cout << "Enter the Height of the rhombus 3. \n Height: ";
            cin >> height;
            rhombus3.setRhombusHeight(height);
            square3 = lengthFirst * height;
            cout << "Square 3 =  " << square3 << endl;
            break;
        case 2:
            tab(rhombus.getRhombusName(), rhombus.getRhombusX(), rhombus.getRhombusY(), rhombus.getRhombusHeight(), rhombus.getRhombusLenghtFirst(), rhombus.getRhombusLenghtSecond(),rhombus.getRhombusLenghtThird(), rhombus.getRhombusLenghtFourth(), square1 , 1);
            tab(rhombus2.getRhombusName(), rhombus2.getRhombusX(), rhombus2.getRhombusY(), rhombus2.getRhombusHeight(), rhombus2.getRhombusLenghtFirst(), rhombus2.getRhombusLenghtSecond(), rhombus.getRhombusLenghtThird(), rhombus2.getRhombusLenghtFourth(), square2 , 2);
            tab(rhombus3.getRhombusName(), rhombus3.getRhombusX(), rhombus3.getRhombusY(), rhombus3.getRhombusHeight(), rhombus3.getRhombusLenghtFirst(), rhombus3.getRhombusLenghtSecond(), rhombus.getRhombusLenghtThird(), rhombus3.getRhombusLenghtFourth(), square3 , 3);
            break;
        case 3:
            return 0;
            break;
        }
    }
    return 0;
}