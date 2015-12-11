#include "repeat.h"
#include "prog.h"

using namespace std;

Repeat::~Repeat(){
	
}

void
Repeat::run(){
 for(int i(0);i<value;i++)
	program.run();
}

istream& operator>> (istream& in, Repeat& a){

 in >> a.value >> ws;
 cout << a.value << endl;
 in >> a.program;
 return in;

}
