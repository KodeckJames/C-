#include <iostream>

int main(){
    // The const keyword specifies that a variable is a constant and tells the compiler to prevent anything from modifying it
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << " cm";

    return 0;
}