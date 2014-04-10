#pragma once

// Dependencies:
//   - <GLFW/glfw3.h>
//   - "Define.hpp"
//   - "Types.hpp"
//   - "Eve/Eng/Input.hpp"

namespace Eve
{
	namespace Eng
	{
		class Input;

		class Window
		{
			friend class Input;

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


			class Context
			{
			public:
				Context();

				void	init() NOEXCEPT;
				void	terminate() NOEXCEPT;

				~Context();
			};


		private:
			GLFWwindow	*win_;
			GLFWmonitor	*scrn_;
		};
	}
}
