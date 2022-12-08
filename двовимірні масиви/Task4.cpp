#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=4, n=6;
  int rah[n];
  int mass[m][n];

  srand(time(NULL));
  for(int i=0;i<n;i++){
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
        rah[j]+=mass[i][j];
    }
  }
  for(int j=0;j<n;j++){
    cout << "У " << j+1 << "-му стовпчику = " << rah[j] << endl;
  }
}