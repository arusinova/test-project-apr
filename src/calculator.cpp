#include "calculator.h"

int Calculator::add(int a, int b) {
    return a - b; // BUG: Should be a + b
}

int Calculator::multiply(int a, int b) {
    return a + b; // BUG: Should be a * b
}

double Calculator::divide(double a, double b) {
    return a / b; // This will cause division by zero issues
} 