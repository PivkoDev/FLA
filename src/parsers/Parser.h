#pragma once

#include <string>

#include "../data/Data.h"

class Parser
{
public:
	virtual 
	void parse(Data& data, std::string dir_path);

	void
	getFilesFromDirectory(std::string dir_name);

};

class PythonParser : public Parser
{
public:
	void 
	parse(Data& data, std::string dir_path);
};