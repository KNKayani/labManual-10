/*____________________________________________________
Write a program to print the area and perimeter of a triangle
 having sides of 3 m, 4 m and 5 m by creating a class named
'Triangle' with a function to print the area and perimeter.
KASHIF NADEEM KAYANI      456 466          ME 15 A
*/

#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculatePerimeter() {
        return side1 + side2 + side3;
    }

    double calculateArea() {
        double s = calculatePerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void displayInfo() {
        double perimeter = calculatePerimeter();
        double area = calculateArea();

        cout << "Triangle with sides " << side1 << " m, " << side2 << " m, and " << side3 << " m:" << endl;
        cout << "Perimeter: " << perimeter << " m" << endl;
        cout << "Area: " << area << " square meters" << endl;
    }
};

int main() {
    // Create an instance of the Triangle class with sides 3 m, 4 m, and 5 m
    Triangle triangleExample(3, 4, 5);

    // Display information about the triangle
    triangleExample.displayInfo();

    return 0;
}

