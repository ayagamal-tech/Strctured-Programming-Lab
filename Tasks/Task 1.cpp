/*
                       Author : Aya Gamal

    write a C++ prgram to calculate the perimeter and area of the shape
                ( triangle, rectangle, square, circle)

*/

#include <iostream>
#include <cmath>
const double PI = 3.14159265359;
using namespace std;

// Function to calculate the perimeter of a triangle
double calculateTrianglePerimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the perimeter of a rectangle
double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the perimeter of a square
double calculateSquarePerimeter(double side) {
    return 4 * side;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a circle
double calculateCirclePerimeter(double radius) {
    return 2 * PI * radius;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    int choice;
    cout << "Choose a shape to calculate perimeter and area:\n";
    cout << "1. Triangle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "4. Circle\n";
    cin >> choice;

    switch (choice) {
    case 1: // Triangle
        double side1, side2, side3, base, height;
        cout << "Enter the lengths of the three sides of the triangle: ";
        cin >> side1 >> side2 >> side3;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Perimeter of the triangle: " << calculateTrianglePerimeter(side1, side2, side3) << "\n";
        cout << "Area of the triangle: " << calculateTriangleArea(base, height) << "\n";
        break;

    case 2: // Rectangle
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Perimeter of the rectangle: " << calculateRectanglePerimeter(length, width) << "\n";
        cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << "\n";
        break;

    case 3: // Square
        double side;
        cout << "Enter the length of the square's side: ";
        cin >> side;
        cout << "Perimeter of the square: " << calculateSquarePerimeter(side) << "\n";
        cout << "Area of the square: " << calculateSquareArea(side) << "\n";
        break;

    case 4: // Circle
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Perimeter of the circle: " << calculateCirclePerimeter(radius) << "\n";
        cout << "Area of the circle: " << calculateCircleArea(radius) << "\n";
        break;

    default:
        cout << "Invalid choice.\n";
        break;
    }

    return 0;
}
