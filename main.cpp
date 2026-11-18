#include <iostream>
#include <cmath>
using namespace std;

void getLengthWidth(double& length, double& width) {
    do {
        cout << "Enter the length: ";
        cin >> length;

        if(length <= 0) {
            cout << "Length must be greater than zero." << endl;
        }

        } while (length <= 0);

    do {
        cout << "Enter the width: ";
        cin >> width;

        if (width <= 0) {
            cout << "Width must be greater than zero." << endl;
        }
    } while (width <= 0);

}

double calcPerimeter(double length, double width);
{
    double perimeter = 2 * (length + width);
}

double calcArea(double length, double width);
{
    double area = length * width;
}
void displayProperties(double perimeter, double area);

int main() {

    getLengthWidth(length, width);


    return 0;

}