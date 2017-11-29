#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include "app_view.h"
#include "objects/bomb.h"
using namespace std;
using namespace sf;


class Controller{
  public://only functions i think or not?


  void run_Controller(RenderWindow &win , Event &event){

    if(Keyboard::isKeyPressed(Keyboard::Up)){
      player_1.left_canon();
    }
    if(Keyboard::isKeyPressed(Keyboard::Down)){
      player_1.right_canon();
    }
    if(Keyboard::isKeyPressed(Keyboard::Left)){
      player_1.move_left();
    }
    if(Keyboard::isKeyPressed(Keyboard::Right)){
      player_1.move_right();
    }
    if(event.type == Event::KeyReleased && event.key.code == Keyboard::Space){
      //launch the bomb with the force
    }
    if(Keyboard::isKeyPressed(Keyboard::Space)){
      //increase the force or v_0
      player_1.set_force(((player_1.get_force() + 1) % 101));
      if(player_1.get_force() > 99){//if the force exceeds 100
        Bomb bomb(player_1.force() , player_1.get_angle());
        player_1.launch_bomb(win , bomb , surface_line);
      }
    }
  }
};

