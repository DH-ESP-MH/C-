#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=5, n=7;
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
      
      if(j==n-1){
        cout << mass[i][j] << endl;
      }else{
        cout << mass[i][j] << ", ";
      }
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        rah[i]+=mass[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cout << "У " << i+1 << "-му рядку  " << rah[i] << endl;
  }
}