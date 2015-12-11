#ifndef COMMAND_H
#define COMMAND_H

#include "node.h"
#include <istream>

using namespace std;

class Command:public Node{
protected:
		float value;
		
public:
		Command(){};
		~Command(){};
		float getValue();
		friend istream& operator>>(istream& in, Command& a);
};
#endif
