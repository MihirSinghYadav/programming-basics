#include <iostream>
using namespace std;
int main()
{
    float area_triangle;
    int base, height;
    int radius;
    float area_circle, circumference;
    int a, b, temp;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    area_triangle = (base * height) / 2;
    cout << "Area of triangle is : " << area_triangle << endl;
    cout << "Enter radius of circle: ";
    cin >> radius;
    circumference = 2 * 3.14 * radius;
    area_circle = 3.14 * radius * radius;
    cout << "Area and Circumference of circle is : " << area_circle << ", " << circumference << endl;
    cout << "Enter 2 values: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "The swapped values are: " << a << " " << b << endl;
}