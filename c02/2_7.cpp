// Program to count down from 10 to -5

#include <iostream>

int main(){
    int start = 10;
    int end = - 5;
    
    int i = start;
    while (i != end - 1){
        std::cout << i << std::endl;
        i--;
    }
    return 0;
}