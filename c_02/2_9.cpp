// Compute max of two inputted numbers
#include <iostream>

int main(){
    int i;
    int j;
    
    std::cout << "Enter first number: ";
    std::cin >> i;
    
    std::cout << "Enter second number: ";
    std::cin >> j;
    
    std::cout << "The max is ";
        
    if (i > j){
        std::cout << i;
    }  else {
        std::cout << j;
    }
    std::cout << std::endl;
    return 0;
}   