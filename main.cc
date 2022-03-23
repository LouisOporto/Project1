void opponent_(std::string input){
  graphics :: Image opponent(50,50);
  //head of the enemy (roughly)
  opponent.Drawline(12,1,14,1,0,0,0,1);
  opponent.DrawRectangle(11,2, 1,1, 0,0,0);
  opponent.DrawRectangle(15,2, 1,1, 0,0,0);
  opponent.Drawline(12,2,14,2,128,0,128,1);
  opponent.DrawRectangle(11,3, 4,3, 128,0,128);
  opponent.Drawline(10,3, 10,4, 0,0,0, 1);
  opponent.Drawline(16,3, 16,4, 0,0,0, 1);
  //major fills
  opponent.DrawRectangle(10,5, 2,15, 128,0,128);
  opponent.DrawRectangle(15,5, 2,15, 128,0,128);
  opponent.DrawRectangle(9,14, 9,2, 128,0,128);
  opponent.DrawRectangle(8,12, 2,2, 128,0,128);
  opponent.DrawRectangle(17,12, 2,2, 128,0,128);
  opponent.DrawRectangle(11,20, 2,2, 128,0,128);
  opponent.DrawRectangle(18,20, 2,2, 128,0,128);
  opponent.DrawRectangle(14,20, 2,2, 128,0,128);
  //outline (why did i make this creature so difficult to draw :(  )
  opponent.Drawline(9,5, 9,7, 0,0,0, 1);
  opponent.Drawline(8,8, 8,11, 0,0,0, 1);
  opponent.Drawline(17,5, 17,7, 0,0,0, 1);
  opponent.Drawline(10,3, 10,4, 0,0,0, 1);
  opponent.Drawline(18,8, 18,11, 0,0,0, 1);
  opponent.Drawline(5,8, 5,9, 0,0,0, 1);
  opponent.Drawline(6,10, 6,12, 0,0,0, 1);
  opponent.Drawline(8,14, 8,15, 0,0,0, 1);
  opponent.Drawline(9,17, 9,20, 0,0,0, 1);
  opponent.Drawline(21,8, 21,9, 0,0,0, 1);
  opponent.Drawline(20,10, 20,12, 0,0,0, 1);
  opponent.Drawline(18,14, 18,15, 0,0,0, 1);
  opponent.Drawline(17,17, 17,20, 0,0,0, 1);
  opponent.Drawline(13,20, 13,22, 0,0,0, 1);
  opponent.Drawline(12,17, 12,19, 0,0,0, 1);
  opponent.Drawline(14,17, 14,19, 0,0,0, 1);
  opponent.DrawRectangle(13,16, 1,1, 0,0,0);
  opponent.DrawRectangle(7,13, 1,1, 0,0,0);
  opponent.DrawRectangle(19,13, 1,1, 0,0,0);
  opponent.Drawline(10,21, 12,23, 0,0,0, 1);
  opponent.Drawline(14,23, 16,21, 0,0,0, 1);
  opponent.Drawline(7,16, 8,17, 0,0,0, 1);
  opponent.Drawline(19,16, 18,17, 0,0,0, 1);
  opponent.Drawline(6,7, 7,8, 0,0,0, 1);
  opponent.Drawline(19,8, 20,7, 0,0,0, 1);
  opponent.Drawline(12,12, 13,13, 0,0,0, 1);
  opponent.DrawRectangle(14,12, 1,1, 0,0,0);
  //misc. coloring
  opponent.DrawRectangle(12,13, 1,1, 128,0,128);
  opponent.DrawRectangle(14,13, 1,1, 128,0,128);
  opponent.DrawRectangle(12,22, 1,1, 128,0,128);
  opponent.DrawRectangle(14,22, 1,1, 128,0,128);
  opponent.Drawline(8,16, 12,16, 128,0,128, 1);
  opponent.Drawline(8,16, 12,16, 128,0,128, 1);
  opponent.Drawline(14,16, 18,16, 128,0,128, 1);
  opponent.Drawline(6,8, 6,9, 128,0,128, 1);
  opponent.Drawline(20,8, 20,9, 128,0,128, 1);
  opponent.Drawline(7,9, 7,12, 128,0,128, 1);
  opponent.Drawline(19,9, 19,12, 128,0,128, 1);
  opponent.Drawline(9,8, 9,11, 128,0,128, 1);
  opponent.Drawline(17,8, 17,11, 128,0,128, 1);
  opponent.Drawline(17,8, 17,11, 128,0,128, 1);
  opponent.DrawRectangle(12,6, 1,1, 128,0,128);
  opponent.DrawRectangle(14,6, 1,1, 128,0,128);
  //eye part
  opponent.DrawRectangle(12,7, 3,5, 255,255,255);
  opponent.DrawRectangle(13,6, 1,1, 255,255,255);
  opponent.DrawRectangle(13,12, 1,1, 255,255,255);
  opponent.Drawline(13,7, 13,11, 255,0,0, 1);
  opponent.Drawline(13,17, 13,19, 255,255,255, 1);
  opponent.SaveImageBmp(input);
}
