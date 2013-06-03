#pragma once

// Dependencies:
//   - <GL/glfw3.h>
//   - "Define.hpp"
//   - "Types.hpp"

namespace Eve
{
	namespace Eng
	{
		namespace Graphics
		{
			class Window
			{
			public:
				enum Type
				{
					Windowed,	// Non-fullscreen window, closable, minimizable (iconifiable), resizable
					Fullscreen	// Fullscreen window
				};

				Window();

				void	open(uint, uint, char const *, Window::Type);
				void	close() NOEXCEPT;

				bool	isOpened() const NOEXCEPT;

				void	display() NOEXCEPT;

				~Window() NOEXCEPT;

			private:
				GLFWwindow	*win_;
				GLFWmonitor	*scrn_;
			};

			class Context
			{
			public:
				Context();

				void	init() NOEXCEPT;
				void	terminate() NOEXCEPT;

				~Context();
			};
		}
	}
}
