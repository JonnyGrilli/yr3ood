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

	for (int i = 0; i < cmds.size(); i++) {
		cmds[i]->run();
	}
	

}

istream & operator>>(istream & strm, Prog & prog)
{
	while (!strm.eof()) {

		strm >> prog.command >> ws;
		if (prog.command == "FORWARD")
		{
			Forward* fwd = new Forward();
			cout << "This is a Forward" << endl;
			strm >> (*fwd);
			prog.cmds.push_back(fwd);
		}
		
		if (prog.command == "LEFT" || prog.command == "Right")
		{
			Rotate* rot = new Rotate();
			cout << "This is a Rotate" << endl;
			strm >> (*rot);
			prog.cmds.push_back(rot);
		}

		if (prog.command == "JUMP")
		{
			Jump* jmp = new Jump();
			cout << "This is a Jump" << endl;
			strm >> (*jmp);
			prog.cmds.push_back(jmp);
		}

		if (prog.command == "REPEAT")
		{
			Repeat* rpt = new Repeat();
			cout << "This is a Repeat" << endl;
			strm >> (*rpt);
			prog.cmds.push_back(rpt);
		}

	}
	return strm;
}
