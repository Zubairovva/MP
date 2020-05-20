#include <iostream>
#include <math.h>
using namespace std;

void main(){
    int a = 0, b = 0;
    for (int i = 1; i < 101; i++) {
        a += i * i;
    }
    cout << "Sum of squares: " << a << endl;
    for (int i = 1; i < 101; i++) {
        b += i;
    }
    b = pow(b, 2);
    cout << "Amount squared: " << b << endl;

    int r = b - a;
    cout << "Difference:\n";
    cout << b << " - " << a << " = " << r << endl;
}