#include <iostream>
#include <string>

#include "cpputils/graphics/image.h"
//Add the void functions into here for all four void functions //

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
