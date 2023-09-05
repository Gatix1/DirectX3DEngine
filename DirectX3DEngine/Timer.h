#pragma once
#include <chrono>

class Timer
{
public:
	Timer();
	float GetTimeElapsed();
	float PeekTimeElapsed() const;
private:
	std::chrono::steady_clock::time_point last;
};