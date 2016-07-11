#include "reader.h"
#include <iostream>

char reader::consume_command()
{
	return *_cmdit++;
}

bool reader::have_command()
{
	return _cmdit != _commands.end();
}

void reader::read()
{
	char input[256];
	std::cin.getline(input, 256);
	std::string sin(input);
	for (char c : sin) {
		if (c != 's' && c != 'l' && c != 'r') {
			std::string msg = "invalid input character ";
			msg += c;
			throw validator_exception(msg);
		}
		_commands.push_back(c);
	}
	std::cin.get();
	if (!std::cin.eof()) {
		throw validator_exception("multiple input lines");
	}
	_cmdit = _commands.begin();
}
