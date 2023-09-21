#include <iostream>

using namespace std;

class Rectangle
{
    protected:
    int width;
    int height;
    public:
    void read_input()
    {
        cin>>width;
        cin>>height;
    }
    void display()
    {
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea:public Rectangle
{
    public:
    void display()
    {
        int area;
        area = width*height;
          cout<<area;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}