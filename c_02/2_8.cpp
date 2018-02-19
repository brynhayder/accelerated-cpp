// Compute product of numbers in [1, 10)
#include <iostream>

int main(){
    int sup = 10;
    int start = 1;
    
    int j = start;
    for (int i = 1; i != sup; i++){
        j *= i;
    }
    std::cout << j << std::endl;
    return 0;
}