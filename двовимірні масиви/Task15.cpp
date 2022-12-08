#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;
int main() {
  int m=3, n=3, sum=0;
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
  int i=0, j=0;
  while(i<m && j<n){
    sum+=mass[i][j];
    i++;
    j++;
  }
  i=m-1, j=0;
  while(i>=0 && j<n){
  sum+=mass[i][j];
    i--;
    j++;
  }
  
    cout << "Сума = " << sum << endl;
}