#include <iostream>
#include <cmath>

class Point2d{
    private:
        double m_x {0.0};
        double m_y {0.0};
    public:
        Point2d() = default;
        Point2d(double x, double y)
            : m_x {x}
            , m_y {y}
        {}
        
        double getX() const {return m_x;}
        double getY() const {return m_y;}
        
        void print(){
            std::cout << "Point2d(" << getX() << ", " << getY() << ')' << std::endl;
        }
        
        double distanceTo(Point2d another_point){
            return std::sqrt((getX() - another_point.getX())*(getX()-another_point.getX())+(getY()-another_point.getY())*(getY()-another_point.getY()));
        }
};

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();
    
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}
