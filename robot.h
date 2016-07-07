#pragma once

#include "grid.h"
#include "command_store.h"
#include "utils.h"

class robot : public non_copyable
{
public:
	enum orientation {
		up,
		down,
		left,
		right
	};
	robot(grid& g) : _grid(g), _orientation(right), x(0), y(0) {}
	char char_for_orientation(orientation o);
	void move(int x, int y);
	void execute(command_store& cs);
private:
	void execute_cmd(char);
	void execute_s();
	void execute_l();
	void execute_r();
private:
	grid& _grid;
	orientation _orientation;
	int x, y;
};

