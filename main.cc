#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"

// Player Void
void player(std::string input) {
  graphics::Image player(50, 50);
  player.DrawPolygon({20, 32, 22, 28, 12, 22, 10, 26}, 71, 69, 69);
  player.DrawPolygon({30, 32, 28, 28, 38, 22, 40, 26}, 71, 69, 69);
  player.DrawPolygon({12, 22, 10, 10, 8, 24, 6, 45, 5, 35, 10, 26}, 116, 112,
                     112);
  player.DrawPolygon({38, 22, 40, 10, 42, 24, 44, 45, 45, 35, 40, 26}, 116, 112,
                     112);
  player.DrawPolygon({25, 2, 28, 5, 32, 30, 25, 35, 18, 30, 22, 5}, 116, 112,
                     112);
  player.DrawPolygon({32, 30, 30, 40, 20, 40, 18, 30, 25, 35}, 100, 80, 80);
  player.DrawPolygon(
      {22, 20, 24, 15, 26, 15, 28, 20, 28, 28, 26, 30, 24, 30, 22, 28}, 75, 187,
      222);
  player.DrawRectangle(23, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle(23, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle(27, 1, 1, 4, 255, 40, 40);
  player.DrawRectangle(27, 5, 1, 4, 116, 42, 42);
  player.DrawRectangle(20, 41, 11, 1, 53, 194, 202);
  player.DrawRectangle(20, 42, 11, 1, 69, 235, 244);
  player.SaveImageBmp(input);
}
// Player Projectile Void
void p_projectile(std::string input) {
  graphics::Image p_projectile(5, 5);
  p_projectile.DrawLine(1, 4, 1, 0, 255, 0, 0, 1);  // outside
  p_projectile.DrawLine(3, 4, 3, 0, 255, 0, 0, 1);  // outside
  p_projectile.SaveImageBmp(input);
}

// Opponent void
void opponent(std::string input) {
  graphics::Image opponent(50, 50);
  // head of the enemy (roughly)
  opponent.DrawLine(12, 1, 14, 1, 0, 0, 0, 1);
  opponent.DrawRectangle(11, 2, 1, 1, 0, 0, 0);
  opponent.DrawRectangle(15, 2, 1, 1, 0, 0, 0);
  opponent.DrawLine(12, 2, 14, 2, 128, 0, 128, 1);
  opponent.DrawRectangle(11, 3, 4, 3, 128, 0, 128);
  opponent.DrawLine(10, 3, 10, 4, 0, 0, 0, 1);
  opponent.DrawLine(16, 3, 16, 4, 0, 0, 0, 1);
  // major fills
  opponent.DrawRectangle(10, 5, 2, 15, 128, 0, 128);
  opponent.DrawRectangle(15, 5, 2, 15, 128, 0, 128);
  opponent.DrawRectangle(9, 14, 9, 2, 128, 0, 128);
  opponent.DrawRectangle(8, 12, 2, 2, 128, 0, 128);
  opponent.DrawRectangle(17, 12, 2, 2, 128, 0, 128);
  opponent.DrawRectangle(11, 20, 2, 2, 128, 0, 128);
  opponent.DrawRectangle(18, 20, 2, 2, 128, 0, 128);
  opponent.DrawRectangle(14, 20, 2, 2, 128, 0, 128);
  // outline (why did i make this creature so difficult to draw :(  )
  opponent.DrawLine(9, 5, 9, 7, 0, 0, 0, 1);
  opponent.DrawLine(8, 8, 8, 11, 0, 0, 0, 1);
  opponent.DrawLine(17, 5, 17, 7, 0, 0, 0, 1);
  opponent.DrawLine(10, 3, 10, 4, 0, 0, 0, 1);
  opponent.DrawLine(18, 8, 18, 11, 0, 0, 0, 1);
  opponent.DrawLine(5, 8, 5, 9, 0, 0, 0, 1);
  opponent.DrawLine(6, 10, 6, 12, 0, 0, 0, 1);
  opponent.DrawLine(8, 14, 8, 15, 0, 0, 0, 1);
  opponent.DrawLine(9, 17, 9, 20, 0, 0, 0, 1);
  opponent.DrawLine(21, 8, 21, 9, 0, 0, 0, 1);
  opponent.DrawLine(20, 10, 20, 12, 0, 0, 0, 1);
  opponent.DrawLine(18, 14, 18, 15, 0, 0, 0, 1);
  opponent.DrawLine(17, 17, 17, 20, 0, 0, 0, 1);
  opponent.DrawLine(13, 20, 13, 22, 0, 0, 0, 1);
  opponent.DrawLine(12, 17, 12, 19, 0, 0, 0, 1);
  opponent.DrawLine(14, 17, 14, 19, 0, 0, 0, 1);
  opponent.DrawRectangle(13, 16, 1, 1, 0, 0, 0);
  opponent.DrawRectangle(7, 13, 1, 1, 0, 0, 0);
  opponent.DrawRectangle(19, 13, 1, 1, 0, 0, 0);
  opponent.DrawLine(10, 21, 12, 23, 0, 0, 0, 1);
  opponent.DrawLine(14, 23, 16, 21, 0, 0, 0, 1);
  opponent.DrawLine(7, 16, 8, 17, 0, 0, 0, 1);
  opponent.DrawLine(19, 16, 18, 17, 0, 0, 0, 1);
  opponent.DrawLine(6, 7, 7, 8, 0, 0, 0, 1);
  opponent.DrawLine(19, 8, 20, 7, 0, 0, 0, 1);
  opponent.DrawLine(12, 12, 13, 13, 0, 0, 0, 1);
  opponent.DrawRectangle(14, 12, 1, 1, 0, 0, 0);
  // misc. coloring
  opponent.DrawRectangle(12, 13, 1, 1, 128, 0, 128);
  opponent.DrawRectangle(14, 13, 1, 1, 128, 0, 128);
  opponent.DrawRectangle(12, 22, 1, 1, 128, 0, 128);
  opponent.DrawRectangle(14, 22, 1, 1, 128, 0, 128);
  opponent.DrawLine(8, 16, 12, 16, 128, 0, 128, 1);
  opponent.DrawLine(8, 16, 12, 16, 128, 0, 128, 1);
  opponent.DrawLine(14, 16, 18, 16, 128, 0, 128, 1);
  opponent.DrawLine(6, 8, 6, 9, 128, 0, 128, 1);
  opponent.DrawLine(20, 8, 20, 9, 128, 0, 128, 1);
  opponent.DrawLine(7, 9, 7, 12, 128, 0, 128, 1);
  opponent.DrawLine(19, 9, 19, 12, 128, 0, 128, 1);
  opponent.DrawLine(9, 8, 9, 11, 128, 0, 128, 1);
  opponent.DrawLine(17, 8, 17, 11, 128, 0, 128, 1);
  opponent.DrawLine(17, 8, 17, 11, 128, 0, 128, 1);
  opponent.DrawRectangle(12, 6, 1, 1, 128, 0, 128);
  opponent.DrawRectangle(14, 6, 1, 1, 128, 0, 128);
  // eye part
  opponent.DrawRectangle(12, 7, 3, 5, 255, 255, 255);
  opponent.DrawRectangle(13, 6, 1, 1, 255, 255, 255);
  opponent.DrawRectangle(13, 12, 1, 1, 255, 255, 255);
  opponent.DrawLine(13, 7, 13, 11, 255, 0, 0, 1);
  opponent.DrawLine(13, 17, 13, 19, 255, 255, 255, 1);
  opponent.SaveImageBmp(input);
}
// Opponent Projectile
void o_projectile(std::string input) {
  graphics::Image oProjectile(5, 5);
  oProjectile.DrawLine(2, 0, 0, 4, 255,  10, 10, 1);
  oProjectile.DrawLine(2, 0, 4, 4, 255,  10, 10, 1);
  oProjectile.DrawLine(2, 1, 1, 4, 102, 0, 0, 1);
  oProjectile.DrawLine(2, 1, 3, 4, 102, 0, 0, 1);
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
