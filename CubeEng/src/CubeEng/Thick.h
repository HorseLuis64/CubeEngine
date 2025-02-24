#pragma once

#ifdef CUBE_WINDOWS
	#ifdef CUBE_DLL
		#define CUBE_API __declspec(dllimport) 
	#else
		#define CUBE_API __declspec(dllexport) 
	#endif

#else
#error OH NOOO

#endif