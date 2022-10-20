#include <iostream>
#include "MenuByList.h"
#include "Zoo.h"

using namespace std;

int main()
{
	mbl::MenuByList main_m("Select an action:",
		{
			"Adding",
			"Removal",
			"Search",
			"Print",
			"Searchand Edit"
		});
	enum
	{
		ADD,
		DELL,
		SEARCH,
		PRINT,
		EDIT
	};

	Zoo _zoo;
	while (true)
	{
		switch (main_m.getChoice())
		{
		case ADD: _zoo.add(); break;
		case DELL: _zoo.dell(); break;
		case SEARCH: _zoo.search(); break;
		case PRINT: _zoo.print(); break;
		case EDIT: _zoo.edit(); break;
		}
	}
}