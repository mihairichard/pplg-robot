#include <vector>
#include "grid.h"
#include "robot.h"

int main()
{
	grid g(10, 6);
	robot r(g);
	r.move(3, 3);
	r.move(4, 5);
	return 0;
}
