#ifndef GENERAL_OBJECTS_H
#define GENERAL_OBJECTS_H

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include "general_objects.h"
#include "models/app_model.h"
using namespace std;
using namespace sf;


class Bomb{
protected:
  float angle,range;
  float height;
  float v_0;
  float parameter;
  Point <float> V;
  Point <float> C;
  Time time;
  App_Color bomb_color(255 , 255 , 255);
  CircleShape proyectile(sefault_bomb_size);
public:
	Bomb(){}
	Bomb(float origin_x){
		C(origin_x , 0.0);
		this->v_0 = 0.0;
		this->angle = 0.0;
		range = 0.0;
		height = 0.0;
		V(range / 2 , height);
		parameter = calculate_parameter(V.x , V.y);
		calculate_time(time , v_0 , angle);
	}
	Bomb(float v_0 , float angle , float origin_x){
		this->v_0 = v_0;
		this->angle = angle;
		range = calculate_range(v_0 , angle);
		height = calculate_height(v_0 , angle);
		V(range / 2 , height);
		parameter = calculate_parameter(V.x , V.y);
		calculate_time(time , v_0 , angle);
		C(origin_x , 0.0);
		parameter = abs(parameter);
	}
	Point get_bomb_position(){
		return C;
	}
	CircleShape get_bomb(){
		return proyectile;
	}
	void set_bomb_color(const int _R , const int _G , const int _B){
		bomb_color.red = _R;
		bomb_color.green = _G;
		bomb_color.blue = _B;
	}
	void parabolic_motion(){
		if (angle > 90)
        	C.x -= 0.1;
      	else
          	C.x += 0.1;
      	C.y=(pow(C.x -V.x, 2)/ (4*parameter))+V.y;
      	proyectile.setPosition(C.x,C.y);
  	}
  	~Bomb(){}
};

#endif