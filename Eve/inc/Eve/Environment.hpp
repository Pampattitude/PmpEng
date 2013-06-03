#pragma once

namespace Eve
{
	class Environment
	{
	public:
		static Environment	&get()
		{
			if (nullptr == environ_)
				environ_ = new Environment;
			return *environ_;
		}

	private:
		static Environment	*
	};
}
