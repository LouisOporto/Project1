#include <iostream>

#include "cpputils/graphics/image.h"
//Add the void functions into here for all four void functions //

int main() {
   player();
   opponent();
   player_projectile();
   opponent_projectile();
   
   std::string player_input, opponent_input, p_projectile, o_projectile;
   std::cout << "Please provide player image file name: ";
   std::cin >> player_input;
   std::cout << "Please provide opponent image filename: ";
   std::cin >> opponent_input;
   std::cout << "Please provide player projectile image filename: ";
   std::cin >> p_projectile;
   std::cout << "Please provide opponent projectile image filename ";
   std::cin >> o_projectile;
   
return 0;
