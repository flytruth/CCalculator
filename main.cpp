#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a;
    double b;
    double c; 

    std::cout << "Hello, this hypetnus calculator made by flytruth \n";

    std::cout << "Please Enter side A: ";
    std::cin >> a;

    std::cout << "Please Enter side B: ";
    std::cin >> b;

    pow(a, 2);
    pow(b, 2);

    sqrt(a + b);

    std::cout << "Side C:" << c;

    return 0;
}
