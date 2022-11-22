#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main() {
  int N = 10;
  int max = 0;
  int mas[N];

  srand(time(NULL));
  std::cout << "Масив1:"
            << "\n";
  for (int i = 0; i < N; i++) {
    mas[i] = rand() % 20 - 10;
    if (i == N - 1) {
      std::cout << mas[i] << "\n";
    } else {
      std::cout << mas[i] << ", ";
    }
  }
  for (int i = 0; i < N; i++) {
    if (mas[i] > max) {
      max = mas[i];
    }
  }
  for (int i = 0; i < N; i++) {
    if (mas[i] == max) {
      max = i;
    }
  }
  for (int i = 0; i < max; i++) {
    if (mas[i] < 0) {
      mas[i] = 0;
    }
  }
  std::cout << "Масив2:"
            << "\n";
  for (int i = 0; i < N; i++) {
    if (i == N - 1) {
      std::cout << mas[i] << "\n";
    } else {
      std::cout << mas[i] << ", ";
    }
  }
}