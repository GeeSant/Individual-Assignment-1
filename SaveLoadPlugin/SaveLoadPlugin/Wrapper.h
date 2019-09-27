#pragma once

#include "PluginSettings.h"
#include "SimpleClass.h"
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

	//Save 
	PLUGIN_API int SimpleFunction(float x, float y, float z);

	//Load
	PLUGIN_API Vec3 loadPosition();


#ifdef __cplusplus
}
#endif