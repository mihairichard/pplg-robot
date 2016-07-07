#pragma once

#include <iostream>
#include <vector>
#include <iomanip>
#include "utils.h"

class grid : public non_copyable
{
public:
	grid(int w, int h);
	void print();
	void set(int x, int y, char c);
private:
	std::vector<std::vector<char>> g;
	int w, h;
};

