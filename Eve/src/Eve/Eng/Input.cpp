#include "Precomp.hpp"

#include "Defines.hpp"
#include "Types.hpp"

#include "Eve/Eng/Window.hpp"
#include "Eve/Eng/Input.hpp"

namespace Eve
{
	namespace Eng
	{
		Input::Input(Window &graph)
			:	graph_(graph)
		{}

		void	Input::pollEvents()
		{
			if (nullptr != this->graph_.win_)
			{
				if (GLFW_PRESS == glfwGetKey(this->graph_.win_, GLFW_KEY_ESCAPE))
					graph_.close();
				else
					glfwPollEvents();
			}
		}
	}
}
