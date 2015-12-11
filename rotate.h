#include "command.h"

class Rotate: public Command{
public:
		~Rotate();
		Rotate(bool dir);
		void run();
		friend istream& operator>> (istream& in, Rotate& a);
		bool dir;
private:
		Rotate(){};
		
};
