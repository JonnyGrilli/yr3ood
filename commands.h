#pragma once

#include <iostream>

using namespace std;

class Prog;

class Node{
private:
		
		
public:
		Node(){};
		~Node(){};
		virtual void run()=0;
};

class Command:public Node{
protected:
		float value;
		
public:
		Command(){};
		~Command(){};
		float getValue();
		friend istream& operator>>(istream& in, Command& a);
};


class Forward: public Command{
private:
		
public:
		~Forward();
		Forward(){};
		void run();
};

class Rotate: public Command{
private:
		
public:
		~Rotate();
		Rotate(){};
		void run();
};

class Jump: public Command{
private:
		
public:
		~Jump();
		Jump(){};
		void run();
};

class Repeat: public Command{
private:
		
public:
		~Repeat();
		Repeat(){};
		Prog* program;
		friend istream& operator>>(istream& in, Repeat& a);
		void run();
};
