#include <iostream>

int main() {

  std::cout << "Enter student number!\n";
  int x = 0;
  std::cin >> x;

  switch (x) {
  case 1:
    std::cout << "Van 83,73";
    break;
  case 2:
    std::cout << "Billy 99.87";
    break;
  case 3:
    std::cout << "Denny 68,32";
    break;
  case 4:
    std::cout << "Ricardo 74,67";
    break;
  }
}