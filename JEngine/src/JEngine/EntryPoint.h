#pragma once

#ifdef PLATFORM_WINDOWS

extern JEngine::Application* JEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = JEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif
