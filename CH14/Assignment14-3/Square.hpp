#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square{
private:
    int width;
public:
    Square();
    void setWidth(double);
    int getWidth() const;
    int getArea() const;
    friend class Rect;
};

class Rect{
private:
    double width;
    double height;
public:
    Rect();
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    Rect makeRectanglewithSquare(Square s);
};

#endif