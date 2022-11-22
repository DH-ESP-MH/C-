#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main() {
  int N = 12;
  int t;
  int array1[N];
  int array2[N];

  srand(time(NULL));
  std::cout << "Вхідний масив:"
            << "\n";
  for (int i = 0; i < N; i++) {
    array1[i] = rand() % 20;
    if (i == N - 1) {
      std::cout << array1[i] << "\n";
    } else {
      std::cout << array1[i] << ", ";
    }
  }
  for (int i = 0; i < N; i++) {
    array2[i] = array1[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (array2[j] > array2[j + 1]) {
        t = array2[j];
        array2[j] = array2[j + 1];
        array2[j + 1] = t;
      }
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (array1[j] < array1[j + 1]) {
        t = array1[j + 1];
        array1[j + 1] = array1[j];
        array1[j] = t;
      }
    }
  }

  std::cout << "Зростання:"
            << "\n";
  for (int i = 0; i < N; i++) {
    if (i == 11) {
      std::cout << array2[i] << "\n";
      break;
    } else {
      std::cout << array2[i] << ", ";
    }
  }
  std::cout << "Спадання:\n";
  for (int i = 0; i < N; i++) {
    if (i == 11) {
      std::cout << array1[i] << "\n";
      break;
    } else {
      std::cout << array1[i] << ", ";
    }
  }
}