#include <iostream>
#include <string>
using namespace std;

class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
};

AdHocSquare::AdHocSquare(double side)
{
    set_side(side);
}

void AdHocSquare::set_side(double side)
{
    this->side = side;
}

double AdHocSquare::get_area()
{
    return side * side;
}

class LazySquare
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();

private:
    double side;
    double area;
    bool side_changed;
};

LazySquare::LazySquare(double side)
{
    set_side(side);
}

void LazySquare::set_side(double side)
{
    this->side = side;
    side_changed = true;
}

double LazySquare::get_area()
{
    if (side_changed)
    {
        area = side * side;
        side_changed = false;
    }
    return area;
}

int main()
{
    AdHocSquare adhoc(4);
    cout << "Ad Hoc Square: side=4 area=" << adhoc.get_area() << endl;

    adhoc.set_side(2.0);
    cout << "Ad Hoc Square: side=2 area=" << adhoc.get_area() << endl;

    LazySquare lazy(4);
    cout << "Lazy Square: side=4 area=" << lazy.get_area() << endl;

    lazy.set_side(2.0);
    cout << "Lazy Square: side=2 area=" << lazy.get_area() << endl;

    return 0;
}