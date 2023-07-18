#ifndef TEST_TRAIN_FRACTION_H
#define TEST_TRAIN_FRACTION_H
#include "iostream"
#include "algorithm"
using namespace std;

class Fraction {
public:
    enum Sign {
        Minus = 45,
        Plus = 43
    };
private:
    int numerator{};
    int denominator{};
    char sign;
public:
    Fraction(int numerator = 0, int denominator = 1, Sign sign = Plus);
    void show() const;
    void showm() const;
    int hole() const;

private:
  int findIntegers() const;
};
#endif //TEST_TRAIN_FRACTION_H
