#include "command.h"
#include <istream>
#include <iostream>

using namespace std;

istream& operator>> (istream& in, Command& a)
{
	in >> a.value >> ws;
	cout << a.value << endl;
	return in;
}

float Command::getValue() {
	return value;
}
