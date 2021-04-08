#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b;
        cin >> a >> b;
        int ab = a % 10;
        
        while(--b){
            ab = (ab * a) % 10;
        }
        
        if(!ab) ab = 10;
        cout << ab << "\n";
    }
    
    return 0;
}
