#include "Precomp.hpp"

#include "Defines.hpp"
#include "Types.hpp"

#include <cstdlib>
#include <iostream>

#include "Eve/Eng/Window.hpp"
#include "Eve/Eng/Input.hpp"
#include "Eve/Eng/File.hpp"

#include "Eve/Environment.hpp"

#include "Eve/Math.hpp"

int		main(void)
{
	Eve::Environment		&e = Eve::Environment::get();

	Eve::Eng::Window			win;
	Eve::Eng::Window::Context	ctx;

	win.open(800, 600, "PmpEng::Eve", Eve::Eng::Window::Windowed);
	ctx.init();

	Eve::Eng::Input				inp(win);

	while (win.isOpened())
	{
		inp.pollEvents();
		if (win.isOpened())
			win.display();
	}

	ctx.terminate();
	win.close();

	system("PAUSE");

	return EXIT_SUCCESS;
}
