#pragma once

// Dependencies:
//   - "Eve/Eng/Window.hpp"

namespace Eve
{
	namespace Eng
	{
		class Window;

		class Input
		{
		public:
			Input(Window &);

			void	pollEvents();

		private:
			Window	&graph_;
		};
	}
}
