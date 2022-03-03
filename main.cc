#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"
//Add the void functions into here for all four void functions //

int main() {
   player();
   opponent();
   p_projectile();
   o_projectile();
   
   std::string player_, opponent_, p_projectile_, o_projectile_;
   std::cout << "Please provide player image file name: ";
   std::cin >> player_input_;
   std::cout << "Please provide opponent image filename: ";
   std::cin >> opponent_input_;
   std::cout << "Please provide player projectile image filename: ";
   std::cin >> p_projectile_;
   std::cout << "Please provide opponent projectile image filename ";
   std::cin >> o_projectile_;
   
return 0;
}
