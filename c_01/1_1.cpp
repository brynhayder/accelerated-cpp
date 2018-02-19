#include <iostream>
#include <string>

int main(){
    std::string name;
    
    std::cout << "Please enter your name: ";
    std::cin >> name;
    
    const std::string greeting = "Hello " + name + "!";
    
    const std::string outer_banner(greeting.size() + 4, '*');
    const std::string spaces(greeting.size() + 2, ' ');
    
    const std::string inner_banner = '*' + spaces + '*';
    
    std::cout << outer_banner << std::endl;
    std::cout << inner_banner << std::endl;
    std::cout << "* " + greeting + " *" << std::endl;
    std::cout << inner_banner << std::endl;
    std::cout << outer_banner << std::endl;
    
    return 0;
}