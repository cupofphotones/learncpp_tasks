// You are running a website, and you are trying to calculate your advertising revenue. Write a program that allows you to enter 3 pieces of data:
//   How many ads were watched.
//   What percentage of users clicked on an ad.
//   The average earnings per clicked ad.
// Store those 3 values in a struct. Pass that struct to another function that prints each of the values. The print function should also print how much you made for that day (multiply the 3 fields together).
// https://www.learncpp.com/cpp-tutorial/passing-and-returning-structs/

#include <iostream>

struct Ad {
    int how_many {0};
    double percent {0.0};
    double avg {0.0};
};

Ad getAd () {
    Ad temp {};
    std::cout << "Input Ads count" << std::endl;
    std::cin >> temp.how_many;
    std::cout << "Input Percent" << std::endl;
    std::cin >> temp.percent;
    std::cout << "Input Avg" << std::endl;
    std::cin >> temp.avg;
    
    return temp;
}

void printAd (const Ad& ad){
    std::cout << "Ads count: " << ad.how_many << std::endl;
    std::cout << "Percent: " << ad.percent << std::endl;
    std::cout << "Average: " << ad.avg << std::endl;
    std::cout << "Daily revenew: " << ad.how_many*ad.percent*ad.avg << std::endl;
}

int main(){
    
    Ad tmp = getAd();
    printAd(tmp);
    
    return 0;
}
