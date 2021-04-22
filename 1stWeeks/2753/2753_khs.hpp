#include <iostream>

int main(){
    int num;
    
    std::cin >> num;
    
    std::cout<< (((num % 4 == 0) && (num % 100 != 0)) || (num % 400 == 0));
    
    return 0;
}
