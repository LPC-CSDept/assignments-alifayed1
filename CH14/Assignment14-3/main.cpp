#include <iostream>
#include "Square.cpp"

int main() {
  Square s;
  s.setWidth(5);

  Rect r;
  r = r.makeRectanglewithSquare(s);
  
  cout << "Width: " << r.getWidth() << endl;
  cout << "Height: " << r.getHeight() << endl;
  cout << "Area: " << r.getArea() << endl;
  
  return 0;
}