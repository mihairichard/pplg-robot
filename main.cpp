#include <iostream>
#include "grid.h"
#include "robot.h"

int main()
{
	try {
		grid g(10, 6);
		robot r(g);
		r.move(3, 3);
		r.execute_cmd('s');
		r.execute_cmd('r');
		r.execute_cmd('s');
		r.execute_cmd('s');
		r.execute_cmd('l');
		r.execute_cmd('s');
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

