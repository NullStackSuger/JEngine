#pragma once
#include "Core.h"
#include "Events/Event.h"

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

