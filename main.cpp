#include <iostream>
#include "Fraction.h"
int main() {
    Fraction f1(3, 4);
    f1.show();  // Output: 3/4

    Fraction f2(5, 2);
    f2.show();  // Output: 5/2

    Fraction f3(1, 3);
    f3.show();  // Output: 1/3
    Fraction f4(10,2,Fraction::Minus);
    f4.show();
    Fraction f5(13,3);
    f5.show();
    f5.showm();
    return 0;
}
