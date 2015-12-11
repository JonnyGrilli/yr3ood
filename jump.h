#include "command.h"

class Jump: public Command{	
public:
		~Jump();
		Jump(){};
		void run();
};
