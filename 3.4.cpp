#include <iostream> 
#include <cmath> 
using namespace std;

void dvoich(int x1) {
    int mod;
    long c = 0, p = 1;
    while (x1 > 0) {
        mod = x1 % 2;
        x1 = (x1 - mod) / 2;
        c = c + (mod * p);
        p = p * 10;
    }
    cout << c << endl;
}
int main() {
    int a = 5, b = 32, c = 1;
    //cout << "Enter a positive integer: ";
    //cin >> a;
    cout << "a = 5  =>  "; dvoich(a);
    cout << "b = 32 =>  "; dvoich(b);
    cout << "c = 1  =>  "; dvoich(c);

    return 0;
}