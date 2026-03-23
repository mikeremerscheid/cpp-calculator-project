#include <iostream>
#include <stdexcept>


double divide(double x, double y) {
    if (y == 0.0f) {
        throw std::runtime_error("Division by zero");
    }

    return x / y;
}

double multiply(double x, double y) {
    return x * y;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y ;
}

int main() {

    double x, y;
    char op;

    while x != null {
    std::cout << "Enter two numbers" << std:: endl;
    std::cin >> x >> op >> y;

    try {
        double result;
        switch (op) {
            case '+': result = add(x, y); break;
            case '-': result = subtract(x, y); break;
            case '*': result = multiply(x, y); break;
            case '/': result = divide(x, y); break;
            default:
                std::cout << "Invalid operator\n";
                return 1;
        }
        std::cout << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error :" << e.what() << std::endl;
    }
    }
    return 0;
}