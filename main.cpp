#include <iostream>
#include "grid.h"
#include "robot.h"
#include "command_store.h"

int main()
{
	try {
		grid g(10, 6);
		robot r(g);
		r.move(3, 3);
		command_store cs;
		cs.read();
		r.execute(cs);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

