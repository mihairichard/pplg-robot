#include "command_store.h"

char command_store::consume_command()
{
	return *_cmdit++;
}

bool command_store::have_command()
{
	return _cmdit != _commands.end();
}

void command_store::read()
{
	_commands = {'s', 'r', 's', 's'};
	_cmdit = _commands.begin();
}
