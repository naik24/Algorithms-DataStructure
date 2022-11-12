#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle x;
    x.length = 20;
    x.breadth = 15;

    int area_of_Rectx = x.length * x.breadth;
    cout << "Area of Rectangle: " << area_of_Rectx << endl;
}

