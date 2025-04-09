#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"

namespace JEngine
{
	class JENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define CORE_ERROR(...) ::JEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_WARN(...) ::JEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_INFO(...) ::JEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_TRACE(...) ::JEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_FATAL(...) ::JEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define CLIENT_ERROR(...) ::JEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define CLIENT_WARN(...) ::JEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CLIENT_INFO(...) ::JEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define CLIENT_TRACE(...) ::JEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CLIENT_FATAL(...) ::JEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
