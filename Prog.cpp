#include "Prog.h"
#include  <iostream>
#include <vector>
using namespace std;

	Prog::Prog()
	{
		// Default Constructor
	}
	
	
	Prog::~Prog()
	{
		//Default Destructor
	}
	
	Prog::void run() {
		cout << "Running";
	}
	
	istream & operator>>(istream & strm, Prog & prog)
	{

		return strm;
	}
