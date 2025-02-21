#include <iostream>

<<<<<<< HEAD
extern double add(double lhs, double rhs);
extern double subtract(double lhs, double rhs);
=======
extern double add(double lhs double rhs)
extern double subtract(double lhs double rhs)
extern double multiply(double lhs, double rhs)
>>>>>>> feature-utils

int main() {
    double a, b
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    double sum = add(a, b);
    double difference = subtract(a, b);
    double product = multiply(a, b);

    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Разность: " << difference << std::endl;
    std::cout << "Произведение " << product << std::endl;


    return 0;
}