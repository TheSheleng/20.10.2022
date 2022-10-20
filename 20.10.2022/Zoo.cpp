#include "Zoo.h"

Zoo::Zoo() : anim_m("Choose an animal:",
	{
		"Dog",
		"Parrot",
		"Elephant",
		"Penguin",
	}) {}

void Zoo::add()
{
	switch (anim_m.getChoice())
	{
	case DOG: 
		animals.push_back(new Dog(
			UserInput<string>("Breed: "),
			UserInput<string>("Name: "),
			UserInput<double>("Weight: "),
			UserInput<double>("Growth: ")
		));

		break;
	case PARROT:
		animals.push_back(new Parrot(
			UserInput<string>("Color: "),
			UserInput<string>("Name: "),
			UserInput<double>("Weight: "),
			UserInput<double>("Growth: ")
		));

		break;
	case ELEPHANT:
		animals.push_back(new Elephant(
			UserInput<double>("Tusk Len: "),
			UserInput<string>("Name: "),
			UserInput<double>("Weight: "),
			UserInput<double>("Growth: ")
		));

		break;
	case PENGUIN:
		animals.push_back(new Penguin(
			UserInput<string>("Breed: "),
			UserInput<string>("Name: "),
			UserInput<double>("Weight: "),
			UserInput<double>("Growth: ")
		));

		break;
	}
}

void Zoo::dell()
{
	string name = UserInput<string>("Enter name for dell: ");

	cout << "Whu is deleted: " << endl << endl;

	auto it = animals.begin();
	while (it != animals.end())
		if ((*it)->getName() == name)
		{
			(*it)->print();
			animals.erase(it);
			it = animals.begin();
			if (animals.size()) it++;
		}
}

void Zoo::search()
{
	string name = UserInput<string>("Enter name dor search: ");
	cout << "All animal who call " << name << ": " << endl << endl;

	for (auto it = animals.begin(); it != animals.end(); it++)
		if ((*it)->getName() == name) (*it)->print();
}

void Zoo::print()
{
	cout << "All animals: " << endl << endl;
	for (auto it = animals.begin(); it != animals.end(); it++) (*it)->print();
	mbl::MenuByList::enterPause();
}

void Zoo::edit()
{
	int index = UserInput<int>("Enter name index: ");
	if (index >= 0 && index < animals.size())
	{
		auto it = animals.begin();
		for (int i = 0; i < index; i++) it++;
		(*it)->overwrite();
	}
	else
	{
		cout << "Error index;" << endl;
		mbl::MenuByList::enterPause();
	}
}
