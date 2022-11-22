#include <iostream>

int main() {
  std::cout << "Enter N!\n";
  int N = 0;
  std::cin >> N;
  int a = N % 10;
  int b = (N % 100 - a) / 10;
  int c = (N % 1000 - a - b) / 100;
  // std::cout << a % 2;
  int k = 1;
  if (a % 2 != 0) {
    k = k * a;
  }
  if (b % 2 != 0) {
    k = k * b;
  }
  if (c % 2 != 0) {
    k = k * c;
  }
  std::cout << k;
}