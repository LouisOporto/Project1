void o_projectile(std::string input) {
  graphics::Image oProjectile(5, 5);
  oProjectile.DrawLine(2, 0, 0, 4, 255, 10, 10, 1);
  oProjectile.DrawLine(2, 0, 4, 4, 255, 10, 10, 1);
  oProjectile.DrawLine(2, 1, 1, 4, 102, 0, 0, 1);
  oProjectile.DrawLine(2, 1, 3, 4, 102, 0, 0, 1);
  oProjectile.SaveImageBmp(input);
}
