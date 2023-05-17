#include <iostream>
#include <string>
using namespace std;

class Square
{
private:
    double side;
    double area;

public:
    Square(double side);
    void side2(double new_side);
    void print();
};

Square::Square(double side)
{
    side2(side);
}

void Square::side2(double new_side)
{
    if (new_side >= 0)
    {
        side = new_side;
        area = side * side;
    }
}

void Square::print()
{
    cout << "Square: side=" << side << " area=" << area << endl;
}

int main()
{
    Square s(4);
    s.print();

    s.side2(2.0);
    s.print();

    s.side2(-33.0);
    s.print();

    return 0;
}