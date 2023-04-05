#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int N = 8;

  srand(time(NULL));

  float *mas = new float[N];

  for (int i = 0; i < N; i++) {
    mas[i] = -2.0 + static_cast<float>(rand()) /
                        (static_cast<float>(RAND_MAX / (4.0)));
  }

  cout << "Масив" << endl;
  for (int i = 0; i < N; i++) {
    cout << mas[i] << " ";
  }
  cout << endl;
  cout << endl;

  int plus = 0;
  int minus = 0;

  for (int i = 0; i < N; i++) {
    if (mas[i] >= 0) {
      plus++;
    } else {
      minus++;
    }
  }

  cout << "Кількість додатніх чисел" << endl;
  cout << plus << endl;
  cout << "Кількість відємних чисел" << endl;
  cout << minus;

  delete[] mas;

  return 0;
}