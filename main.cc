void p_projectile() {
  graphics::Image p_projectile(50, 50);
  p_projectile.DrawLine( 23, 32, 23, 18, 255,  0, 0, 3);//outside
  p_projectile.DrawLine( 27, 32, 27, 18, 255,  0, 0, 3);//outside
  p_projectile.DrawLine( 24, 32, 24, 18, 255,  102, 102, 2);//inside
  p_projectile.DrawLine( 26, 32, 26, 18, 255,  102, 102, 2);//inside
  p_projectile.DrawLine( 25, 32, 25, 18, 255,  204, 204, 1);//inner
  p_projectile.SaveImageBmp("p_projectile.bmp");
}
