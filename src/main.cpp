//
// G³ówne exek na chwile obecna.
// - w parametrze œcie¿ka do katalogu z projektem
// - obs³ugiwany jêzyk : Python
// - obs³ugiwana wizualizacja : konsola ;)

#include <iostream>

#include "data/Data.h"
#include "parsers/Parser.h"

#define APP_VERSION ("0.1.1")

int main(int argc, char* argv[])
{
	std::cout << "FLA v." << APP_VERSION << std::endl;

	if(argc > 1)
	{ 
		std::string dir_path(argv[1]);

		Data data;
		PythonParser parser;
		parser.parse(data, dir_path);

	} 
	else
	{
		std::cout << "Nie podano adresu projektu.";
	}
}