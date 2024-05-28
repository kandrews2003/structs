#include <iostream>

using namespace std;

// Define a structure for Rectangle

struct Rectangle {

    double length;

    double width;

};

 

// Function to calculate the area of a rectangle

double calculateArea(const Rectangle &rect) {

    return rect.length * rect.width;

}
double calcPerim(const Rectangle &rect) {

return 2 *(rect.length + rect.width);
}

struct Rectanglesecond {

    double seclength;

    double secwidth;

};


double calcPerim(const Rectangle &rect) {
return 2 * (rect.seclengthlength + rect.secwidth);
}


 

int main() {

    // Create a Rectangle structure and initialize it

    Rectangle rect;

    rect.length = 5.0;

    rect.width = 3.0;

    Rectanglesecond again;
    
    again.length = 3.5;
    
    again.width = 2.3;

 

    // Calculate and display the area of the rectangle

    cout << "The area of the rectangle is: " << calculateArea(rect) << std::endl;

      cout << "The perimeter of the second rectangle is: " << calcPerim(again) << std::endl;


    return 0;

}
