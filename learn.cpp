#include <iostream>

int main() {
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}


// Old code for references
/*
#include <iostream>
#include <cmath>
using namespace std;

int a = 30;
int b = 20;
int c = a + b;
int * pX = &a;

int main() {
    cout << "Addition of  " << a << " + " << b << " is: " << c << endl;
    cout << "End " << *pX - b;
    return 0;
}
*/