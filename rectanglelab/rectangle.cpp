/*
@The goal is to code the class so that it works without changing the main program.
@Author: Jiaxuan Cao
@Last modify time: 3.24
@known bugs: unknown;
*/


#include<iostream>
using namespace std;

class rectangle
{
    public:
        rectangle(int wid=1, int hei=1);//default constructor that sets height and width to 1.
        void add(int height, int width);//declare add member function to add number in height and width.
        void set(int height, int width);//set a number to height and width
        void draw();//printout the output/shape.
        int get_width();//set value of width.
        int get_height();//set value of height.
        bool isSquare();//use bool member function to check if the shape is a square.

    private:
        int width;
        int height;


};


//default constrctor to initialize height and width to 1.
rectangle::rectangle(int wid, int hei)
{
    width = wid;
    height = hei;
}


//increment the data members by given number.
void rectangle::add(int addHeight, int addWidth)
{
    width += addWidth;
    height += addHeight;
}


//overwrite the data members
void rectangle::set(int h, int w)
{
    height = h;
    width = w;

}


//Draw a rectangle using '#' characters.
void rectangle::draw()
{
    for(int i=0;i<height;i++)
    {
        for(int j=0;j< width; j++)
            cout << "#";
        
        cout << endl;
    }
}


//get number of width
int rectangle::get_width()
{
    return width;
}


//get number of height
int rectangle::get_height()
{
    return height;
}


//use number of height and width to check if the shape is square.
bool rectangle::isSquare()
{
    return (width == height);
}


int main()
{
    rectangle r1,r2;

    cout << "unit rectangle" <<endl;
    r1.draw();

    r1.set(4,3);
    cout << "r1 is " << r1.get_height() << " x " <<r1.get_width() <<endl;

    r1.draw();

    r2 = r1;
    
    r2.add(3,4);

    cout << "r2 is " << r2.get_height() << " x " << r2.get_width() <<endl;r2.draw();

    if(r2.isSquare())
        cout << "r2 is a square" <<endl;
    else 
        cout << "r2 is not a square" <<endl;
    
    return 0;
}
