#include "Rectangle.h"


int main() {
	Shape* s = new Shape();
	s->draw();
	delete s;

	Rectangle* r = new Rectangle();
	r->draw();
	delete r;
}