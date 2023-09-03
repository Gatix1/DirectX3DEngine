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
		window.ShowMessageBox("Прикол!", "Ты нажал правую кнопку мыши, ахуеть!", MB_ICONINFORMATION);
}

void Game::Exit()
{
}
