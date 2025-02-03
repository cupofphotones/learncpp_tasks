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
