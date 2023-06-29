// testing 
#include <stdio.h>
#include <iostream>

// int main()
// {
//   printf("test!!!");
//   return 0;
// }

// int main2 ()
// {
//   float kg, lbs;
//   std::cout << "Enter kg: ";
//   std::cin >> kg;
//   lbs = kg * 2.2;
//   std::cout << std::endl << "Lbs: " << lbs << "\n\n";
//   return 0;
// }

// int main()
// {
//   int i, j;
//   for (i = 0; i<4; i++)
//   {
//     std::cout << "The world turned upside down...\n";
//   }
//   for (j = 10; j > 0; j--)
//   {
//     std::cout << j << " ";
//   }
//   std::cout << "\nBlast off!!" << std::endl;
//   return 0;
// }

int main()
{
  int i, j, size;
  std::cout << "Enter size: ";
  std::cin >> size;
  for (i = 0; i < size ; i++)
  {
    for (j= 0; j < size; j++)
    { std::cout << "*"; }
    std::cout << std::endl;
  }
  std::cout << "\n\n";

  for (i = size; i > 0; i--)
  {
    for (j= 0; j < size; j++)
    { std::cout << "*"; }
    std::cout << std::endl;
  }
  return 0;
}