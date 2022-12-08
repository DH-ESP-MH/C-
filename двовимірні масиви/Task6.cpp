#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
  int m=4, n=7, min=100, index;
  int mass[m][n];

  srand(time(NULL));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      mass[i][j]= rand()%10;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout << mass[i][j];
      if(j==n-1){
        cout << mass[i][j] << endl;
      }else{
        cout << mass[i][j] << ", ";
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(mass[i][j]<min){
        min = mass[i][j];
        index = i*n+j+1;
      }
    }
  }
    cout << "мінімальний елемент = " << min << " номер: "<< index << endl;
}