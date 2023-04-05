#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {

  int size = 3;
  float **mas = new float *[size];
  for (int i = 0; i < size; i++) {
    mas[i] = new float[size];
  }

  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      mas[i][j] = rand() % 100 + 1;
    }
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << mas[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0; i < size; i++){
    delete [] mas[i];
  }
  
  return 0;
}