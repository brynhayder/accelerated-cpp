/* This script prints the quartiles of a sequence of numbers 

We use the method described as Method 3 on the wikipedia page 
https://en.wikipedia.org/wiki/Quartile
*/

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

double get_median(vector<double> values);
vector<double> get_quartiles(vector<double> values);


int main()
/*
Print the quartiles of numbers inputted through stdin
*/
{
    cout << "Enter the values of which you would like the quartiles:" << endl;

    vector<double> values;
    double x;
    
    while (cin>>x)
       values.push_back(x);

    // Complete the program from here. you will probably just need to get quartiles and then loop and print

   double median = get_median(values);
    
   vector<double> quartiles = get_quartiles(values);

   cout << "The quartiles are: " << endl;

   vector<double>::size_type i;
   for (i=0; i<quartiles.size(); i++){
       cout << quartiles[i] << endl;
   }
    
   return 0; 
}


vector<double> get_quartiles(vector<double> values)
{
   /* 
   - 
   */ 
    
    return values;
}



double get_median(vector<double> values)
/*Return the median of the array.
This will sort the array as a side effect.

This will return 0.0 if the argument is entry.
*/
{

    typedef vector<double>::size_type vec_sz;

    vec_sz size = values.size();

    if (size == 0)
        return 0.0;

    sort(values.begin(), values.end());

    vec_sz mid = size / 2;
    double median;
    median = size % 2 == 0 ? (values[mid] + values[mid - 1]) / 2
                           : values[mid];
    
    return median; 
}
