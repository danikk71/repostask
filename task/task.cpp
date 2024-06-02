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
};

int main()
{
    
}

