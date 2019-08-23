//
// G��wne exek na chwile obecna.
// - w parametrze �cie�ka do katalogu z projektem
// - obs�ugiwany j�zyk : Python
// - obs�ugiwana wizualizacja : konsola ;)

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