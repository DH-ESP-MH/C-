#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main() {
  int A, bigger = 0, N = 30;
  int mass[N];
  cout << "Вхідне число A: ";
  cin >> A;

  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    mass[i] = rand() % 50;
  }
  cout << "Вхідний масив:" << endl;
  for (int i = 0; i < N; i++) {
    if (i == N - 1) {
      cout << mass[i] << endl;
    } else {
      cout << mass[i] << ", ";
    }
  }
  for (int i = 0; i < N; i++) {
    if (mass[i] > A) {
      bigger++;
    }
  }
  cout << "Кількість елементів більших за " << A << " = " << bigger;
}