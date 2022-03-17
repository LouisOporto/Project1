void o_projectile_() {
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
  oProjectile.SaveImageBmp("opponent_projectile_.bmp");
}
