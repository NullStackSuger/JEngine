#pragma once
#include "Core.h"

namespace JEngine
{
	class JENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}

