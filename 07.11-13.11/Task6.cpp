#include <iostream>

using namespace std;
int main() {
  int N = 10;
  int array[N];
  bool flag = true;

  srand(time(NULL));
  for (int i = 0; i < N; i++) {
    array[i] = rand() % 10;
  }
  cout << "Вхідний масив:" << endl;
  for (int i = 0; i < N; i++) {
    if (i == N - 1) {
      cout << array[i] << endl;
    } else {
      cout << array[i] << ", ";
    }
  }
  for (int i = 0; i < N; i++) {
    if (array[i] == 0) {
      cout << "Номер першого нульвого елементу " << i + 1;
      flag = false;
      break;
    }
  }
  if (flag == true) {
    cout << "нульових елементів немає";
  }
}