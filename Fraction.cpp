#include "Fraction.h"
Fraction::Fraction(int numerator, int denominator, Sign sign) {
    if(numerator<0){
        numerator=0;
    }
    if(denominator<1){
        denominator=1;
    }
    int gcd = __gcd(numerator,denominator);
    this->numerator=numerator/gcd;
    this->denominator=denominator/gcd;
    this->sign=sign;
}

void Fraction::show() const {
    cout<<sign<<numerator<<"/"<<denominator<<endl;

}

void Fraction::showm() const {
    int integers=findIntegers();
    cout<<sign<<integers<<","<<numerator%denominator<<"/"<<denominator<<endl;

}

int Fraction::hole() const {
    return findIntegers();
}
int Fraction::findIntegers() const {
    int division = numerator%denominator;
    int integers = (numerator-division)/denominator;
    return integers;
}

