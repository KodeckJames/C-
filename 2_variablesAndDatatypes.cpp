#include <iostream>

int main(){
    int x; //Declaration
    x = 78; //assignment
    int y = 56;
    int year = 2029;
    int age = 88;
    std::cout << x << '\n';
    std::cout << y << '\n';
    
    //double - A number including a decimal
    double days = 7.8;
    double price = 3.8;
    double gpa = 4.0;

    std::cout << gpa;

    //char - single character
    char grade = 'A';
    char initial = 'b';
    char currency = '$';

    std::cout << currency;

    //boolean - true/ false
    bool student = true;
    bool power = false;
    bool sale = true;

    //strings - An object that reps a sequence of texts
    std::string color = "Yellow";
    std::string day = "Monday";

    std::cout << "\nHello " << color
    << ", you are " << age << " years old";

    return 0;
}