#include "Game.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	try {
		return Game{}.Initialize();
	}
	catch (const Exception& ex)
	{
		MessageBox(nullptr, ex.what(), ex.GetType(), MB_OK | MB_ICONERROR );
	}
	catch (const std::exception ex)
	{
		MessageBox(nullptr, ex.what(), "Standart Exception!", MB_OK | MB_ICONERROR);
	}
	catch (...)
	{
		MessageBox(nullptr, "Unknown Exception", "Unknown Exception", MB_OK | MB_ICONERROR);
	}
	return -1;
}