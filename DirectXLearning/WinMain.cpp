#include "Window.h"
#include "Mouse.h"
#include <sstream>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	try {
		Window wnd(640, 480, "Donkeys!");

		MSG msg;
		BOOL gResult;
		while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0)
		{
			DispatchMessageW(&msg);
			while (!wnd.mouse.IsEmpty())
			{
				const auto e = wnd.mouse.Read().value();
				if (e.GetType() == Mouse::Event::Type::Move)
				{
					std::ostringstream oss;
					oss << "Mouse Position: (" << e.GetPosX() << ", " << e.GetPosY();
					wnd.SetTitle(oss.str());
				}
			}
				
			if(wnd.kbd.OnKeyPressed(VK_SPACE))
				MessageBox(nullptr, "Pressed SPACE", "Yaaaay!!", MB_OK | MB_ICONINFORMATION);
			if (wnd.mouse.LeftIsPressed())
			{
				std::ostringstream oss;
				oss << "Mouse Position: (" << 1 << ", " << ;
				wnd.SetTitle(oss.str());
			}
		}

		if (gResult == -1)
			return -1;

		return msg.wParam;
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