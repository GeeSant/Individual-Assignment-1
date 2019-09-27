#pragma once

#include "PluginSettings.h"

// Core Libraries 
#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
using namespace std;


//Used for Loading 
struct Vec3
{
	float x;
	float y;
	float z;
};


class PLUGIN_API SimpleClass
{
public:

	//Load 
	Vec3 objectLoadPosition; //Positions
	Vec3 loadPosition(); //Load Functions

	//Save
	int SimpleFunction(float x, float y, float z); //Save Function
	
};