/* The example program for the chapter */

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std; // Is this good practice?

int main(){
	cout << "Please enter your first name: ";
	string name;
    cin >> name;
    cout << "Hello " << name << "!" << endl;

    cout << "Please enter your midterm and final grades:" << endl;
    double midterm, final;
    cin >> midterm;
    cin >> final;

    cout << "Enter all of your homework grades followed by end of file:" << endl;

    vector<double> homework;
    double x;
    
    while (cin>>x)
       homework.push_back(x);

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    if (size == 0)
    {
        cout << endl << "You must enter your grades. Please try again." << endl;
        return 1;
    }

    sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
                           : homework[mid];
    
    streamsize prec = cout.precision(3);
    cout << "Your final grade is: " 
         << 0.2 * midterm + 0.4 * final + 0.4 * median
         << setprecision(prec)
         << endl;
    
    return 0;
}


