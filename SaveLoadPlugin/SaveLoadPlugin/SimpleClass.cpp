#include "SimpleClass.h"

// Core Libraries 
#include <iostream>
#include <fstream>
using namespace std;

//Load
Vec3 SimpleClass::loadPosition()
{
	//Reading the File
	ifstream myfile("save.txt");
	if (myfile.is_open())
	{
		//Read the positions from the file
		myfile >> objectLoadPosition.x;
		myfile >> objectLoadPosition.y;
		myfile >> objectLoadPosition.z;
	}
	
	myfile.close();

	//return the read positions
	return objectLoadPosition;
}

//Save
int SimpleClass::SimpleFunction(float x, float y, float z)
{
	//Writing to a file
	ofstream myfile("save.txt");
	if (myfile.is_open())
	{
		//Write the positions to the file
		myfile << x <<endl;
		myfile << y <<endl;
		myfile << z <<endl;
	}
	
	myfile.close();

	return 1;
}

