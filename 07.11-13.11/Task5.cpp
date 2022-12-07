#include <iostream>

using namespace std;
int main() {
  int smax, N=10;
  int mass[N] = {5, 8, 9, 2, 3, 6, 0, 4, 1, 7};

  cout << "Вихідний масив:";
  for(int i=0;i<N;i++){
    if(i==N-1){
      cout << mass[i] << endl;
    }else{
      cout << mass[i] << ", ";
    }
  }
  int max = mass[0];
  for(int i=0;i<N;i++){
    if(mass[i]>max){
      smax=max;
      max=mass[i];
    }
  }
  cout << "Друге за величиною чило у масиві = " << smax;
}