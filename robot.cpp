#include "robot.h"
#include <stdexcept>

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

void robot::execute_cmd(char cmd)
{
	switch(cmd) {
		case 's' : {execute_s();break;}
		case 'l' : {execute_l();break;}
		case 'r' : {execute_r();break;}
		default: throw std::runtime_error("invalid command");
	}
}

void robot::execute_s()
{
	switch(_orientation) {
		case up: {move(x, y-1);break;}
		case left: {move(x-1, y);break;}
		case down: {move(x, y+1);break;}
		case right: {move(x+1, y);break;}
		default: throw std::runtime_error("invalid orientation");
	}
}

void robot::execute_l()
{
	switch(_orientation) {
		case up: {_orientation = left;break;}
		case left: {_orientation = down;break;}
		case down: {_orientation = right;break;}
		case right: {_orientation = up;break;}
		default: throw std::runtime_error("invalid orientation");
	}
	move(x, y); //trigger redraw
}

void robot::execute_r()
{
	switch(_orientation) {
		case up: {_orientation = right;break;}
		case left: {_orientation = up;break;}
		case down: {_orientation = left;break;}
		case right: {_orientation = down;break;}
		default: throw std::runtime_error("invalid orientation");
	}
	move(x, y); //trigger redraw
}

void robot::execute(command_store& cs)
{
	while(cs.have_command()) {
		execute_cmd(cs.consume_command());
	}
}
