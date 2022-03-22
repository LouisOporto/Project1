#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"

//Player Void
void player(std::string input){
  graphics::Image player(50, 50);
  player.DrawPolygon ({20, 32, 22, 28, 12, 22, 10, 26}, 71, 69, 69);
  player.DrawPolygon ({30, 32, 28, 28, 38, 22, 40, 26}, 71, 69, 69);
  player.DrawPolygon ({12, 22, 10, 10, 8, 24, 6, 45, 5, 35, 10, 26}, 116, 112, 112);
  player.DrawPolygon ({38, 22, 40, 10, 42, 24, 44, 45, 45, 35, 40, 26}, 116, 112, 112);
  player.DrawPolygon ({25, 2, 28, 5, 32, 30, 25, 35, 18, 30, 22, 5}, 116, 112, 112);
  player.DrawPolygon ({32, 30, 30, 40, 20, 40, 18, 30, 25, 35}, 100, 80, 80);
  player.DrawPolygon ({22, 20, 24, 15, 26, 15, 28, 20, 28, 28, 26, 30, 24, 30, 22, 28}, 75, 187, 222);
  player.DrawRectangle (23, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle (23, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle (27, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle (27, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle (20, 41, 11, 1, 53, 194, 202);
  player.DrawRectangle (20, 42, 11, 1, 69, 235, 244);
  player.SaveImageBmp(input);
}
//Player Projectile Void
void p_projectile(std::string input) {
  graphics::Image p_projectile(5, 5);
  p_projectile.DrawLine( 1, 4, 1, 0, 255,  0, 0, 1);//outside
  p_projectile.DrawLine( 3, 4, 3, 0, 255,  0, 0, 1);//outside
  p_projectile.SaveImageBmp(input);
}

void o_projectile_(std::string input) {
  graphics::Image oProjectile(10, 10);
  oProjectile.DrawRectangle(0, 0, 2, 1, 102, 0, 0);
  oProjectile.DrawRectangle(0, 1, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(1, 2, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(2, 3, 6, 1, 102, 0, 0);
  oProjectile.DrawRectangle(2, 4, 2, 1, 102, 0, 0);
  oProjectile.DrawRectangle(3, 5, 1, 1, 102, 0, 0);
  oProjectile.DrawRectangle(6, 4, 2, 1, 102, 0, 0);
  oProjectile.DrawRectangle(6, 5, 1, 1, 102, 0, 0);
  oProjectile.DrawRectangle(6, 2, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(7, 1, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(8, 0, 2, 1, 102, 0, 0);
  oProjectile.DrawRectangle(2, 6, 6, 1, 102, 0, 0);
  oProjectile.DrawRectangle(1, 7, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(6, 7, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(0, 8, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(7, 8, 3, 1, 102, 0, 0);
  oProjectile.DrawRectangle(0, 9, 2, 1, 102, 0, 0);
  oProjectile.DrawRectangle(8, 9, 2, 1, 102, 0, 0);
  oProjectile.SaveImageBmp(input);
}
int main() {
   std::string player_, opponent_, p_projectile_, o_projectile_;
   std::cout << "Please provide player image filename: ";
   std::cin >> player_;
   player(player_);
   std::cout << "Please provide opponent image filename: ";
   std::cin >> opponent_;
   opponent(opponent_);
   std::cout << "Please provide player projectile image filename: ";
   std::cin >> p_projectile_;
   p_projectile(p_projectile_);
   std::cout << "Please provide opponent projectile image filename: ";
   std::cin >> o_projectile_;
   o_projectile(o_projectile_);
return 0;
}
