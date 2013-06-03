#include "Precomp.hpp"

#include "Defines.hpp"
#include "Types.hpp"

#include <utility>

#include "Eve/Eng/Input.hpp"
#include "Eve/Eng/Window.hpp"

namespace Eve
{
	namespace Eng
	{
		Window::Window()
			:	win_(nullptr), scrn_(nullptr)
		{}

		void	Window::open(uint width, uint height, char const *caption, Window::Type type)
		{
			if (Fullscreen == type)
				this->scrn_ = glfwGetPrimaryMonitor();
			this->win_ = glfwCreateWindow(static_cast<int>(width), static_cast<int>(height),
				caption, this->scrn_, NULL);

			/* TMPTMPTMP : Should throw an error on failure */

			glfwMakeContextCurrent(this->win_);
		}
		void	Window::close()
		{
			if (nullptr != this->win_)
			{
				glfwDestroyWindow(this->win_);
				this->win_ = nullptr;
			}
		}

		bool	Window::isOpened() const NOEXCEPT
		{ return nullptr != this->win_; }

		void	Window::display()
		{
			glfwPollEvents();
			glfwSwapBuffers(this->win_);
		}

		Window::~Window()
		{ this->close(); }


		Window::Context::Context()
		{ glfwInit(); }

		void	Window::Context::init()
		{ glewExperimental = GL_TRUE; glewInit(); /* TMPTMPTMP: Check 4 errs */ }
		void	Window::Context::terminate()
		{ /* */ }

		Window::Context::~Context()
		{ glfwTerminate(); }
	}
}
