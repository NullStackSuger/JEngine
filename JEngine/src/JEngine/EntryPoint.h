#pragma once

#ifdef PLATFORM_WINDOWS

extern JEngine::Application* JEngine::CreateApplication();

int main(int argc, char** argv)
{
	JEngine::Log::Init();
	CORE_WARN("111");
	int a = 2;
	CORE_INFO("222 {0}", a);

	auto app = JEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif
