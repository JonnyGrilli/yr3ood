#include "prog.h"
#include "command.h"
#include <iostream>

class Repeat: public Command{	
public:
		Repeat():Command(){};
		~Repeat();
		
		Prog program;
		friend istream& operator>> (istream& in, Repeat& a);
		void run();
};
