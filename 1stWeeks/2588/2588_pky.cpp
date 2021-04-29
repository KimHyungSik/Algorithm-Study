#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a = 0, b = 0;
    int digit = 0;
    cin >> a >> b;
    for (digit = 100; digit > 0; digit /= 10)
        cout << a * ((b / digit) % 10) << endl;
    cout << a * b;
}