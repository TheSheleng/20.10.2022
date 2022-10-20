#pragma once

#include <list>
#include "Animal.h"
#include "MenuByList.h"
#include "UserInput.h"

class Zoo
{
	list<Animal*> animals;
	mbl::MenuByList anim_m;
	enum 
	{
		DOG,
		PARROT,
		ELEPHANT,
		PENGUIN
	};

public:
	Zoo();

	void add();
	void dell();
	void search();
	void print();
	void edit();
};