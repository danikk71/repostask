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

class segment : public figure {
    vector<point> points;
public:
    segment(vector<point> points) : figure(points) {
        this->points = points;
    }
    void print()const override {
        cout << "\nSegment\n";
        for (auto el : points) el.print();
        cout << "\n\n";
    }
};

class square : public figure {
    vector<point> points;
public:
    square(vector<point> points) : figure(points) {
        this->points = points;
    }
    void print()const override {
        cout << "\nSquare\n";
        for (auto el : points) el.print();
        cout << "\n\n";
    }
};

class pentagon : public figure {
    vector<point> points;
public:
    pentagon(vector<point> points) : figure(points) {
        this->points = points;
    }
    void print()const override {
        cout << "\nPentagon\n";
        for (auto el : points) el.print();
        cout << "\n\n";
    }
};

int main()
{
    
}

