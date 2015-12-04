#pragma once

#include "commands.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Prog {
public:
	Prog(); //Default Constructor
	~Prog(); //Default Destructor
	void run();

	string command;
	int val;

	friend istream & operator>>(istream & strm, Prog & prog);

protected:
	vector<Node*> cmds;

private:
	
	
};
