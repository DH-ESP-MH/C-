#include <iostream>

struct Date{
  int hr;
  int mn;
};

using namespace std;
int main() {
  Date dt1;
  Date dt2;
  Date S_D;

  TryAgain:
  cout << "Введіть початкові години: ";
  cin >> dt1.hr;
  cout << "Введіть початкові хвилини: ";
  cin >> dt1.mn;
  cout << "Введіть кінцеві години: ";
  cin >> dt2.hr;
  cout << "Введіть кінцеві хвилини: ";
  cin >> dt2.mn;
  

  if(dt1.hr>=24 || dt1.mn>60 || dt2.hr>=24 || dt2.mn>60){
    cout << "-----------------------------------------------\n";
    cout << "Введіть коректну дату\n";
    goto TryAgain;
  }
  
  S_D.hr = dt2.hr-dt1.hr;
  S_D.mn = dt2.mn-dt1.mn;
  
  if(S_D.hr<0){
    S_D.hr=24+S_D.hr;
  }
  if(S_D.mn<0){
    S_D.mn=60+S_D.mn;
    S_D.hr--;
  }

  if(S_D.hr<10 && S_D.mn>10){
    cout << "0" << S_D.hr << ":" << S_D.mn;
  }else if(S_D.hr>10 && S_D.mn<10){
    cout << S_D.hr << ":" << "0" << S_D.mn;
  }else if(S_D.hr<10 && S_D.mn<10){
  cout << "0" << S_D.hr << ":" << "0" << S_D.mn;
  }else{
    cout << S_D.hr << ":" << S_D.mn;
  }
  cout << endl;
  goto TryAgain;
}