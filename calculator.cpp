
#include <stdexcept>
#include "calculator.h"

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
