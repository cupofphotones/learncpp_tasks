// Create a class template named Triad that has 3 members of the same template type. Also create a function template named print that can print a Triad.

#include <iostream>

template <typename T>
struct Triad{
    T one {};
    T two {};
    T three {};
};

template <typename T>
Triad(T, T, T) -> Triad<T>; // for some reason cpp.sh C++20 CTAD can't work without it

template <typename T>
void print (const Triad<T>& triad){
    std::cout << '[' << triad.one << ", " << triad.two << ", " << triad.three << ']' << std::endl;
}

int main(){
    
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);
	
    return 0;
}
