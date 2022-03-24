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
