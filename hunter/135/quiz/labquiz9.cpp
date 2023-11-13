/*
Author: Jason Jordan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 9

9

*/


if ((row + col)% 2 == 0){
  out[row][col] = 255;
} else {
  out[row][col] = 0;
}
// #include <iostream>
// #include <cassert>
// #include <cstdlib>
// #include <fstream>

// using namespace std;

// const int MAX_H = 512;
// const int MAX_W = 512;
// int main(){
// 	int img[MAX_H][MAX_W];
//   int h,w;
//   readImage(img, h, w);
//   int out [MAX_H][MAX_W];
//   for (int row = 0; row < h; row++){
//     for (int col = 0; col < w; col++){
//       if ((row + col)% 2 == 0){
//         out[row][col] = 255;
//       } else {
//         out[row][col] = 0;
//       }




//     }
//   }
//   writeImage(out,h,w)
  
// }