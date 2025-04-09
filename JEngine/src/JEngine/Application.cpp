#include "hzpch.h"
#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace JEngine
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			CORE_INFO(e.ToString());
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			CORE_INFO(e.ToString());
		}
		
		while (true);
	}
}
