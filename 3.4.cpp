#include <iostream> 
#include <cmath> 
using namespace std;
//void dovich(int); 
void dvoich(int x1) {
    int mod;
    long c = 0, p = 1;
    while (x1 > 0) {
        mod = x1 % 2;
        x1 = (x1 - mod) / 2;
        c = c + (mod * p);
        p = p * 10;
    }
    cout << "In binary system: " << c << endl;
}
int main() {
    int a;
    cout << ("Enter a positive integer: ");
    cin >> a;
    dvoich(a);

    return 0;
}