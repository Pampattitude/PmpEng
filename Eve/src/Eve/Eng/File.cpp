#include "Precomp.hpp"

#include <fstream>

#include "Eve/Eng/File.hpp"

namespace Eve
{
	namespace File
	{
		char	*getContent(char const *path, bool isBinary)
		{
			std::ifstream	file(path, isBinary ? (std::ios::in | std::ios::ate | std::ios::binary)
												: (std::ios::in | std::ios::ate));
			if (file.is_open())
			{
				std::streampos	size = file.tellg();
				char			*cnt = new char[(int unsigned)size];
				memset(cnt, 0, (int unsigned)size);

				file.seekg(0, std::ios::beg);
				file.read(cnt, size);
				file.close();

				return cnt;
			}
			return nullptr;
		}
	}
}

