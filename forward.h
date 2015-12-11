#include "command.h"

class Forward: public Command{	
public:
		~Forward();
		Forward(){};
		void run();
};
