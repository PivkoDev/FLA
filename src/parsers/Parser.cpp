#include "Parser.h"

#include <iostream>
#include <filesystem>

void
Parser::parse(Data& data, std::string dir_path)
{

}

void
Parser::getFilesFromDirectory(std::string dir_name)
{
	for (auto const& el : std::filesystem::recursive_directory_iterator(dir_name))
	{
		std::string file_path = el.path().string();
		if(file_path.find(".py")!=std::string::npos)
			std::cout << el.path() << std::endl;
	}
}


void 
PythonParser::parse(Data& data, std::string dir_path)
{
	std::cout << "parsowanie katalogu z projektem Python [" << dir_path << "]";
	std::cout << std::endl;

	getFilesFromDirectory(dir_path);
}