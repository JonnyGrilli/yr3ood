#pragma once

#include <vector>


class Prog {
	
	public:
	
	//Default Constructor
	Prog();
	
	//Default Destructor
	~Prog();
	
	void run();
	
	friend istream & operator>>(istream & strm, Prog & prog);
	
	
	private:
	vector<string> cmds;
	/*vector<node*> cmds;*/
}
