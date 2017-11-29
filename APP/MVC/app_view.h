#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "objects/player.h"


using namespace std;
using namespace sf;


Player player_1(200.0 , surface - (2 * default_player_size));
RectangleShape surface_line(Vector2f(800 , 5));
surface_line.setPosition(0 , surface);

class my_window {
  RenderWindow win;
  Event event;
  int width,height;
public:
  my_window(int _width, int _height){
    width = _width;
    height = _height;
  }
  void close_aplication(){
    win.close();
  }

  void run_aplication(){
    win.create(VideoMode(width, height), "proyecto final");
    while(win.isOpen()){
      while (win.pollEvent(event))
      {
  	      if (event.type == Event::Closed){
              //deletes go here
              close_aplication();
          }
          if(Keyboard::isKeyPressed(Keyboard::Escape)){
              //deletes go here
              close_aplication();
          }
          //run_Controller( win , event);
       }
      win.clear(Color(0,0,0));
      win.draw(player_1.get_player_canon());
      win.draw(player_1.get_player_body());
      win.display();
    }
  }
};

/*
class app_view
{
public:
  app_view();
  ~app_view();

};*/


