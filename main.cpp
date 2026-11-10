#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a;
    double b;
    double c;

    std::cout << "Hello, this is hypotenus calculator \n";

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << c;

    return 0;
}
