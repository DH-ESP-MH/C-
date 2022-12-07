#include <iostream>
#include <time.h>
 
using namespace std;
 
int main()
{
  int N=5;
  int mass[N];
  bool flag=false;
  int n1;
  int n2;
  srand(time(0));
  
  for(int i=0;i<N;i++){mass[i]=rand()%11;}
  cout <<"Вхідний масив"<<endl;
  while(true){
  flag =true;
   for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
     if(mass[i]==mass[j] && i!=j){
      mass[i] = rand()%11;
      flag = false;
      }
    }
   }
   if(flag){break;}
  }
  
  for(int i=0;i<N;i++){cout<<mass[i]<<" ";}

  int max = mass[0];
  for (int i = 0; i < N; i++) {
    if (mass[i] > max) {
      max = i;
      n1 = mass[i];
    }
  }
  
  int min = mass[0];
  for (int i = 0; i < N; i++) {
    if (mass[i] < min) {
      min = i;
      n2 = mass[i];
    }
  }
  
  mass[min] = n1;
  mass[max] = n2;
   
  cout << "Вихідний масив:"<<endl;
  for(int i=0; i<N; i++){
    if (i==N-1){
      cout << mass[i] << endl; 
    }else{
      cout << mass[i] << " ";}}
  
   
  return 0;
}