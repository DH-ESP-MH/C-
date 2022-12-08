#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main() {
  int m=3, n=4, max=0, index;
  int mass[m][n];

  srand(time(NULL));
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      mass[i][j]= rand()%10;
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      
      if(j==n-1){
        cout << mass[i][j] << endl;
      }else{
        cout << mass[i][j] << ", ";
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(mass[i][j]>max){
        max = mass[i][j];
        index = i*n+j+1;
      }
    }
  }
    cout << " максимальний елемент = " << max << "  номер: "<< index << endl;
}