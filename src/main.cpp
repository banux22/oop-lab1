#include <iostream>

extern double add(double lhs double rhs)
extern double subtract(double lhs double rhs)

int main() {
    double a, b
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;
    double sum = add(a, b);
    double difference = subtract(a, b);

    std::cout << "�����: " << sum << std::endl;
    std::cout << "��������: " << difference << std::endl;

    return 0;
}