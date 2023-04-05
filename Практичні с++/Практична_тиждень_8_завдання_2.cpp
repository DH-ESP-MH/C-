#include <iostream>
using namespace std;

// Перевантажена функція increment з одним аргументом
void increment(int& var) {
    var += 1;
}

// Перевантажена функція increment з двома аргументами
void increment(int& var, int expr) {
    var += expr;
}

int main(void) {
    int var = 0;
    for(int i = 0; i < 10; i++) {
        if(i % 2) {
            increment(var);
        } else {
            increment(var, i);
        }
    }
    cout << var << endl;
    return 0;
}