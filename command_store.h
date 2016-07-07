#pragma once
#include <vector>
#include <string>
#include "utils.h"

class command_store : public non_copyable
{
public:
	char consume_command();
	bool have_command();
	void read(); // Read from stdin
private:
	std::vector<char> _commands;
	std::vector<char>::iterator _cmdit;
};

class validator_exception : public std::exception
{
public:
	validator_exception(const std::string &msg) : _msg(msg) {}
	virtual const char* what() const noexcept {return _msg.c_str();}
	virtual ~validator_exception() {};
protected:
	std::string _msg;
};
