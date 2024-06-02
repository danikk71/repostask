#include <iostream>
#include <vector>
using namespace std;

class point {
    int x, y;
public:
    point() :x(0), y(0) {}
    point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void print()const {
        cout << "X: " << x << " , Y: " << y << "\n";
    }
};

class figure {
    vector<point> points;
public:
    figure(vector<point> points) {
        this->points = points;
    }
    void print()const {
        for (auto el : points) el.print();
        cout << "\n\n";
    }
};

int main()
{
    figure square(vector<point>
    {   point(2, 3),
        point(3, 6),
        point(3, 3),
        point(2, 6)
    });
    figure triangle(vector<point>
    {
            point(3, 2),
            point(6, 21),
            point(1, 6)
    });
    figure pentagon(vector<point>
    {
            point(3, 7),
            point(6, 11),
            point(1, 6),
            point(3, 5),
            point(2, 7)
    });
    square.print();
    triangle.print();
    pentagon.print();
}

