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
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;
    double sum = add(a, b);
    double difference = subtract(a, b);
    double product = multiply(a, b);

    std::cout << "�����: " << sum << std::endl;
    std::cout << "��������: " << difference << std::endl;
    std::cout << "������������ " << product << std::endl;


    return 0;
}