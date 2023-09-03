#pragma once
#include "Window.h"
#include "Timer.h"

class Game 
{
public:
	Game();
	int Initialize()
	{
		Start();
		while (true)
		{
			if (const auto ecode = Window::ProcessMessages())
			{
				return *ecode;
			}
			Update();
		}
		Exit();
	}

private:
	void Start();
	void Update();
	void Exit();
private:
	Window window;
	Timer timer;
};