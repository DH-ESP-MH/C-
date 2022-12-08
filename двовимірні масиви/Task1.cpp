#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=4, n=3;
  int rah[m];
  int mass[m][n];

  srand(time(NULL));
  for(int i=0;i<m;i++){
    rah[i] = 0;
  }
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
      if(mass[i][j]%2==0){
        rah[i]++;
      }
    }
  }
  for(int i=0;i<m;i++){
    cout << "У " << i+1 << "-му рядку парних елементів = " << rah[i] << endl;
  }
}