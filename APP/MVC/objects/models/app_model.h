
#include <iostream>
#include <SFML/System/Time.hpp>
#include <math.h>
#include <utility>

using namespace std;

/*Global variables */
const float gravity = 9.8;
const float PI = 3.14159;
const int surface = 500.0;
const float default_player_size = 10.0;
const int default_bomb_size = 5;

//calculus
float calculate_range(float v_0 , float angle){
	return (pow(v_0,2) * sin((2 * angle) * PI/180)) / 9.8;
}
float calculate_height(float v_0, float angle){
	return (pow(v_0,2) * pow(sin(angle * PI/180),2)) / (2*9.8);
}
/*
void calculate_time(Time &time, float v_0, float angle){
	float *t = new float;
	*t = (2*pow(v_0,2) * sin((2 * angle) )) / gravity;
	time = milliseconds(t / (calculate_range(v_0 , angle) / 0.01));
	delete t;
}*/
float calculate_parameter(float V_x , float V_y){
	return pow(V_x, 2) / (4 *((surface - 10) - V_y));
}
float update_bomb_position(float C_x , float V_x , float V_y , float parameter){
	return (pow(C_x - V_x, 2) + (4 * V_y * parameter)) / (4 * parameter);
}




