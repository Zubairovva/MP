#include <iostream> 
#include <cmath> 

using namespace std;
int main() {
    //setlocale(LC_ALL, "RUS");

    int num = 0, t = 0, d = 1;
    cout << "Enter a positive integer: \t";
    cin >> num;
    cout << "In decimal \t\tIn binary system\n";
    cout <<"\t"<< num << "\t=>\t";
    while (num)
    {
        t += (num % 2) * d;
        num = num / 2;
        d = d * 10; 
    }
    cout << t << endl;
    return 0;
}