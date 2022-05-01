/*
    g++ drill13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images` -std=c++11
*/
#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    int xmax = 800;
    int ymax = 1000;

    Simple_window win {Point{100,100}, xmax, ymax, "Canvas"};

    Lines grid;
    for (int x = 100; x < xmax; x+=100) 
    {
        grid.add(Point{x,0}, Point{x,ymax});
    }

    for (int y = 100; y < ymax; y+=100) 
    {
        grid.add(Point{0,y}, Point{xmax,y});
    }

    Rectangle rect {Point{0,0}, 100,100};
    rect.set_fill_color(Color::red);
    Rectangle rect2 {Point{100,100}, 100,100};
    rect2.set_fill_color(Color::red);
    Rectangle rect3 {Point{200,200}, 100,100};
    rect3.set_fill_color(Color::red);
    Rectangle rect4 {Point{300,300}, 100,100};
    rect4.set_fill_color(Color::red);
    Rectangle rect5 {Point{400,400}, 100,100};
    rect5.set_fill_color(Color::red);
    Rectangle rect6 {Point{500,500}, 100,100};
    rect6.set_fill_color(Color::red);
    Rectangle rect7 {Point{600,600}, 100,100};
    rect7.set_fill_color(Color::red);
    Rectangle rect8 {Point{700,700}, 100,100};
    rect8.set_fill_color(Color::red);


    Image imag2{Point{200,0}, "catto2.jpg"};
    Image imag3{Point{0,200}, "catto2.jpg"};
    Image imag4{Point{500,300}, "catto2.jpg"};

    win.attach(imag2);
    win.attach(imag3);
    win.attach(imag4);

    win.attach(rect);
    win.attach(rect2);
    win.attach(rect3);
    win.attach(rect4);
    win.attach(rect5);
    win.attach(rect6);
    win.attach(rect7);
    win.attach(rect8);

    win.attach(grid);
    // win.wait_for_button();

    for(int i=0;i<8; ++i)
    {
        Image imag{Point{i*100,i*100}, "catto3.jpg"};
        win.attach(imag);
        win.wait_for_button();
    }
}
