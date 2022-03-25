/*
g++ drill16.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp Lines_window.cpp -o main `fltk-config --ldflags --use-images`
*/

#include "Simple_window.h"
#include "Lines_window.h"
#include "GUI.h"

int main()
{
	try {
		Lines_window win {Point{100,100},600,400,"lines"};
		return gui_main();
	}
	catch(exception& e) {
		cerr << "exception: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Some exception\n";
		return 2;
	}
}