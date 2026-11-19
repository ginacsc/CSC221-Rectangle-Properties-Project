#include <iostream>
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

double calcPerimeter(double length, double width)
{
    double perimeter = 2 * (length + width);
    return perimeter;
}

double calcArea(double length, double width)
{
    double area = length * width;
    return area;
}
void displayProperties(double perimeter, double area)
{
    cout << "The perimeter is: " << perimeter << endl;
    cout << "The area is: " << area << endl;
}

int main() {
    double length, width, perimeter, area;
    int choice;

    do {
        cout << "\nRectangle Properties Menu" << endl;
        cout << "1. Calculate Rectangle Properties" << endl;
        cout << "2. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1) {


            getLengthWidth(length, width);

            perimeter = calcPerimeter(length, width);

            area = calcArea(length, width);

            displayProperties(perimeter, area);
        }
        else if(choice == 2) {
            cout << "Thank you! Goodbye!" << endl;
        }

        else {
            cout << "Invalid choice. Try again." << endl;
        }

    } while(choice != 2);

    return 0;

}