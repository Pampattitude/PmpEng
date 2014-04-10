#pragma once

// Dependencies:
//   - <cstdlib>
//   - "Eve/Eng/Window.hpp"

namespace Eve
{
	class Environment
	{
	public:
		static Environment	&get()
		{
			if (nullptr == ptr)
			{
				atexit(del);
				ptr = new Environment;
			}
			return *ptr;
		}
		
	private:
		static void			del()
		{ delete ptr; ptr = nullptr; }

		Environment();
		/* Environment(Environment const &) = delete; */
		/* Environment(Environment &&) = delete; */

		/* Environment const	&operator=(Environment) = delete; */

		~Environment() NOEXCEPT;

	private:
		static Environment	*ptr;
	};
}
