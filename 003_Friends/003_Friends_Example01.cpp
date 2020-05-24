// Example solution for Rectangle and Square friend classes
#include <assert.h>



class Square{
    public:
    Square(double side):side_(side){}
    friend class Rectangle;
    
    private:
    double side_;
};

// Declare class Rectangle
class Rectangle{
    public:
    // Define class Square as friend of Rectangle
    Rectangle(Square square):square_(square){}
    friend class Square;
    double Area();
    
    
    private:
    double width;
    double height;
    Square square_;
};
double Rectangle::Area(){
    return square_.side_ * square_.side_;
}

// Add public constructor to Square, initialize side
    // Add friend class Rectangle

    // Add private attribute side

// Define class Rectangle
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;

// Define a Rectangle constructor that takes a Square

// Define Area() to compute area of Rectangle

// Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}