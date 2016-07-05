#include "robot.h"

char robot::char_for_orientation(robot::orientation o) {
	switch(o) {
		case up : return '^';
		case down : return 'v';
		case left : return '<';
		case right : return '>';
	}
	return 'x';
}
void robot::move(int x, int y) {
	_grid.set(this->x, this->y, '.');
	this->x = x;
	this->y = y;
	_grid.set(x, y, char_for_orientation(_orientation));
	_grid.print();
}
