#include "prog.h"

#include  <iostream>

using namespace std;


Prog::Prog()
{
	// Default Constructor
}

Prog::~Prog()
{
	// Default Destructor
}

void Prog::run() {
	cout << "Running with data: " << command << " : " << val << endl;
}

istream & operator>>(istream & strm, Prog & prog)
{
	while (!strm.eof()) {

		//strm >> prog.command >> ws >> prog.val >> ws;
		//cout << prog.command << endl;
		//cout << prog.val << endl;

		strm >> prog.command >> ws;
		if (prog.command == "FORWARD")
		{
			cout << "That was a forward of value: ";
			strm >> prog.val >> ws;
			cout << prog.val << endl;
			//Forward* fwd = new Forward();
			//prog.cmds.push_back(fwd);
		}
		
		if (prog.command == "LEFT" || prog.command == "Right")
		{
			cout << "That was a rotate of value: ";
			strm >> prog.val >> ws;
			cout << prog.val << endl;
			//Rotate* rot = new Rotate();
			//prog.cmds.push_back(rot);
		}

		if (prog.command == "JUMP")
		{
			//Jump* jmp = new Jump();
			//prog.cmds.push_back(jmp);
		}

		if (prog.command == "REPEAT")
		{
			//Repeat* rpt = new Repeat();
			//prog.cmds.push_back(rpt);
		}

	}
	return strm;
}
