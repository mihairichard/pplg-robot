#pragma once
#include <vector>

class command_store
{
public:
	char consume_command();
	bool have_command();
	void read(); // Read from stdin
private:
	std::vector<char> _commands;
	std::vector<char>::iterator _cmdit;
};
