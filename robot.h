#pragma once

#include "grid.h"

class robot
{
public:
	enum orientation {
		up,
		down,
		left,
		right
	};
	robot(grid& g) : _grid(g), _orientation(right) {}
	char char_for_orientation(orientation o);
	void move(int x, int y);
	void execute_cmd(char);
private:
	void execute_s();
	void execute_l();
	void execute_r();
private:
	orientation _orientation;
	int x, y;
	grid& _grid;
};

