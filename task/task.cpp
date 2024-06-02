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
    virtual void print()const = 0;
};

class triangle : public figure{
    vector<point> points;
public:
    triangle(vector<point> points) : figure(points) {
        this->points = points;
    }
    void print()const override{
        cout << "\nTriangle\n";
        for (auto el : points) el.print();
        cout << "\n\n";
    }
};

int main()
{
    triangle tr(vector<point>{point(2, 23), point(56, 2), point(6, 2)});
    tr.print();
}

