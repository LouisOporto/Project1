void p_projectile(std::string input) {
  graphics::Image p_projectile(5, 5);
 p_projectile.DrawLine( 1, 4, 1, 0, 255,  0, 0, 1);//outside
  p_projectile.DrawLine( 3, 4, 3, 0, 255,  0, 0, 1);//outside
  p_projectile.SaveImageBmp(input);
}
