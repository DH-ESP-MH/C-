#include <iostream>

struct Date{
  int hr;
  int mn;
};

using namespace std;
int main(){
  Date date;
  int Pm;

 TryAgain:
  cout << "Введіть години: ";
  cin >> date.hr;
  cout << "Введіть хвилини: ";
  cin >> date.mn;
  cout << "Введіть час у хвилинах який потрібно додати: ";
  cin >> Pm;
  

  if(date.hr>=24 || date.mn>60){
    cout << "-----------------------------------------------\n";
    cout << "Введіть коректну дату\n";
    goto TryAgain;
  }
  
    date.mn += date.hr*60+Pm;
    date.hr = date.mn/60;
    date.mn -= date.hr*60;

  while(date.hr>=24){
    date.hr-=24;
  }
  

  if(date.hr<10 && date.mn>10){
    cout << "0" << date.hr << ":" << date.mn;
  }else if(date.hr>10 && date.mn<10){
    cout << date.hr << ":" << "0" << date.mn;
  }else if(date.hr<10 && date.mn<10){
  cout << "0" << date.hr << ":" << "0" << date.mn;
  }else{
    cout << date.hr << ":" << date.mn;
  }
  cout << endl;
  goto TryAgain;
  return 0;
}