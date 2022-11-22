#include <iostream>
#include <math.h>
int main() {

  for (int i = 0; i < 5; i++) {
    std::cout << "\nEnter x!\n";
    int x = 0;
    std::cin >> x;
    std::cout << pow(sin(x), 5) + abs(5 * x - 1.5);
  }
}