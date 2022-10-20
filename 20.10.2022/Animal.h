#pragma once

#include "UserInput.h"
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string name;
    double weight;
    double growth;

public:
    Animal(string _n, double _w, double _g) : name(_n), weight(_w), growth(_g) {}

    void setWeight(double _w) { weight = _w; }
    void setGrowth(double _g) { growth = _g; }

    string getName() { return name; }
    double getWeight() { return weight; }
    double getGrowth() { return growth; }

    virtual void overwrite() = 0;
    virtual void print() = 0;
};

class Dog : public Animal
{
    string breed;

public:
    Dog(string _b, string _n, double _w, double _g) : Animal(_n, _w, _g), breed(_b) {}
    const string& getName() { return breed; }

    virtual void overwrite()
    {
        name = UserInput<string>("Name: ");
        weight = UserInput<double>("Weight: ");
        growth = UserInput<double>("Growth: ");
        breed = UserInput<string>("Breed: ");
    }

    void print() override
    {
        cout << "Dog: " << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << endl;
        cout << "Growth: " << growth << endl;
        cout << "Breed: " << breed << endl;
        cout << endl;
    }
};

class Parrot : public Animal
{
    string color;

public:
    Parrot(string _c, string _n, double _w, double _g) : Animal(_n, _w, _g), color(_c) {}
    const string& getColor() { return color; }

    virtual void overwrite()
    {
        name = UserInput<string>("Name: ");
        weight = UserInput<double>("Weight: ");
        growth = UserInput<double>("Growth: ");
        color = UserInput<string>("Color: ");
    }

    void print() override
    {
        cout << "Parrot: " << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << endl;
        cout << "Growth: " << growth << endl;
        cout << "Color: " << color << endl;
        cout << endl;
    }
};

class Elephant : public Animal
{
    double tuskLen;

public:
    Elephant(double _tl, string _n, double _w, double _g) : Animal(_n, _w, _g), tuskLen(_tl) {}
    double getTuskLen() { return tuskLen; }
    void setTuskLen(double _tl) { tuskLen = _tl; }

    virtual void overwrite()
    {
        name = UserInput<string>("Name: ");
        weight = UserInput<double>("Weight: ");
        growth = UserInput<double>("Growth: ");
        tuskLen = UserInput<double>("Tusk Len: ");
    }

    void print() override
    {
        cout << "Elephant: " << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << endl;
        cout << "Growth: " << growth << endl;
        cout << "Tusk Len: " << tuskLen << endl;
    }
};

class Penguin : public Animal
{
    string breed;

public:
    Penguin(string _b, string _n, double _w, double _g) : Animal(_n, _w, _g), breed(_b) {}
    const string& getBreed() { return breed; }

    virtual void overwrite()
    {
        name = UserInput<string>("Name: ");
        weight = UserInput<double>("Weight: ");
        growth = UserInput<double>("Growth: ");
        breed = UserInput<string>("Breed: ");
    }

    void print() override
    {
        cout << "Penguin: " << endl;
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << endl;
        cout << "Growth: " << growth << endl;
        cout << "Breed: " << breed << endl;
    }
};