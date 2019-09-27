#include "Wrapper.h"

SimpleClass simpleClass;


//Save
int SimpleFunction(float posX, float posY, float posZ)
{
	return simpleClass.SimpleFunction(posX, posY, posZ); //return the saved positions
}

//Load
PLUGIN_API Vec3 loadPosition()
{
	return simpleClass.loadPosition(); //return the loaded positions
}

