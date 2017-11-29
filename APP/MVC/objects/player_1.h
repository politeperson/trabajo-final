#include "player.h"


//class of the first player
class Player_1 : public Player
{
private:
  App_Color color_player(255 , 255 , 255);
  
public:
  Player_1(){}
  Player_1(const int _R ,const int _G ,const int _B){
    color_player.red = _R;
    color_player.green = _G;
    color_player.blue = _B;
  }
  Player_1(const float _x , const float _y){
    canon.setOrigin(Vector2f(3,0));
    canon.setSize(Vector2f(6,-20));
    canon.setPosition(canon_position.x , canon_position.y);
    body.setPosition(player_position.x , player_position.y);

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