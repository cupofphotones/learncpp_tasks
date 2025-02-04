// Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.
// Write a function to read in a Fraction from the user, and use it to read-in two fraction objects. Write another function to multiply two Fractions together and return the result as a Fraction (you don’t need to reduce the fraction). Write another function that prints a fraction.
// Your program’s output should match the following:
//   Enter a value for the numerator: 1
//   Enter a value for the denominator: 2
//
//   Enter a value for the numerator: 3
//   Enter a value for the denominator: 4
//
//   Your fractions multiplied together: 3/8
// When multiplying two fractions together, the resulting numerator is the product of the two numerators, and the resulting denominator is the product of the two denominators.

#include <iostream>

struct Frac {
    int num {0};
    int den {1};
};

Frac inputFrac (){
    Frac temp {};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> temp.num;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> temp.den;
    std::cout << std::endl;
    
    return temp;
}

void mulFracs (Frac& f1, Frac& f2){
    std::cout << "Your fractions multiplied together: " << f1.num*f2.num << '/' << f1.den*f2.den << std::endl;
}

int main(){
    
    Frac f1 = inputFrac();
    Frac f2 = inputFrac();
    mulFracs(f1, f2);
    
    return 0;
}
