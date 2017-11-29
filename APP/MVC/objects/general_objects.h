#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>

using namespace std;
using namespace sf;

class App_Color{
public:
  int red , green , blue;
  App_Color(){
    red = 255;
    green = 255;
    blue = 255;
  }
  App_Color(const int red , const int green , const int blue){
    this->red = red;
    this->green = green;
    this->blue = blue;
  }
  ~App_Color(){}
};

template <typename C>
class Point {
public:
  C x,y;
  Point(){
    x = 0.0;
    y = 0.0;
  }
  Point(C x , C y){
    this->x = x;
    this->y = y;
  }
  ~Point(){}
};

