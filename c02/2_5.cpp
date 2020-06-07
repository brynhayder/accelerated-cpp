// Program to print rectangles and equilateral triangles

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    const char marker = '*';
    
    // Print isosceles right-triangle
    const int triangle_height = 10;
    string bottom_row(triangle_height, marker);
        
    cout << marker << endl;
    
    for (int i = 0; i != triangle_height - 2; i++){
        cout << '*' + string(i, ' ') + '*' << endl;
    }
    
    cout << bottom_row << endl;
    
    // spacing
    cout << '\n' << endl;
    
    // Print rectangle
    
    const int rectangle_width = 10;
    const int rectangle_height = 5;
    
    string top_bottom(rectangle_width, marker);
    string row = marker + string(rectangle_width - 2, ' ') + marker;
        
    cout << top_bottom << endl;
    
    for (int i = 0; i != triangle_height - 2; i++){
        cout << row << endl;
    }
    
    cout << top_bottom << endl;    
        
    return 0;
}

