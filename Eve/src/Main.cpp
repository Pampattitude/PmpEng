#include "Precomp.hpp"

#include "Defines.hpp"
#include "Types.hpp"

#include <cstdlib>
#include <iostream>

#include "Eve/Eng/Graphics.hpp"
#include "Eve/Eng/File.hpp"

#include "Eve/Math.hpp"

int		main(void)
{
	// atexit() to free singletons & global

	Eve::Eng::Graphics::Context	ctx;
	Eve::Eng::Graphics::Window	win;
	ctx.init();

	win.open(800, 600, "PmpEng::Eve", Eve::Eng::Graphics::Window::Windowed);

	while (win.isOpened())
	{
		glfwPollEvents();
		win.display();
	}

	ctx.terminate();
	win.close();

	system("PAUSE");

	return EXIT_SUCCESS;
}
