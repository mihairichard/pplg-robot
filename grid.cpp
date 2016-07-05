#include "grid.h"

grid::grid(int w, int h) {
	this->w = w;
	this->h = h;
	g = std::vector<std::vector<char>>(w, std::vector<char>(h, '.'));
}

void grid::print() {
	for (int i = 0; i < w+2; i++) {
		std::cout << "  *";
	}
	std::cout << std::endl;
	for (int i = 0; i < h; i++) {
		std::cout << "  *";
		for (int j = 0; j < w; j++) {
			std::cout << std::setw(3) << g[j][i];
		}
		std::cout << "  *" << std::endl;
	}
	for (int i = 0; i < w+2; i++) {
		std::cout << "  *";
	}
	std::cout << std::endl << std::endl;
}

void grid::set(int x, int y, char c) {
	g[x][y] = c;
}
