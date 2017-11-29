#include "player.h"



//class of the second player
class Player_2 : public Player
{
private:
  App_Color <int , int , int> color_player;

public:
  Player_2(){
    color_player.R = 0;
    color_player.G = 255;
    color_player.B = 0;
  }
  Player_2(const int _R ,const int _G ,const int _B){
    color_player.R = _R;
    color_player.G = _G;
    color_player.B = _B;
  }
  App_Color get_Player_1_Color(){  
    return color_player;
  }
  //funcion para colocar el color del jugador 
  void set_Player_1_Color(const int _R , const int _G , const int _B){
    App_Color.R = _R;
    App_Color.G = _G;
    App_Color.B = _B;
  }
  virtual void launch_bomb(){
    //some code here  
  }
};
