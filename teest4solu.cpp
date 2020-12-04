/*MY Name: ibrahim hussain mohammed
Class: second class
Department : Computer Engineering

*/
#include <iostream>
#include <string>


using namespace std;

class Shape //the father class.
{
protected:
    int width, height, radius; //definning values
    double pi = 3.14; //PI is  a constant value
public:

    void set_Width() //here is the function for base or width
    {
        cout << "enter the length of width ";
        cin >> width;
    }
    void set_Height()// function for entering the length of the height
    {
        cout << "enter the length of the Height = ";
        cin >> height;
    }
    void set_Radius() //function for the value of the radius
    {
        cout << "enter the Radius  ";
        cin >> radius;
    }
    virtual int area(void) = 0; //pure virtual function
    void TypeArea(void)
    {
        cout << this->area() << "\n";
    }


    virtual int circumference(void) = 0; //pure virtual function


    void Typecircumference(void)
    {
        cout << this->circumference() << "\n";
    }
};
class Polygon :
    public Shape //   inheret class polygon from father clas
{
public:
    int area() //function for finding rip area
    {
        cout << "The Polygon Area = ";
        return (radius * height * width);
    }
    int perimeter() //function for finding the perimeter polygon
    {
        cout << "The Polygon's permerter = ";
        return(width * height);
    }
};


class Triangle :
    public Polygon //inherit the triangle class from the polygon class
{
    int area() //function forThe Triangle's Area 
    {
        cout << "\nThe Triangle's Area = ";
        return (width * height / 2);
    }
    int circumference() //function for Triangle's Circumference
    {
        cout << "The Triangle's Circumference = ";
        return (width + height * 2);
    }
};


class Rectangle :
    public Polygon //inherit the rectangle class from polygon class
{
    int area() //function forRectangle's Area
    {
        cout << "The Rectangle's Area = ";
        return (width * height);
    }
    int circumference() //function for rectangle circumference
    {
        cout << "The Rectangle's Circumference = ";
        return (2 * (height * width));
    }
};


class Square : public Polygon //inherit the class square from polygon class
{
    int area()
    {
        cout << "The Square's Area = ";
        return (height * height);
    }
    int circumference() //function for finding the square circumference
    {
        cout << "The Square's Circumference = ";
        return (4 * height);
    }
};


class Ellipse : public Shape //inherit class ellipes from father class
{
public:
    int area() //function for ellipes
    {
        cout << "The Ellipse's Area = ";
        return (pi * width * height);
    }
    int circumference() //function for finding the circumference
    {
        cout << "The Ellipse's Circumference = ";
        return (pi * (radius * radius));
    }
};
class Circle :
    public Ellipse 
{
public:
    int area()
    {
        cout << "The Circle's Area = ";
        return (pi / 4 * (radius * radius));
    }
    int circumference() 
    {


        cout << "The Circle's Circumference = ";
        return (pi * radius);
    }
};
int main()
{


    Polygon polygon;
    Triangle triangle;
    Rectangle rectangle; 
    Square square ;
    Ellipse ellipse;
    Circle circle ;
    Shape* pointer1 = &polygon;   //defining the first pointer from the father class and connected it with the polygon class 
    Shape* pointer2 = &ellipse;     //defining the second pointer from the father class and connected it with the ellipse class 
    Polygon* pointer3 = &triangle;  //defining the third pointer from the father class and connected it with the triangl class
    Polygon* pointer4 = &rectangle; //defining the fuorth pointer from the father class and connected it with the rectangle class 
    Polygon* pointer5 = &square;    //defining the fifth pointer from the father class and connected it with the square class 
    Ellipse* pointer6 = &circle;    //defining the sexth pointer from the father class and connected it with the circle class 

    cout << "Enter The Value of Polygon's Width and  Height and Radius:" << "endl";
    pointer1->set_Width();
    pointer1->set_Height();
    pointer1->set_Radius();
    pointer1->TypeArea();
    pointer1->Typecircumference();


    cout << "Enter The Value of Ellipse's Width , Height and Radius:" << "endl";
    pointer2->set_Width();
    pointer2->set_Height();
    pointer2->set_Radius();
    pointer2->TypeArea();
    pointer2->Typecircumference();


    cout << "Enter The Value of Triangle's Width and Height:" << "endl";
    pointer3->set_Width();
    pointer3->set_Height();
    pointer3->TypeArea();
    pointer3->Typecircumference();


    cout << "Enter The Value of Rectangle's Width and Height:" << "endl";
    pointer4->set_Width();
    pointer4->set_Height();
    pointer4->TypeArea();
    pointer4->Typecircumference();


    cout << "Enter The Value of Square's Height:" << "endl";
    pointer5->set_Height();
    pointer5->TypeArea();
    pointer5->Typecircumference();


    cout << "Enter The Value of Circle's Radius:";
    pointer6->set_Radius();
    pointer6->TypeArea();
    pointer6->Typecircumference();

    cout << "POLYGON :";
    pointer1->TypeArea();
    pointer1->Typecircumference();

    cout << "ELLIPSE :";
    pointer2->TypeArea();
    pointer2->Typecircumference();

    cout << "TRIANGLE :";
    pointer3->TypeArea();
    pointer3->Typecircumference();

    cout << "RECTANGLE :";
    pointer4->TypeArea();
    pointer4->Typecircumference();

    cout << "SQUARE :";
    pointer5->TypeArea();
    pointer5->Typecircumference();

    cout << "CIRCLE :";
    pointer6->TypeArea();
    pointer6->Typecircumference();
}

