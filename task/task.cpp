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
    figure* figures[6]{
        new triangle(vector<point>{point(2,4),point(5,1),point(6,2)}),
        new square(vector<point>{point(2,6),point(1,1),point(6,32),point(2,7)}),
        new segment(vector<point>{point(4,6),point(11,2)}),
        new pentagon(vector<point>{point(12,6),point(1,5),point(4,12),point(2,32),point(7,4)}),
        new segment(vector<point>{point(1,5),point(7,5)}),
        new square(vector<point>{point(2,1),point(2,15),point(6,32),point(24,72)})
    };
    for (auto el : figures) {
        el->print();
    }
}

