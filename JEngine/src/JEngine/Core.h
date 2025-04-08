#pragma once

#ifdef PLATFORM_WINDOWS
	#ifdef BUILD_DLL
		#define JENGINE_API _declspec(dllexport)
	#else
		#define JENGINE_API _declspec(dllimport)
	#endif
#else
	#error Only Support Windows
#endif
