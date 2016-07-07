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
	} catch (const validator_exception& e){
		std::cout << "Validation error:" << std::endl
			<< e.what() << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Generic error:" << std::endl
			<< e.what() << std::endl;
	}
	return 0;
}

