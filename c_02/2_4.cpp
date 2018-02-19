#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    std::cout << "Please enter your name: ";
    string name;
    std::cin >> name;
    
    const string greeting = "Hello " + name + '!';
    const int horizontal_pad = 6;
    const int vertical_pad = 3;
    const int rows = vertical_pad * 2 + 3;
    const string::size_type cols = greeting.size() + horizontal_pad * 2 + 2;
    const string spaces(cols - 2, ' ');
    
    std::cout << std::endl;
        
    for (int r=0; r!=rows; ++r){
        string::size_type c = 0;
        while (c!=cols){
            if (r==0 || r == rows-1 || c==0 || c==cols-1){
                std::cout << '*';
                c++;
            } else {
                if (r == vertical_pad + 1 && c == horizontal_pad + 1){
                    std::cout << greeting;
                    c += greeting.size();
                } else {
                    if (r != vertical_pad + 1){
                        std::cout << spaces;
                        c += spaces.size();
                    } else {
                        std::cout << ' ';
                        c++; 
                    }
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}