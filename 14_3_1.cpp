// Create a struct called IntPair that holds two integers. Add a member function named print that prints the value of the two integers.
#include <iostream>

struct IntPair {
  int one;
  int two;
  
  void print(){
    std::cout << "Pair(" << one << ", " << two << ")" << std::endl;   
  };
};

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	return 0;
}
