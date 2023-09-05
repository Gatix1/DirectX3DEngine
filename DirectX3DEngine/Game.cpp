
#include "Game.h"

Game::Game() : window(800, 400, "Window!") {}

void Game::Start()
{

}

void Game::Update()
{
	if (window.keyboard.OnKeyPressed('F'))
		window.SetTitle("Nice!");
	if (window.mouse.OnRightPressed())
		window.ShowMessageBox("You Pressed RightBtn!", "Wow, you pressed right mb!", MB_ICONINFORMATION);
	const float c = sin(timer.PeekTimeElapsed()) / 2.0f + 0.5f;
	window.Gfx().ClearBuffer(c, 1.0f, c);
	window.Gfx().EndFrame();
}

void Game::Exit()
{
}
