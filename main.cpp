// assign1011.cpp : Defines the entry point for the console application.
//

#include "window.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include "prog.h"

using namespace std;

Prog p;

void draw(void)   
{
	p.run();
}

int main ( int argc, char** argv )   // Create Main Function For Bringing It All Together
{
	//window w(argc,argv);  

	if (argc != 2) {
		cerr << "Error: No input file specified" << endl;
		exit(1);
	}

	// open file and store its content in 'input'
	ifstream input(argv[1]);

	//Check if it's open
	if (!input.is_open())
	{
		cerr << "Error: Can't open the file" << endl;
		exit(1);
	}

//	Repeat r;


	//Test read the file's content
	/*string p;
	while (!input.eof())
	{
		input >> p;
		cout << p;
		// content.push_back(p);
	}*/

	input >> p;
	input.close();

	float r(0.0f), g(0.0f), b(0.0f);
	/*cout << "Please enter a background colour" << endl;
	cout << "Enter valuse for red, green and blue component; e.g. 0.0 0.0 1.0 gives blue" << endl << endl;
	cin >> r >> ws >> g >> ws >> b;*/

	window display(argc, argv, r, g, b);
}
