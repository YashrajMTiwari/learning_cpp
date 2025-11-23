// Learning c++ from basics
#include <iostream>

int addNumbers(int a, int b) {
    int sum = a + b;
    return sum;
}

int main(int argc, char **argv) {
    int num1 {9};
    int num2 {3};
    int sum = num1 + num2;
    int a = addNumbers(num1, num2);
    std::cout << a << std::endl;
    a = addNumbers(1, 2);
    std::cout << a;
    // std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum <<std::endl;
    return 0;
}
