#include <cstdlib> // для функції rand()
#include <ctime>   // для функції time()
#include <iostream>

using namespace std;

int main() {

  const int rozmir = 10;

  int mass[rozmir][rozmir];

  srand(time(nullptr));
  for (int i = 0; i < rozmir; i++) {
    for (int j = 0; j < rozmir; j++) {
      mass[i][j] = rand() % 100;
    }
  }

  for (int i = 0; i < rozmir; i++) {
    for (int j = 0; j < rozmir; j++) {
      cout << mass[i][j] << " ";
    }
    cout << endl;
  }

  int *ptr = &mass[0][0];
  
  cout << endl;
  cout << endl;
  cout << "Елементи головної діагоналі" << endl;


    for (int i = 0; i < rozmir; i++) {
        cout << *(ptr + i * rozmir + i) << " ";
    }
  cout << endl;
  cout << endl;
  cout << "Елементи побічної діагоналі" << endl;

    for (int i = 0; i < rozmir; i++) {
        cout << *(ptr + i * rozmir + (rozmir - 1 - i)) << " ";
    }
    cout << endl;
    cout << endl;
  int par = 0;
  int nepar =0;
  
     for (int i = 0; i < rozmir*rozmir; i++) {
       if(*(ptr+i)%2==0){
         par++;
       }else{
         nepar++;
       }
    }
  cout << "Парні елементи" << endl;
  cout << par << endl;
  cout << "Непарні елементи" << endl;
  cout << nepar << endl;

  return 0;
}