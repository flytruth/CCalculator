#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a;
    double b;
    double d; 
    double k;
    double c;

    std::cout << "Hello, this is hypotenus calculator \n";

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    std::cout << "Enter side D: ";
    std::cin >> d;

    std::cout << "Enter side K: ";
    std::cin >> k;        

    a = pow(a, 2);
    b = pow(b, 2);
    d = pow(d, 5);
    k = pow(k, 4);
    c = sqrt(a + b * k + d);

    std::cout << c;

    return 0;
}
