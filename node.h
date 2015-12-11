#ifndef NODE_H
#define NODE_H

class Node{	
public:
		Node(){};
		virtual ~Node(){};
		virtual void run()=0;
};

#endif //NODE_H
