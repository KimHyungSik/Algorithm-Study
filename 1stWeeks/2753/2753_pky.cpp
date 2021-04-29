#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a = 0;
    bool b = 0;

    cin >> a;
    cout << ((a % 400) ? ((a % 100) ? ((a % 4) ? 0 : 1) : 0) : 1);
}