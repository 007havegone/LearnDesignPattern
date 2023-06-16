#define _USE_MATH_DEFINES
#include <cmath>

enum class PointType
{
  cartesian,
  polar
};

class Point
{
  /*Point(float a, float b, PointType type = PointType::cartesian)
  {
    if (type == PointType::cartesian)
    {
      x = a; b = y;
    } 
    else
    {
      x = a*cos(b);
      y = a*sin(b);
    }
  }*/

  // use a factory method
  Point(float x, float y) : x(x), y(y){}
public:
  float x, y;

  friend class PointFactory;
};

class PointFactory
{
public:
  static Point NewCartesian(float x, float y)
  {
    return Point{ x,y };
  }

  static Point NewPolar(float r, float theta)
  {
    return Point{ r*cos(theta), r*sin(theta) };
  }
};

int main()
{
  Point p1 = PointFactory::NewCartesian(1, 2);
  Point p2 = PointFactory::NewPolar(5, M_PI);
}