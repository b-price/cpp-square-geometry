//
//  main.cpp
//  439Assignment0
//
//  Created by Benjamin Price on 2/12/24.
//
#include <iostream>
using namespace std;

double squareArea(double side){
    return side * side;
}

double squarePerimeter(double side){
    return side * 4;
}

// Driver code
int main()
{
    // Declare the variables
    double num;
        
    cout << "Square Geometry\n";

    // Input the side length
    cout << "Enter side length of square: ";
    cin >> num;

    // Shows area
    cout << "Square's area is: " << squareArea(num) << "\n";
        
    // Shows perimeter
    cout << "Square's perimeter is: " << squarePerimeter(num) << "\n";

    return 0;
}
