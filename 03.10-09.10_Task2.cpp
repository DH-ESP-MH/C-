#include <iostream>
#include <math.h>

int main() {
  int k = 0;
  for (int i = 1; i < 26; i++) {
    k = k + pow(i, 2);
  }
  std::cout << k;
}