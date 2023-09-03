#include "Game.h"

Game::Game() : wnd(800, 400, "Window!") {}

int Game::Initialize()
{
	while (true)
	{
		if (const auto ecode = Window::ProcessMessages())
		{
			return *ecode;
		}
		Update();
	}
}

void Game::Update()
{
	//const float t = timer.PeekTimeElapsed();
	//std::ostringstream oss;
	//oss << "Time elapsed: " << std::setprecision(2) << t << " seconds!";
	//wnd.SetTitle(oss.str());
}