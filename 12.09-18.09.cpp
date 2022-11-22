#include <iostream>
#include <math.h>
int main() {
  std::cout << "Enter x!\n";
  int x = 0;
  std::cin >> x;

  if (x<=1){
    std::cout << 0.5*cos(x)+4*x;
  }
  if (x<0){
    std::cout << 0.25*pow(x,4)+2*pow(2,2);
  }
  if (x>1){
    std::cout << 0.9*sqrt(x)-0.8*x;
  }
     
}