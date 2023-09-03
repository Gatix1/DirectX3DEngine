#pragma once
#include "Window.h"
#include "Timer.h"

class Game 
{
public:
	Game();
	int Initialize();
private:
	void Update();
private:
	Window wnd;
	Timer timer;
};